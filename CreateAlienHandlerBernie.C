#ifndef ALIENHANDLERBERNIE
#define ALIENHANDLERBERNIE
#include "AddRunsPLBernie.C"
#include "TROOT.h"
AliAnalysisAlien *CreateAlienHandlerBernie(TString user,TString analysisType, Bool_t preFinalStage,
                                           TString AliPhysicsVersion, TString JobName, TString dataPeriod, TString dataSet){

  AliAnalysisAlien *plugin = new AliAnalysisAlien();
  plugin->SetUser(user.Data());

  plugin->AddIncludePath("-I. -I$ROOTSYS/include -I$ALICE_ROOT -I$ALICE_ROOT/include -I$ALICE_PHYSICS "
      "-I$ALICE_PHYSICS/include -I$ALICE_ROOT/ITS -I$ALICE_ROOT/TPC -I$ALICE_ROOT/CONTAINERS "
      "-I$ALICE_ROOT/STEER/STEER -I$ALICE_ROOT/STEER/STEERBase -I$ALICE_ROOT/STEER/ESD "
      "-I$ALICE_ROOT/STEER/AOD -I$ALICE_ROOT/TRD -I$ALICE_ROOT/macros -I$ALICE_ROOT/ANALYSIS  "
      "-I$ALICE_PHYSICS/OADB -I$ALICE_PHYSICS/PWGHF -I$ALICE_PHYSICS/PWGHF/base "
      "-I$ALICE_PHYSICS/PWGHF/vertexingHF -I$ALICE_PHYSICS/PWG/FLOW/Base "
      "-I$ALICE_PHYSICS/PWG/FLOW/Tasks -I$ALICE_PHYSICS/PWG -g");
  plugin->SetAnalysisSource(
    "AliAnalysisTaskFemtoTutorial.cxx"
  );
  plugin->SetAdditionalLibs("libPWGflowBase.so libPWGflowTasks.so libPWGHFbase.so "
      "libPWGHFvertexingHF.so libGui.so libRAWDatabase.so libCDB.so libSTEER.so "
      "libTRDbase.so libPWGTRD.so "
      "AliAnalysisTaskFemtoTutorial.cxx AliAnalysisTaskFemtoTutorial.h"
  );

  plugin->SetOverwriteMode(kTRUE);
  plugin->SetRunMode(analysisType.Data());
  plugin->SetMergeViaJDL(preFinalStage);
  plugin->SetMaxMergeStages(2);
  plugin->SetAliPhysicsVersion(AliPhysicsVersion.Data());

  plugin->SetOutputToRunNo(kTRUE);
  plugin->SetDefaultOutputs(kTRUE);
  //plugin->SetCheckCopy(kFALSE);

  gROOT->LoadMacro("AddRunsPLBernie.C");

  AddRunsPLBernie(plugin,dataPeriod,dataSet);

  plugin->SetGridWorkingDir(JobName.Data());
  plugin->SetGridOutputDir("output");

  TString MacroName = "";
  MacroName += JobName.Data();
  MacroName += ".C";
  plugin->SetAnalysisMacro(MacroName.Data());

  TString ExecName = "";
  ExecName += JobName.Data();
  ExecName += ".sh";
  plugin->SetExecutable(ExecName.Data());

  TString JDLName = "";
  JDLName += JobName.Data();
  JDLName += ".jdl";
  plugin->SetJDLName(JDLName.Data());

  plugin->SetSplitMaxInputFileNumber(20);
  plugin->SetNrunsPerMaster(1);
  plugin->SetNtestFiles(1);
  plugin->SetTTL(25000);

  plugin->SetKeepLogs(kTRUE);

  return plugin;

}
#endif
