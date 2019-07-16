
void RunLocalAnalysis()
{
  // since we will compile a class, tell root where to look for headers  
#if !defined (__CINT__) || defined (__CLING__)
  gInterpreter->ProcessLine(".include $ROOTSYS/include");
  gInterpreter->ProcessLine(".include $ALICE_ROOT/include");
#else
  gROOT->ProcessLine(".include $ROOTSYS/include");
  gROOT->ProcessLine(".include $ALICE_ROOT/include");
#endif
     
  // create the analysis manager
  AliAnalysisManager *mgr = new AliAnalysisManager("AnalysisTaskExample");
  AliAODInputHandler *aodH = new AliAODInputHandler();
  mgr->SetInputEventHandler(aodH);

  AliPhysicsSelectionTask *PhysSelTask = reinterpret_cast<AliPhysicsSelectionTask*>(gInterpreter->ExecuteMacro("$ALICE_PHYSICS/OADB/macros/AddTaskPhysicsSelection.C (kFALSE,kTRUE)"));

  AliMultSelectionTask *MultTask = reinterpret_cast<AliMultSelectionTask*>(gInterpreter->ExecuteMacro("$ALICE_PHYSICS/OADB/COMMON/MULTIPLICITY/macros/AddTaskMultSelection.C"));

  AliAnalysisTaskPIDResponse *PIDTask=reinterpret_cast<AliAnalysisTaskPIDResponse*>(gInterpreter->ExecuteMacro("$ALICE_ROOT/ANALYSIS/macros/AddTaskPIDResponse.C ()"));
  gInterpreter->ExecuteMacro("AddTaskFemtoDreamTutorial.C (false,\"kInt7\")");
    
  if(!mgr->InitAnalysis()) return;
  mgr->SetDebugLevel(1);
  mgr->PrintStatus();
  mgr->SetUseProgressBar(1, 250);

  // if you want to run locally, we need to define some input
  TChain* chain = new TChain("aodTree");
  // add a few files to the chain (change this so that your local files are added)
  chain->Add("~/Downloads/AliAOD.root");
  
  mgr->StartAnalysis("local", chain, 1000);

}

