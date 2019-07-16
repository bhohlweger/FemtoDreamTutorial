#include "TROOT.h"
#include "TSystem.h"
void CompLibs(){
	//Compile the Classes
	gROOT->LoadMacro("AliAnalysisTaskFemtoTutorial.cxx+g");
	gInterpreter->ProcessLine(".x RunLocalAnalysis.C");
//	gInterpreter->ProcessLine(".x runTaskLocal.C");
}
