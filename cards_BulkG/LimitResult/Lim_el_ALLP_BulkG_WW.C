{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 14:46:05 2016) by ROOT version5.34/18
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
   
   TH1F *hframe__1 = new TH1F("hframe__1","",1000,0.75,4.05);
   hframe__1->SetMinimum(0.0001);
   hframe__1->SetMaximum(100);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);
   hframe__1->SetLineStyle(0);
   hframe__1->SetMarkerStyle(20);
   hframe__1->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelOffset(0.007);
   hframe__1->GetXaxis()->SetLabelSize(0.035);
   hframe__1->GetXaxis()->SetTitleSize(0.045);
   hframe__1->GetXaxis()->SetTitleOffset(1.1);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} (pb)");
   hframe__1->GetYaxis()->SetNdivisions(505);
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetLabelOffset(0.007);
   hframe__1->GetYaxis()->SetLabelSize(0.035);
   hframe__1->GetYaxis()->SetTitleSize(0.045);
   hframe__1->GetYaxis()->SetTitleOffset(1.1);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetLabelOffset(0.007);
   hframe__1->GetZaxis()->SetLabelSize(0.05);
   hframe__1->GetZaxis()->SetTitleSize(0.06);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(66);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.2087996);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.103539);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.07097056);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.0557035);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.04446648);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.03708215);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.03133361);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.02817491);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.02550726);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.02278493);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.0206616);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01853827);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01666976);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01542391);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.01438976);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.01340643);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.01244414);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.01158033);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01081186);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01007862);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.009449819);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.008945626);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.008425922);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.007845846);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.007311334);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.006859364);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.006456991);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.006108989);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.005738817);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.00543822);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.005177492);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.0049505);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.004739236);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.04857494);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.0491192);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.04993558);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.0510241);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.05211261);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.05374538);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.05523982);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.05740968);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.05958146);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.06229695);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.06555603);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.0677266);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.07017167);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.07342943);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.07696176);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.08020345);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.08264727);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.08583142);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.08887833);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.09253679);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.09863627);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.1072579);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.1185419);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.1271317);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.140142);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.1526712);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.1712573);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.2004166);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.2394841);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.2975834);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.3819165);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.5117307);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.7947164);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.48,4.32);
   Graph_Graph1->SetMinimum(0.004265313);
   Graph_Graph1->SetMaximum(0.8737142);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph1);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(66);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.2745081);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1474276);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1040365);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.08124916);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.06442952);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.05364547);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.04518036);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.04016748);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.03651595);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.03248327);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.02945615);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.02642904);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.02366414);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.02194678);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.02052349);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.01912664);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.0178815);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.01676237);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01571021);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01477617);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01399864);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01328906);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01270512);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.0119144);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01121549);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01067941);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01017722);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.009692463);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.009270387);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.008885081);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.008550537);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.00826701);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.008043102);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.03223234);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.03259349);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.03313521);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.0338575);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.03457979);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.03566323);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.03636597);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.03689352);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.0376657);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.03873037);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.04007034);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.04068802);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.04178956);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.04296072);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.04462433);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.04629174);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.04862502);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.0507286);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.0537392);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.05680684);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.06054416);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.06639207);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.07399645);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.08080254);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.08918036);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.09892998);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.1109736);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.1303503);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.1560875);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.1965248);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.2513177);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.3411654);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.5548409);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(0.007238791);
   Graph_Graph2->SetMaximum(0.6095207);
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
   grae->SetHistogram(Graph_Graph2);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   grae->SetPoint(0,0.8,0.3804463);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.2218074);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1600746);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1245423);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.09941851);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.08219075);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.06944939);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.06191225);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.05581075);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.05006816);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.04540231);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.04073646);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.03678844);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.03418633);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.03203286);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.0302383);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.02844374);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.02682864);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.02539299);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.02422653);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.0231498);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.02234225);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.02162442);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.02054769);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01965041);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01893259);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01821476);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.01772126);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.01718289);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.01682398);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.01646507);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.01619588);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.01601643);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.48,4.32);
   Graph_Graph3->SetMinimum(0.01441479);
   Graph_Graph3->SetMaximum(0.4168893);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineStyle(0);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3);
   
   grae->Draw("l");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   grae->SetPoint(0,0.8,0.5855846);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.3090394);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1976725);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1105532);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.08502436);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.06403787);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.04791265);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.04554898);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.05620958);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.05029917);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.04567732);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.04451421);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.04257551);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.03587709);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.02749736);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.02091999);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.01873969);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.02301606);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.03039234);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.03445977);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.0405813);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.03847738);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.03253187);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.0290265);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.02659681);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.0240056);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01881502);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.01587365);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.01454273);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.01399235);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.01374833);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.01364503);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.01360096);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.48,4.32);
   Graph_Graph4->SetMinimum(0.01224087);
   Graph_Graph4->SetMaximum(0.642783);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineStyle(0);
   Graph_Graph4->SetMarkerStyle(20);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph4);
   
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
   graph->SetPoint(0,0.8,0.07605829337);
   graph->SetPoint(1,0.9,0.0373970446);
   graph->SetPoint(2,1,0.02049969274);
   graph->SetPoint(3,1.1,0.0127890199);
   graph->SetPoint(4,1.2,0.006839560143);
   graph->SetPoint(5,1.3,0.0046544135);
   graph->SetPoint(6,1.4,0.002613740408);
   graph->SetPoint(7,1.5,0.0018026873);
   graph->SetPoint(8,1.6,0.0011483744);
   graph->SetPoint(9,1.7,0.0007430252);
   graph->SetPoint(10,1.8,0.000488293);
   graph->SetPoint(11,1.9,0.0003259225);
   graph->SetPoint(12,2,0.0002395188149);
   graph->SetPoint(13,2.1,0.0001521434);
   graph->SetPoint(14,2.2,0.0001064039);
   graph->SetPoint(15,2.3,7.55822e-05);
   graph->SetPoint(16,2.4,5.45303e-05);
   graph->SetPoint(17,2.5,4.485707788e-05);
   graph->SetPoint(18,2.6,2.97403e-05);
   graph->SetPoint(19,2.7,2.2482e-05);
   graph->SetPoint(20,2.8,1.72616e-05);
   graph->SetPoint(21,2.9,1.34612e-05);
   graph->SetPoint(22,3,9.824860871e-06);
   graph->SetPoint(23,3.1,8.5775e-06);
   graph->SetPoint(24,3.2,7.0087e-06);
   graph->SetPoint(25,3.3,5.8166e-06);
   graph->SetPoint(26,3.4,4.9029e-06);
   graph->SetPoint(27,3.5,4.197582786e-06);
   graph->SetPoint(28,3.6,3.6501e-06);
   graph->SetPoint(29,3.7,3.2237e-06);
   graph->SetPoint(30,3.8,2.8918e-06);
   graph->SetPoint(31,3.9,2.6348e-06);
   graph->SetPoint(32,4,2.438243797e-06);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.48,4.32);
   Graph_Graph1->SetMinimum(2.194419e-06);
   Graph_Graph1->SetMaximum(0.08366388);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.3734171,0.6695804,0.8883417,0.8706294,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{G_{Bulk}#rightarrow WW} #tilde{k}=0.5","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.6595477,0.452028,0.8944724,0.5953846,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(31);
   pt->SetTextSize(0.031);
   TText *text = pt->AddText("WW+WZ enriched combined");
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
   
   TH1F *hframe__2 = new TH1F("hframe__2","",1000,0.75,4.05);
   hframe__2->SetMinimum(0.0001);
   hframe__2->SetMaximum(100);
   hframe__2->SetDirectory(0);
   hframe__2->SetStats(0);
   hframe__2->SetLineStyle(0);
   hframe__2->SetMarkerStyle(20);
   hframe__2->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__2->GetXaxis()->SetLabelFont(42);
   hframe__2->GetXaxis()->SetLabelOffset(0.007);
   hframe__2->GetXaxis()->SetLabelSize(0.035);
   hframe__2->GetXaxis()->SetTitleSize(0.045);
   hframe__2->GetXaxis()->SetTitleOffset(1.1);
   hframe__2->GetXaxis()->SetTitleFont(42);
   hframe__2->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} (pb)");
   hframe__2->GetYaxis()->SetNdivisions(505);
   hframe__2->GetYaxis()->SetLabelFont(42);
   hframe__2->GetYaxis()->SetLabelOffset(0.007);
   hframe__2->GetYaxis()->SetLabelSize(0.035);
   hframe__2->GetYaxis()->SetTitleSize(0.045);
   hframe__2->GetYaxis()->SetTitleOffset(1.1);
   hframe__2->GetYaxis()->SetTitleFont(42);
   hframe__2->GetZaxis()->SetLabelFont(42);
   hframe__2->GetZaxis()->SetLabelOffset(0.007);
   hframe__2->GetZaxis()->SetLabelSize(0.05);
   hframe__2->GetZaxis()->SetTitleSize(0.06);
   hframe__2->GetZaxis()->SetTitleFont(42);
   hframe__2->Draw("sameaxis");
   
   TH1F *hframe__3 = new TH1F("hframe__3","",1000,0.75,4.05);
   hframe__3->SetMinimum(0.0001);
   hframe__3->SetMaximum(100);
   hframe__3->SetDirectory(0);
   hframe__3->SetStats(0);
   hframe__3->SetLineStyle(0);
   hframe__3->SetMarkerStyle(20);
   hframe__3->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__3->GetXaxis()->SetLabelFont(42);
   hframe__3->GetXaxis()->SetLabelOffset(0.007);
   hframe__3->GetXaxis()->SetLabelSize(0.035);
   hframe__3->GetXaxis()->SetTitleSize(0.045);
   hframe__3->GetXaxis()->SetTitleOffset(1.1);
   hframe__3->GetXaxis()->SetTitleFont(42);
   hframe__3->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} (pb)");
   hframe__3->GetYaxis()->SetNdivisions(505);
   hframe__3->GetYaxis()->SetLabelFont(42);
   hframe__3->GetYaxis()->SetLabelOffset(0.007);
   hframe__3->GetYaxis()->SetLabelSize(0.035);
   hframe__3->GetYaxis()->SetTitleSize(0.045);
   hframe__3->GetYaxis()->SetTitleOffset(1.1);
   hframe__3->GetYaxis()->SetTitleFont(42);
   hframe__3->GetZaxis()->SetLabelFont(42);
   hframe__3->GetZaxis()->SetLabelOffset(0.007);
   hframe__3->GetZaxis()->SetLabelSize(0.05);
   hframe__3->GetZaxis()->SetTitleSize(0.06);
   hframe__3->GetZaxis()->SetTitleFont(42);
   hframe__3->Draw("sameaxig");
   
   leg = new TLegend(0.3734171,0.6695804,0.8883417,0.8706294,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{G_{Bulk}#rightarrow WW} #tilde{k}=0.5","L");

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
