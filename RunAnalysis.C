class AliAnalysisAlien;
#include "CreateAlienHandlerBernie.C"
#include "AliAODInputHandler.h"
//#include "AddTaskFemtoDream.C"
#include "TROOT.h"
#include "TSystem.h"
void RunAnalysis(){
  gSystem->Load("libCore");
  gSystem->Load("libTree");
  gSystem->Load("libGeom");
  gSystem->Load("libVMC");
  gSystem->Load("libXMLIO");
  gSystem->Load("libPhysics");
  gSystem->Load("libSTEERBase");
  gSystem->Load("libESD");
  gSystem->Load("libAOD");
  gSystem->Load("libANALYSIS");
  gSystem->Load("libANALYSISalice");
  gSystem->Load("libANALYSISaliceBase");
  gSystem->Load("libCORRFW");
  gSystem->Load("libOADB");
  gSystem->Load("libPWGflowBase");
  gSystem->Load("libPWGflowTasks");
  gSystem->Load("libqpythia");
  gSystem->Load("libEGPythia6");
  gSystem->Load("libAliPythia6");
  gSystem->Load("libAliPythia8");
  gSystem->Load("libTHerwig");
  gSystem->Load("libHERWIG");
  gSystem->Load("libMinuit");
  gSystem->Load("libPWGHFbase");

  // Use AliRoot includes to compile our task
  gROOT->ProcessLine(".include $ROOTSYS/include");
  gROOT->ProcessLine(".include $ALICE_ROOT/include");
  gROOT->ProcessLine(".include $ALICE_PHYSICS/include");

  gSystem->SetIncludePath("-I. -I$ROOTSYS/include -I$ALICE_ROOT -I$ALICE_ROOT/include -I$ALICE_PHYSICS "
      "-I$ALICE_PHYSICS/include -I$ALICE_ROOT/ANALYSIS/macros -I$ALICE_ROOT/ITS -I$ALICE_ROOT/TPC -I$ALICE_ROOT/CONTAINERS "
      "-I$ALICE_ROOT/STEER/STEER -I$ALICE_ROOT/STEER/STEERBase -I$ALICE_ROOT/STEER/ESD "
      "-I$ALICE_ROOT/STEER/AOD -I$ALICE_ROOT/TRD -I$ALICE_ROOT/macros -I$ALICE_ROOT/ANALYSIS  "
      "-I$ALICE_PHYSICS/OADB -I$ALICE_PHYSICS/PWG -I$ALICE_PHYSICS/OADB/macros/ -g");
// MAKE ME COMMIT 
  // How to use: 
  //analysisType = test: Test locally, an analysis file will be downloaded from the grid 
  //analysisType = full: A batch of jobs will be send to the grid, check status here: https://alimonitor.cern.ch/users/jobs.jsp
  //analysisType = terminate: As soon as jobs are in done, use this option to get your AnalysisResults.root from the grid. 
  //The outputs of the subjobs will be merged, depending on what preFinalStage is set to.  
  TString analysisType = "test";
  //As long as preFinal stage is true, merging jobs will be submitted on the grid. When merging jobs are done, resubmit them, 
  //until no more new ones are submitted. Then, for the final merge and to to download files useo option false
  Bool_t preFinalStage = true;
  //Put AliPhysics Version here, from http://alimonitor.cern.ch/packages/
  //Keep the fudging -1 else doom and despair
  TString AliPhysicsVersion = "vAN-20180320-1";
  //Jobname also creates a folder on AliEN
  //  TString JobName = "momRes";
  TString JobName = "test";
  //For MC Productions kTRUE, Data kFALSE
  Bool_t IsMonteCarlo = false;
  //kMB or kInt7 or kHM
  TString CentEst = "kInt7";
  //Data Period
    //Various datasets are included and can be used, here are some:
  //p-p 7TeV Datasets (kMB!): LHC10b, LHC10c, LHC10d, LHC10e (make sure to change the centrality trigger in the
  //10dtest for a 1 file test sample
  //Add task!
  //p-A 5.02 TeV Datasets (kInt7):  LHC13bP2/4, LHC13cP2/4, LHC13dP2/4 (pass 2 or 4),
  //                  LHC16qwSDD, LHC16qwoSDD,LHC16qFAST, LHC16twSDD, LHC16twoSDD,LHC16tFAST
  //p-p 7TeV MC Productions: LHC14j4b, LHC14j4c, LHC10f6a, LHC14j4d, LHC14j4e
  //p-A 5.02 TeV MC Productions: LHC13b_p1, LHC13b_p2, LHC13b_p3, LHC13b_p4, LHC15d4a (Seems to be not working for my analysis)
  //p-A 5.02 TeV MC Productions:
  //          EPOS:  LHC17f2a_fast_q/t, LHC17f2a_centwoSDD_q/t
  //          DPMJET: LHC17f2b_fast_q/t, LHC1	7f2b_centwoSDD_q/t LHC17
  //test (for a one run sample of LHC13b_p2)
  TString dataPeriod = "LHC16";
  TString dataSet = "d";

  gROOT->LoadMacro("CreateAlienHandlerBernie.C");
  // Create and configure the alien handler plugin
  AliAnalysisAlien *alienHandler =
      CreateAlienHandlerBernie("bhohlweg",analysisType, preFinalStage,
                               AliPhysicsVersion, JobName, dataPeriod, dataSet);

  if (!alienHandler)
    return;

  // Create the analysis manager
  AliAnalysisManager *mgr = new AliAnalysisManager("MyAnalysis");

  // Connect plug-in to the analysis manager
  mgr->SetGridHandler(alienHandler);

  // create an input handler
  AliAODInputHandler *inputH = new AliAODInputHandler();
  mgr->SetInputEventHandler(inputH);

  TGrid::Connect("alien://");

    AliMultSelectionTask *task = reinterpret_cast<AliMultSelectionTask*>(gInterpreter->ExecuteMacro("$ALICE_PHYSICS/OADB/COMMON/MULTIPLICITY/macros/AddTaskMultSelection.C (true)"));

  //PID Response needed for the nSigma PID
    AliAnalysisTaskPIDResponse *PIDTask=reinterpret_cast<AliAnalysisTaskPIDResponse*>(
        gInterpreter->ExecuteMacro(
            "$ALICE_ROOT/ANALYSIS/macros/AddTaskPIDResponse.C ()"));

  //Add Task here
  gInterpreter->ExecuteMacro("AddTaskFemtoDreamTutorial.C (false,\"kInt7\")");
  if (!mgr->InitAnalysis()) {
    printf("Impossible to initialize the manager!\n");
    return;
  }
  // print to screen how the analysis is progressing
  mgr->SetUseProgressBar(1, 25);
  // print the status of the manager to screen
  mgr->PrintStatus();
  // Start analysis in grid.
  mgr->StartAnalysis("grid");


}
