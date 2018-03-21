/*
 * AddRunsPLBernie.C


 *
 *  Created on: Jan 30, 2017
 *      Author: gu74req
 */

//////////////////
// 2010 pp 7TeV //
// 	   DATA 	//
//////////////////
#ifndef ADDRUNS_C_
#define ADDRUNS_C_

void AddRuns2010b(AliAnalysisAlien * plugin){
	//Corresponding MC Prdocution: LHC14j4b

	//115056,114931, Status 6
	//No AODs 137: 116787,115186,115369,
	Int_t runlist[] ={
			117222,117220,117116,117112,117109,117099,117092,117063,117060,117059,117053,117052,
			117050,117048,116645,116643,116574,116571,116562,116432,116431,116429,116403,116402,
			116372,116360,116358,116288,116102,115414,115406,115401,115393,115327,115312,115193
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2010/LHC10b");
	plugin->SetDataPattern("/pass2/AOD137/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2010b" << std::endl;
}


void AddRuns2010c(AliAnalysisAlien * plugin){
	//LHC14j4c
	//no AODs: 121040,121039,119161,119159, 118561,118560,118558,118556,118518,118506,118359
	Int_t runlist[] = {
			120829,120825,120824,120823,120822,120821,120820,120758,120750,120741,120671,120617,
			120616,120505,120503,120244,120079,120076,120073,120072,120069,120067,119862,119859,
			119856,119853,119849,119846,119845,119844,119841,119163,119086,119067,119061,119057,
			119055,119047,119041,119037};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2010/LHC10c");
	plugin->SetDataPattern("/pass2/AOD137/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2010c" << std::endl;
}

void AddRuns2010d(AliAnalysisAlien * plugin){
	//LHC14j4d, LHC10f6a

	Int_t firstrun=0,lastrun=9999999;

	Int_t runlist[53] = {
			126432,126425,126424,126422,126409,126408,126407,126406,126405,126404,126403,126359,
			126352,126351,126285,126284,126283,126168,126160,126158,126097,126090,126088,126082,
			126081,126078,126073,126008,126007,126004,125855,125851,125850,125849,125848,125847,
			125844,125843,125842,125633,125632,125630,125628,125296,125134,125101,125100,125097,
			125085,125023,124751,122375,122374
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2010/LHC10d");
	plugin->SetDataPattern("/pass2/AOD135/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2010f6a" << std::endl;
}

void AddRuns2010dtest(AliAnalysisAlien * plugin){
	//LHC14j4d, LHC10f6a

	Int_t firstrun=0,lastrun=9999999;

	Int_t runlist[1] = {
			126432
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2010/LHC10d");
	plugin->SetDataPattern("/pass2/AOD135/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2010d Test" << std::endl;
}

void AddRuns2010e(AliAnalysisAlien * plugin){
	//LHC14j4e
	//no AODs: 130848,130847,130844,130842,130608,130601,130529,130520,130375,128850,128621,128505,
	//128498,128263,127931,127719,
	Int_t runlist[116] = {
			130840,130834,130799,130798,130795,130793,130704,130696,130519,130517,130480,
			130356,130354,130343,130342,130179,130178,130172,130158,130157,130149,129983,
			129961,129960,129959,129744,129742,129738,129736,129735,129729,129726,129725,
			129723,129667,129666,129659,129654,129653,129652,129650,129647,129641,129639,
			129599,129587,129586,129540,129528,129527,129523,129520,129514,129513,129512,
			128913,128855,128853,128843,128836,128835,128833,128824,128823,128820,128778,
			128777,128678,128677,128615,128611,128609,128605,128582,128507,128504,128503,
			128495,128494,128486,128483,128452,128366,128260,128192,128191,128189,128186,
			128185,127942,127941,127940,127937,127936,127935,127933,127822,127718,127714,
			127712};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2010/LHC10e");
	plugin->SetDataPattern("/pass2/AOD135/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2010e" << std::endl;
}


//////////////////////////
//	2013 pPp 5.02TeV	//
// 	  		DATA 		//
//////////////////////////

void AddRuns2013bPass2(AliAnalysisAlien * plugin){


	Int_t runlist[] = {
			195483,195482,195481,195480,195479,195391,195389,195351,195344};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2013/LHC13b");
	plugin->SetDataPattern("ESDs/pass2/AOD154/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2013b Pass 2" << std::endl;
}

void AddRuns2013bPass4(AliAnalysisAlien * plugin){


	Int_t runlist[] = {
			195483,195482,195481,195480,195479,195391,195389,195351,195344};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2013/LHC13b");
	plugin->SetDataPattern("/pass4/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2013b Pass 4" << std::endl;
}

void AddRuns2013cPass2(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195677,195675,195673,195644,195635,195633,195596,195593,195592,195568,195567,195566,
			195531,195529};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2013/LHC13c");
	plugin->SetDataPattern("ESDs/pass2/AOD154/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2013c Pass 2" << std::endl;
}

void AddRuns2013cPass4(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195677,195675,195673,195644,195635,195633,195596,195593,195592,195568,195567,195566,
			195531,195529};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2013/LHC13c");
	plugin->SetDataPattern("/pass4/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2013c Pass 4" << std::endl;
}

void AddRuns2013dPass2(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195724,195760,195767,195783,195787,195826,195827,195831,195867,195872};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2013/LHC13d");
	plugin->SetDataPattern("ESDs/pass2/AOD154/*AliAOD.roo");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2013d Pass 2" << std::endl;
}

void AddRuns2013dPass4(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195724,195760,195767,195783,195787,195826,195827,195831,195867,195872};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2013/LHC13d");
	plugin->SetDataPattern("/pass4/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2013d Pass 4" << std::endl;
}

//////////////////////////
//	2013 pPp 5.02TeV	//
// 	  	MC Prod 		//
//////////////////////////

void AddRuns2013b2_p1(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195344,195346,195351,195389,195390,195391,195478,195479,195480,195481,195482,195483,
			195529,195531,195566,195567,195568,195592,195593,195596,195633,195635,195644,195673,
			195675,195677};

	plugin->SetGridDataDir("/alice/sim/2013/LHC13b2_efix_p1");
	plugin->SetDataPattern("/AOD158/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "MC Data added for Run 2013b" << std::endl;

}
void AddRuns2013b2_p2(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195344,195346,195351,195389,195390,195391,195478,195479,195480,195481,195482,195483,
			195529,195531,195566,195567,195568,195592,195593,195596,195633,195635,195644,195673,
			195675,195677};

	plugin->SetGridDataDir("/alice/sim/2013/LHC13b2_efix_p2");
	plugin->SetDataPattern("/AOD158/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "MC Data added for Run 2013b" << std::endl;

}
void AddRuns2013b2_p3(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195344,195346,195351,195389,195390,195391,195478,195479,195480,195481,195482,195483,
			195529,195531,195566,195567,195568,195592,195593,195596,195633,195635,195644,195673,
			195675,195677};

	plugin->SetGridDataDir("/alice/sim/2013/LHC13b2_efix_p3");
	plugin->SetDataPattern("/AOD158/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "MC Data added for Run 2013b" << std::endl;

}
void AddRuns2013b2_p4(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195344,195346,195351,195389,195390,195391,195478,195479,195480,195481,195482,195483,
			195529,195531,195566,195567,195568,195592,195593,195596,195633,195635,195644,195673,
			195675,195677};

	plugin->SetGridDataDir("/alice/sim/2013/LHC13b2_efix_p4");
	plugin->SetDataPattern("/AOD158/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "MC Data added for Run 2013b" << std::endl;

}

void AddRuns2015d4a(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			195344,195346,195351,195389,195390,195391,195478,195479,195480,195481,195482,195483,
			195529,195531,195566,195567,195568,195592,195593,195596,195633,195644,195673,195675,
			195677};

	plugin->SetGridDataDir("/alice/sim/2015/LHC15d4a");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "MC Data added for Run 2013b" << std::endl;

}

//////////////////
// 2010 pp 7TeV //
// 	  MC DATA 	//
//////////////////

void AddRuns2010f6a(AliAnalysisAlien * plugin){
	//pp Pythia 0.6T, 7TeV, LHC10d anchor runs

	Int_t runlist[61] = {
			122374,122375,124751,125023,125085,125097,125100,125101,125133,125134,125139,125140,125156,
			125186,125296,125628,125630,125632,125633,125842,125843,125844,125847,125848,125849,125850,
			125851,125855,126004,126007,126008,126073,126078,126081,126082,126088,126090,126097,126158,
			126160,126167,126168,126283,126284,126285,126350,126351,126352,126359,126403,126404,126405,
			126406,126407,126408,126409,126422,126424,126425,126432,126437};

	plugin->SetGridDataDir("/alice/sim/LHC10f6a/");
	plugin->SetDataPattern("/AOD161/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Monte Carlo Data added for Run LHC0f6a" << std::endl;
}

///////////////////////
// 2010 PbPb 2.76TeV //
// 	  MC DATA 		 //
///////////////////////

void AddRuns2011a10a_bis(AliAnalysisAlien * plugin){
	//PbPb 2.76 TeV Hijing MC

	Int_t runlist[89] = {
			139510, 139507, 139505, 139503, 139465, 139438, 139437, 139360, 139329, 139328,
			139314, 139310, 139309, 139173, 139107, 139105, 139038, 139037, 139036, 139029,
			139028, 138872, 138871, 138870, 138837, 138732, 138730, 138666,	138662, 138653,
			138652, 138638, 138624, 138621, 138583, 138582, 138579, 138578, 138469, 138442,
			138439, 138438, 138396, 138364, 138275, 138225, 138201, 138197, 138192, 138190,
			137848, 137844, 137752, 137751, 137724, 137722, 137718, 137704, 137693, 137692,
			137691, 137686, 137685, 137639, 137638, 137608, 137595, 137549,	137544, 137541,
			137539, 137443, 137441, 137440, 137439, 137434, 137432, 137431,	137430, 137366,
			137243, 137236, 137235, 137232, 137231, 137230, 137162, 137161,	137135};

	plugin->SetGridDataDir("/alice/sim/LHC11a10a_bis"); // PbPb, Hijing
	//standalone, LHC10h anchors, 2760GeV (repeat of LHC11a10a), ID #254
	plugin->SetDataPattern("*AOD162/*AOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Monte Carlo Data added for Run LHC11a10a_bis" << std::endl;
}


void AddRuns2014j4b(AliAnalysisAlien * plugin){
	//Anchored to LHC10b
	//pp 7TeV Pythia Perugia

	Int_t runlist[45] ={
			114786,114798,114918,114920,114924,114930,114931,115186,115193,115310,115318,115322,115328,
			115335,115345,115393,115399,115401,115414,115521,116079,116081,116102,116288,116402,116403,
			116562,116571,116574,116643,116645,117048,117050,117052,117053,117059,117060,117063,117092,
			117099,117109,117112,117116,117220,117222};

	plugin->SetGridDataDir("/alice/sim/2014/LHC14j4b");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Monte Carlo Data added for Run LHC14j4b" << std::endl;
}

void AddRuns2014j4c(AliAnalysisAlien * plugin){
	//Anchored to LHC10c
	//pp 7TeV Pythia Perugia
	//Runrange shorter than the actual sample

	Int_t runlist[45] = {
			118506,118507,118512,118518,118556,118558,118560,118561,119159,119161,119163,119841,119842,
			119844,119845,119846,119849,119853,119856,119859,119862,120067,120069,120072,120076,120079,
			120244,120503,120504,120505,120616,120617,120671,120741,120750,120758,120820,120821,120822,
			120823,120824,120825,120829,121039,121040};


	plugin->SetGridDataDir("/alice/sim/2014/LHC14j4c");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Monte Carlo Data added for Run LHC14j4c" << std::endl;
}

void AddRuns2014j4d(AliAnalysisAlien * plugin){
	//Anchored to LHC10d
	//pp 7TeV Pythia Perugia

	Int_t runlist[62] = {
			122374,122375,124751,125023,125083,125085,125097,125100,125101,125133,125134,125139,125140,
			125156,125186,125295,125296,125628,125630,125632,125633,125842,125843,125844,125847,125848,
			125849,125850,125851,125855,126004,126007,126008,126073,126078,126081,126082,126088,126090,
			126097,126158,126160,126167,126168,126283,126284,126285,126350,126351,126352,126359,126403,
			126404,126405,126406,126407,126408,126409,126422,126424,126425,126432};

	plugin->SetGridDataDir("/alice/sim/2014/LHC14j4d");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Monte Carlo Data added for Run LHC14j4d" << std::endl;
}

void AddRuns2014j4e(AliAnalysisAlien * plugin){
	//Anchored to LHC10e
	//pp 7TeV Pythia Perugia
	//Runrange shorter than the actual sample

	Int_t runlist[123] = {
			128366,128452,128486,128494,128495,128498,128503,128504,128505,128506,128582,128590,128592,
			128594,128596,128605,128609,128611,128615,128621,128677,128678,128777,128778,128819,128820,
			128823,128824,128833,128834,128835,128836,128843,128850,128853,128855,128913,129042,129512,
			129513,129514,129515,129516,129519,129520,129521,129523,129524,129525,129527,129528,129536,
			129540,129586,129587,129599,129639,129641,129647,129650,129651,129652,129653,129659,129666,
			129723,129725,129726,129729,129734,129735,129736,129738,129742,129744,129959,129960,129961,
			129962,129966,129983,130149,130151,130157,130158,130168,130172,130178,130342,130343,130354,
			130356,130358,130360,130375,130479,130480,130481,130517,130519,130520,130524,130526,130601,
			130608,130609,130620,130621,130623,130628,130696,130704,130793,130795,130798,130799,130834,
			130840,130842,130844,130847,130848,130850};

	plugin->SetGridDataDir("/alice/sim/2014/LHC14j4e");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Monte Carlo Data added for Run LHC14j4e" << std::endl;
}


void AddRuns2016d(AliAnalysisAlien *plugin) {
    Int_t runlist[] = {252330, 252326, 252325, 252322, 252319,
        252317, 252310, 252271, 252248, 252235};
    
    plugin->SetRunPrefix("000");
    plugin->SetGridDataDir("/alice/data/2016/LHC16d");
    
    plugin->SetDataPattern("/pass1/AOD/*AliAOD.root");
    
    for (Int_t i = 0; i < sizeof(runlist); i++) {
        if (i == sizeof(runlist) / sizeof(runlist[1])) break;
        plugin->AddRunNumber(runlist[i]);
    }
    
    std::cout << "Data added for Run 2016 d" << std::endl;
}

void AddRuns2016g(AliAnalysisAlien *plugin) {
    Int_t runlist[] = {254332, 254331, 254330, 254304, 254303, 254302,
        254293, 254205, 254204, 254199, 254193, 254178,
        254175, 254174, 254149, 254147, 254128
        
    };
    
    plugin->SetRunPrefix("000");
    plugin->SetGridDataDir("/alice/data/2016/LHC16g");
    plugin->SetDataPattern("/pass1/AOD/*/AliAOD.root");

    
    for (Int_t i = 0; i < sizeof(runlist); i++) {
        if (i == sizeof(runlist) / sizeof(runlist[1])) break;
        plugin->AddRunNumber(runlist[i]);
    }
    
    std::cout << "Data added for Run 2016 g" << std::endl;
}

void AddRuns2016k(AliAnalysisAlien *plugin) {
  Int_t runlist[] = {
      258537, 258499, 258477, 258456, 258454, 258452, 258426, 258393, 258391,
      258387, 258359, 258336, 258332, 258307, 258306, 258303, 258302, 258301,
      258299, 258278, 258274, 258273, 258271, 258270, 258258, 258257, 258256,
      258204, 258203, 258202, 258198, 258197, 258178, 258117, 258114, 258113,
      258109, 258108, 258107, 258063, 258062, 258060, 258059, 258053, 258049,
      258045, 258042, 258041, 258039, 258019, 258017, 258014, 258012, 258008,
      258003, 257992, 257989, 257986, 257979, 257963, 257960, 257957, 257939,
      257937, 257936, 257892, 257855, 257853, 257851, 257850, 257804, 257803,
      257800, 257799, 257798, 257797, 257773, 257765, 257757, 257754, 257737,
      257735, 257734, 257733, 257727, 257725, 257724, 257697, 257694, 257692,
      257691, 257689, 257688, 257687, 257685, 257684, 257682, 257644, 257642,
      257636, 257635, 257632, 257630, 257606, 257605, 257604, 257601, 257595,
      257594, 257592, 257590, 257588, 257587, 257566, 257562, 257561, 257560,
      257541, 257540, 257539, 257537, 257531, 257530, 257492, 257491, 257490,
      257488, 257487, 257474, 257468, 257457, 257433, 257364, 257358, 257330,
      257322, 257320, 257318, 257260, 257224, 257209, 257206, 257204, 257144,
      257141, 257139, 257138, 257137, 257136, 257100, 257095, 257092, 257086,
      257084, 257082, 257080, 257077, 257028, 257026, 257021, 257012, 257011,
      256944, 256942, 256941, 256697, 256695, 256694, 256692, 256691, 256684,
      256681, 256677, 256676, 256658, 256620, 256619, 256592, 256591, 256589,
      256567, 256565, 256564, 256562, 256560, 256557, 256556, 256554, 256552,
      256514, 256512, 256510, 256506, 256504};

  plugin->SetRunPrefix("000");
  plugin->SetGridDataDir("/alice/data/2016/LHC16k");
  plugin->SetDataPattern("/pass1/AOD/*/AliAOD.root");

  for (Int_t i = 0; i < sizeof(runlist); i++) {
    if (i == sizeof(runlist) / sizeof(runlist[1])) break;
    plugin->AddRunNumber(runlist[i]);
  }

  std::cout << "Data added for Run 2016 k" << std::endl;
}

//////////////////////
// 2016 pPb 5.02TeV //
// 	   	DATA 		//
//////////////////////

void AddRuns2016qwSDD(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			265525,265521,265501,265500,265499,265435,265427,265426,265425,265424,265422,
			265421,265420,265419,265388,265387,265385,265384,265383,265381,265378,265377,
			265344,265343,265342,265339,265338,265336,265334,265332,265309
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2016/LHC16q");
	plugin->SetDataPattern("/pass1_CENT_wSDD/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2016q wSDD" << std::endl;
}

void AddRuns2016qwoSDD(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			265525,265521,265501,265500,265499,265435,265427,265426,265425,265424,265422,
			265421,265420,265419,265388,265387,265385,265384,265383,265381,265378,265377,
			265344,265343,265342,265339,265338,265336,265334,265332,265309
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2016/LHC16q");
    plugin->SetDataPattern("/pass1_CENT_woSDD/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2016q woSDD" << std::endl;
}

void AddRuns2016qFAST(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			265525,265521,265501,265500,265499,265435,265427,265426,265425,265424,265422,
			265421,265420,265419,265388,265387,265385,265384,265383,265381,265378,265377,
			265344,265343,265342,265339,265338,265336,265334,265332,265309
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2016/LHC16q");
	plugin->SetDataPattern("/pass1_FAST/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2016q FAST" << std::endl;
}

void AddRuns2016twSDD(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			267166, 267165, 267164, 267163
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2016/LHC16t");
	plugin->SetDataPattern("/pass1_CENT_wSDD/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2016t wSDD" << std::endl;
}

void AddRuns2016twoSDD(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			267166,267165,267164,267163
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2016/LHC16t");
	plugin->SetDataPattern("/pass1_CENT_woSDD/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2016t woSDD" << std::endl;
}

void AddRuns2016tFAST(AliAnalysisAlien * plugin){

	Int_t runlist[] = {
			267166,267165,267164,267163
	};

	plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/data/2016/LHC16t");
	plugin->SetDataPattern("/pass1_FAST/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2016t FAST" << std::endl;
}

void AddRuns2017c(AliAnalysisAlien *plugin) {
  Int_t runlist[] = {270667, 270665, 270663, 270661, 270601, 270598, 270581};

  plugin->SetRunPrefix("000");
  plugin->SetGridDataDir("/alice/data/2017/LHC17c");
  plugin->SetDataPattern("/pass1/AOD/*/AliAOD.root");

  for (Int_t i = 0; i < sizeof(runlist); i++) {
    if (i == sizeof(runlist) / sizeof(runlist[1])) break;
    plugin->AddRunNumber(runlist[i]);
  }

  std::cout << "Data added for Run 2017 c\n";
}



//pPb EPOS
//FAST

void AddRuns2017f2a_fast_q(AliAnalysisAlien * plugin){
	Int_t runlist[28] = {
			265309,265332,265334,265336,265338,265339,265342,265378,265381,265383,265384,
			265385,265388,265419,265420,265421,265422,265424,265425,265426,265427,
			265435,265499,265500,265501,265521,26552
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2a_fast_fix");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2a FAST" << std::endl;
}

void AddRuns2017f2a_fast_t(AliAnalysisAlien * plugin){
	Int_t runlist[4] = {
			267163, 267164, 267165, 267166
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2a_fast_fix");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2a FAST" << std::endl;
}
//cent_woSDD
void AddRuns2017f2a_centwoSDD_q(AliAnalysisAlien * plugin){
	Int_t runlist[28] = {
			265309,265332,265334,265336,265338,265339,265342,265378,265381,265383,265384,
			265385,265387,265388,265419,265420,265421,265422,265424,265425,265426,265427,
			265435,265499,265500,265501,265521,26552
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2a_cent_woSDD_fix/");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2a cent woSDD" << std::endl;
}

void AddRuns2017f2a_centwoSDD_t(AliAnalysisAlien * plugin){
	Int_t runlist[4] = {
			267163, 267164, 267165, 267166
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2a_cent_woSDD_fix/");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2a cent woSDD" << std::endl;
}

//Pb-p Run 2 DPMJET
//FAST
void AddRuns2017f2b_fast_q(AliAnalysisAlien * plugin){
	Int_t runlist[32]= {
			265309,265332,265334,265335,265336,265338,265339,265342,265343,265344,265377,
			265378,265381,265383,265384,265385,265387,265388,265419,265420,265421,265422,
			265424,265425,265426,265427,265435,265499,265500,265501,265521,265525
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2b_fast");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2b FAST" << std::endl;
}

void AddRuns2017f2b_fast_t(AliAnalysisAlien * plugin){
	Int_t runlist[4] = {
			267163,267164,267165,267166
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2b_fast");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2b FAST" << std::endl;
}
//cent_woSDD
void AddRuns2017f2b_centwoSDD_q(AliAnalysisAlien * plugin){
	Int_t runlist[32]= {
			265309,265332,265334,265335,265336,265338,265339,265342,265343,265344,265377,
			265378,265381,265383,265384,265385,265387,265388,265419,265420,265421,265422,
			265424,265425,265426,265427,265435,265499,265500,265501,265521,265525
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2b_cent_woSDD");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2b cent woSDD" << std::endl;
}

void AddRuns2017f2b_centwoSDD_t(AliAnalysisAlien * plugin){
	Int_t runlist[4] = {
			267163,267164,267165,267166
	};
	//plugin->SetRunPrefix("000");
	plugin->SetGridDataDir("/alice/sim/2017/LHC17f2b_cent_woSDD");
	plugin->SetDataPattern("/AOD/*AliAOD.root");

	for (Int_t i = 0; i < sizeof(runlist); i++) {
		if (i == sizeof(runlist) / sizeof(runlist[1]))
			break;
		plugin->AddRunNumber(runlist[i]);
	}

	std::cout << "Data added for Run 2017f2b cent woSDD" << std::endl;
}

void AddRuns2017d17(AliAnalysisAlien * plugin)
{
    //  Pythia8(Monash2013) general-purpose Monte Carlo anchored to LHC16g
    
    Int_t runlist[] ={
        254332, 254331, 254330, 254304, 254303, 254302, 254293, 254205, 254204, 254199,
        254193, 254178, 254175, 254174, 254149, 254148, 254147, 254128
    };
    
    plugin->SetGridDataDir("/alice/sim/2017/LHC17d17");
    //  plugin->SetDataPattern(“AOD/*/AliAOD.root”); // no delta aods available...
    plugin->SetDataPattern("/*/AliAOD.root");
    
    for (Int_t i = 0; i < sizeof(runlist); i++) {
     if (i == sizeof(runlist) / sizeof(runlist[1])) break;
      plugin->AddRunNumber(runlist[i]);
    }
                             
    std::cout << "Monte Carlo Data added for Run LHC17 d17 \n";
}

void AddRunsPLBernie(AliAnalysisAlien* plugin, TString dataPeriod, TString dataSet){

	if(dataPeriod == "LHC10"){
		if(dataSet == "b"){
			AddRuns2010b(plugin);
		}else if(dataSet == "c"){
			AddRuns2010c(plugin);
		}else if(dataSet == "d"){
			AddRuns2010d(plugin);
		}else if(dataSet == "dtest"){
			AddRuns2010dtest(plugin);
		}else if(dataSet == "e"){
			AddRuns2010e(plugin);
		}else if(dataSet == "f6a"){
			AddRuns2010f6a(plugin);
		}else{
			std::cout  << " No Data available for:" << dataSet << std::endl;
		}
	}else if(dataPeriod == "LHC11"){
		if(dataSet == "a10a_bis"){
			AddRuns2011a10a_bis(plugin);
		}
	}else if(dataPeriod == "LHC13"){
		if(dataSet == "bP2"){
			AddRuns2013bPass2(plugin);
		}else if(dataSet == "bP4"){
			AddRuns2013bPass4(plugin);
		}else if(dataSet == "cP2"){
			AddRuns2013cPass2(plugin);
		}else if(dataSet == "cP4"){
			AddRuns2013cPass4(plugin);
		}else if(dataSet == "dP2"){
			AddRuns2013dPass2(plugin);
		}else if(dataSet == "dP4"){
			AddRuns2013dPass4(plugin);
		}else if(dataSet == "b_p1"){
			AddRuns2013b2_p1(plugin);
		}else if(dataSet == "b_p2"){
			AddRuns2013b2_p2(plugin);
		}else if(dataSet == "b_p3"){
			AddRuns2013b2_p3(plugin);
		}else if(dataSet == "b_p4"){
			AddRuns2013b2_p4(plugin);
		}else{
			std::cout  << " No Data available for:" << dataSet << std::endl;
		}
	}else if(dataPeriod == "LHC14"){
		if(dataSet == "j4b"){
			AddRuns2014j4b(plugin);
		}else if(dataSet == "j4c"){
			AddRuns2014j4c(plugin);
		}else if(dataSet == "j4d"){
			AddRuns2014j4d(plugin);
		}else if(dataSet == "j4e"){
			AddRuns2014j4e(plugin);
		}else{
			std::cout  << " No Data available for:" << dataSet << std::endl;
		}
	}else if(dataPeriod == "LHC15"){
		if(dataSet == "d4a"){
			AddRuns2015d4a(plugin);
		}else{
			std::cout  << " No Data available for:" << dataSet << std::endl;
		}
	}else if(dataPeriod == "LHC16"){
		if(dataSet == "qwSDD"){
			AddRuns2016qwSDD(plugin);
		}else if(dataSet == "qwoSDD"){
			AddRuns2016qwoSDD(plugin);
		}else if(dataSet == "qFAST"){
			AddRuns2016qFAST(plugin);
		}else if(dataSet == "twSDD"){
			AddRuns2016twSDD(plugin);
		}else if(dataSet == "twoSDD"){
			AddRuns2016twoSDD(plugin);
		}else if(dataSet == "tFAST"){
			AddRuns2016tFAST(plugin);
        }else if(dataSet == "d") {
            AddRuns2016d(plugin);
        }else if(dataSet == "g") {
            AddRuns2016g(plugin);
        }else if(dataSet == "k") {
            AddRuns2016k(plugin);
        }else{
			std::cout  << " No Data available for:" << dataSet << std::endl;
		}
	}else if(dataPeriod == "LHC17"){
		if(dataSet == "f2a_fast_q"){
			AddRuns2017f2a_fast_q(plugin);//EPOS FAST Q
		}else if(dataSet == "f2a_fast_t"){
			AddRuns2017f2a_fast_t(plugin);//EPOS FAST T
		}else if(dataSet == "f2a_centwoSDD_q"){
			AddRuns2017f2a_centwoSDD_q(plugin);//EPOS woSDD Q
		}else if(dataSet == "f2a_centwoSDD_t"){
			AddRuns2017f2a_centwoSDD_t(plugin);//EPOS woSDD T
		}else if(dataSet == "f2b_fast_q"){
			AddRuns2017f2b_fast_q(plugin);//DPMJET FAST Q
		}else if(dataSet == "f2b_fast_t"){
			AddRuns2017f2b_fast_t(plugin);//DPMJET FAST T
		}else if(dataSet == "f2b_centwoSDD_q"){
			AddRuns2017f2b_centwoSDD_q(plugin);//DPMJET woSDD Q
		}else if(dataSet == "f2b_centwoSDD_t"){
			AddRuns2017f2b_centwoSDD_t(plugin);//DPMJET woSDD T
        }else if(dataSet == "d17"){
            AddRuns2017d17(plugin);//pp 5TeV
  		}else if(dataSet == "c"){
            AddRuns2017c(plugin);//pp 5TeV
		}else{
			std::cout << " No Data available for:" << dataSet << std::endl;
		}
	}else{
		std::cout << dataPeriod << " This period is not implemented for this Task. Add it to"
				" AddRunsPLBernie.C."
				<< std::endl;
	}
	return;
}

#endif
