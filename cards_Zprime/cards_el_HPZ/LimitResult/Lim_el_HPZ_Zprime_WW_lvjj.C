{
//=========Macro generated from canvas: c2/c2
//=========  (Mon Jan 25 22:24:09 2016) by ROOT version5.34/18
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,600,630);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(0.21375,-5.168831,4.33875,2.623377);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetLogy();
   c2->SetGridx();
   c2->SetGridy();
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.13);
   c2->SetRightMargin(0.07);
   c2->SetTopMargin(0.08);
   c2->SetBottomMargin(0.15);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   c2->SetFrameFillStyle(0);
   c2->SetFrameBorderMode(0);
   
   TH1F *hframe__4 = new TH1F("hframe__4","",1000,0.75,4.05);
   hframe__4->SetMinimum(0.0001);
   hframe__4->SetMaximum(100);
   hframe__4->SetDirectory(0);
   hframe__4->SetStats(0);
   hframe__4->SetLineStyle(0);
   hframe__4->SetMarkerStyle(20);
   hframe__4->GetXaxis()->SetTitle("M_{Z'} (GeV)");
   hframe__4->GetXaxis()->SetLabelFont(42);
   hframe__4->GetXaxis()->SetLabelOffset(0.007);
   hframe__4->GetXaxis()->SetLabelSize(0.035);
   hframe__4->GetXaxis()->SetTitleSize(0.045);
   hframe__4->GetXaxis()->SetTitleOffset(1.1);
   hframe__4->GetXaxis()->SetTitleFont(42);
   hframe__4->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
   hframe__4->GetYaxis()->SetNdivisions(505);
   hframe__4->GetYaxis()->SetLabelFont(42);
   hframe__4->GetYaxis()->SetLabelOffset(0.007);
   hframe__4->GetYaxis()->SetLabelSize(0.035);
   hframe__4->GetYaxis()->SetTitleSize(0.045);
   hframe__4->GetYaxis()->SetTitleOffset(1.1);
   hframe__4->GetYaxis()->SetTitleFont(42);
   hframe__4->GetZaxis()->SetLabelFont(42);
   hframe__4->GetZaxis()->SetLabelOffset(0.007);
   hframe__4->GetZaxis()->SetLabelSize(0.05);
   hframe__4->GetZaxis()->SetTitleSize(0.06);
   hframe__4->GetZaxis()->SetTitleFont(42);
   hframe__4->Draw(" ");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(66);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.1873169);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1126099);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.08818359);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.07134155);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.07796021);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.0697229);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.06339722);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.05872925);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.05560486);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.05304504);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.0513385);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.04565002);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.04074646);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.03759827);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.0344989);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.03196838);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.02954041);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.0271637);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.02401825);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.0213916);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01907776);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01716034);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01546238);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01423141);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01319687);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01223679);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01147995);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.01076408);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.01004395);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.009396744);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.00884552);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.008358536);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.007956924);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.07510042);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.07794014);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.08078294);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.08456986);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.08859336);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.09309027);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.09711308);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.1018461);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.1075261);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.114153);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.1208978);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.1311941);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.143023);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.1596051);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.1766476);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.1960566);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.2064604);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.2167396);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.2175559);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.2311664);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.2464073);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.2711421);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.2995192);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.3069055);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.319022);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.3221576);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.3468349);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.3782227);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.3986818);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.3891717);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.443135);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.5284541);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,1.291996);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.48,4.32);
   Graph_Graph5->SetMinimum(0.007161232);
   Graph_Graph5->SetMaximum(1.4204);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetLineStyle(0);
   Graph_Graph5->SetMarkerStyle(20);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph5);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(66);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.2666502);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1564045);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1252712);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1028683);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.1098072);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.09911312);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.08996061);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.08321913);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.07927291);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.07562351);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.07271032);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.06465378);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.0579784);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.05338884);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.04955714);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.0462738);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.04281736);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.03976935);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.03539464);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.03177244);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.02841107);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.0258333);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.02347533);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.02182619);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.02041783);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01916111);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01814307);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.0172287);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.01618587);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.01524832);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.014476);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.01384647);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.0132753);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.0486551);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.05008712);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.05191401);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.05390516);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.0560062);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.0583619);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.06037575);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.06278529);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.06572406);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.06917713);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.07263158);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.07813047);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.08367723);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.09421449);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.1033497);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.1136785);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.1191646);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.126611);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.1305404);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.1396852);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.1500708);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.1650882);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.1838612);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.189973);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.1991405);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.2047573);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.2207108);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.2406847);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.2593717);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.2507781);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.2923575);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.3528894);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.762662);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.48,4.32);
   Graph_Graph6->SetMinimum(0.01194777);
   Graph_Graph6->SetMaximum(0.8376007);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetLineStyle(0);
   Graph_Graph6->SetMarkerStyle(20);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph6);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   grae->SetPoint(0,0.8,0.42625);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.230625);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.188125);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.158125);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.165625);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.150625);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.138125);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.126875);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.1221875);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.1165625);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.1128125);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.1003125);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.0903125);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.0840625);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.0778125);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.0740625);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.0690625);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.0646875);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.05828125);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.05265625);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.0471875);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.04328125);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.03988281);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.03765625);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.03546875);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.03359375);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.03203125);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.03070313);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.02921875);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.02789063);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.02664063);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.02570313);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.02476562);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.48,4.32);
   Graph_Graph7->SetMinimum(0.02228906);
   Graph_Graph7->SetMaximum(0.4663984);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineStyle(0);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph7);
   
   grae->Draw("l");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   grae->SetPoint(0,0.8,0.5142424);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.207122);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1165392);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1642826);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.153586);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.09762315);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.06733659);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.1018115);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.1255282);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.08482885);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.07096568);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.06947135);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.09228604);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.1150317);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.1232854);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.1270424);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.1062025);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.0957219);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.08643444);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.07182993);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.05996934);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.04598908);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.03378978);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.03028612);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.02888194);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.02785542);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.02715075);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.0265228);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.02564369);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.02483137);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.02407903);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.02339924);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.02275951);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.48,4.32);
   Graph_Graph8->SetMinimum(0.02048356);
   Graph_Graph8->SetMaximum(0.5633907);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineStyle(0);
   Graph_Graph8->SetMarkerStyle(20);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph8);
   
   grae->Draw("lp");
   
   TGraph *graph = new TGraph(33);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(3344);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,0.8,0.1541048845);
   graph->SetPoint(1,0.9,0.1315119594);
   graph->SetPoint(2,1,0.1000031076);
   graph->SetPoint(3,1.1,0.07394018519);
   graph->SetPoint(4,1.2,0.0543792095);
   graph->SetPoint(5,1.3,0.04011031717);
   graph->SetPoint(6,1.4,0.0297615603);
   graph->SetPoint(7,1.5,0.02223514506);
   graph->SetPoint(8,1.6,0.01673343613);
   graph->SetPoint(9,1.7,0.01268092948);
   graph->SetPoint(10,1.8,0.009669302138);
   graph->SetPoint(11,1.9,0.007418456222);
   graph->SetPoint(12,2,0.0057230203);
   graph->SetPoint(13,2.1,0.004437179881);
   graph->SetPoint(14,2.2,0.003456097239);
   graph->SetPoint(15,2.3,0.00270316771);
   graph->SetPoint(16,2.4,0.002122290175);
   graph->SetPoint(17,2.5,0.001671764874);
   graph->SetPoint(18,2.6,0.00132101705);
   graph->SetPoint(19,2.7,0.00104681456);
   graph->SetPoint(20,2.8,0.0008316573174);
   graph->SetPoint(21,2.9,0.0006631119334);
   graph->SetPoint(22,3,0.000528181739);
   graph->SetPoint(23,3.1,0.0004221477338);
   graph->SetPoint(24,3.2,0.0003379653589);
   graph->SetPoint(25,3.3,0.0002709608367);
   graph->SetPoint(26,3.4,0.000217516002);
   graph->SetPoint(27,3.5,0.0001748044265);
   graph->SetPoint(28,3.6,0.0001406072394);
   graph->SetPoint(29,3.7,0.000113186436);
   graph->SetPoint(30,3.8,9.117160514e-05);
   graph->SetPoint(31,3.9,7.348418602e-05);
   graph->SetPoint(32,4,5.924874144e-05);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(5.332387e-05);
   Graph_Graph2->SetMaximum(0.1695094);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.3555276,0.6643357,0.8404523,0.8653846,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph1","Asympt. CL_{S}  Expected #pm 1#sigma","LF");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Asympt. CL_{S}  Expected #pm 2#sigma","LF");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{Z'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} , HVT_{B}","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.6595477,0.222028,0.8944724,0.3653846,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(31);
   pt->SetTextSize(0.031);
   TText *text = pt->AddText("WZ enriched");
   text = pt->AddText("#tau_{21} < 0.6");
   pt->Draw();
      tex = new TLatex(0.93,0.936,"2.2 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.0424);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.166,0.89305,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.052);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.166,0.83065,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.02912);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe__5 = new TH1F("hframe__5","",1000,0.75,4.05);
   hframe__5->SetMinimum(0.0001);
   hframe__5->SetMaximum(100);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineStyle(0);
   hframe__5->SetMarkerStyle(20);
   hframe__5->GetXaxis()->SetTitle("M_{Z'} (GeV)");
   hframe__5->GetXaxis()->SetLabelFont(42);
   hframe__5->GetXaxis()->SetLabelOffset(0.007);
   hframe__5->GetXaxis()->SetLabelSize(0.035);
   hframe__5->GetXaxis()->SetTitleSize(0.045);
   hframe__5->GetXaxis()->SetTitleOffset(1.1);
   hframe__5->GetXaxis()->SetTitleFont(42);
   hframe__5->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
   hframe__5->GetYaxis()->SetNdivisions(505);
   hframe__5->GetYaxis()->SetLabelFont(42);
   hframe__5->GetYaxis()->SetLabelOffset(0.007);
   hframe__5->GetYaxis()->SetLabelSize(0.035);
   hframe__5->GetYaxis()->SetTitleSize(0.045);
   hframe__5->GetYaxis()->SetTitleOffset(1.1);
   hframe__5->GetYaxis()->SetTitleFont(42);
   hframe__5->GetZaxis()->SetLabelFont(42);
   hframe__5->GetZaxis()->SetLabelOffset(0.007);
   hframe__5->GetZaxis()->SetLabelSize(0.05);
   hframe__5->GetZaxis()->SetTitleSize(0.06);
   hframe__5->GetZaxis()->SetTitleFont(42);
   hframe__5->Draw("sameaxis");
   
   TH1F *hframe__6 = new TH1F("hframe__6","",1000,0.75,4.05);
   hframe__6->SetMinimum(0.0001);
   hframe__6->SetMaximum(100);
   hframe__6->SetDirectory(0);
   hframe__6->SetStats(0);
   hframe__6->SetLineStyle(0);
   hframe__6->SetMarkerStyle(20);
   hframe__6->GetXaxis()->SetTitle("M_{Z'} (GeV)");
   hframe__6->GetXaxis()->SetLabelFont(42);
   hframe__6->GetXaxis()->SetLabelOffset(0.007);
   hframe__6->GetXaxis()->SetLabelSize(0.035);
   hframe__6->GetXaxis()->SetTitleSize(0.045);
   hframe__6->GetXaxis()->SetTitleOffset(1.1);
   hframe__6->GetXaxis()->SetTitleFont(42);
   hframe__6->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
   hframe__6->GetYaxis()->SetNdivisions(505);
   hframe__6->GetYaxis()->SetLabelFont(42);
   hframe__6->GetYaxis()->SetLabelOffset(0.007);
   hframe__6->GetYaxis()->SetLabelSize(0.035);
   hframe__6->GetYaxis()->SetTitleSize(0.045);
   hframe__6->GetYaxis()->SetTitleOffset(1.1);
   hframe__6->GetYaxis()->SetTitleFont(42);
   hframe__6->GetZaxis()->SetLabelFont(42);
   hframe__6->GetZaxis()->SetLabelOffset(0.007);
   hframe__6->GetZaxis()->SetLabelSize(0.05);
   hframe__6->GetZaxis()->SetTitleSize(0.06);
   hframe__6->GetZaxis()->SetTitleFont(42);
   hframe__6->Draw("sameaxig");
   
   leg = new TLegend(0.3555276,0.6643357,0.8404523,0.8653846,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph1","Asympt. CL_{S}  Expected #pm 1#sigma","LF");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Asympt. CL_{S}  Expected #pm 2#sigma","LF");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{Z'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} , HVT_{B}","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
