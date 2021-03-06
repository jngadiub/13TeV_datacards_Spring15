{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 12:04:59 2016) by ROOT version5.34/18
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,600,630);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->SetHighLightColor(2);
   c2->Range(0.21375,-3.974026,4.33875,2.51948);
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
   hframe__1->SetMinimum(0.001);
   hframe__1->SetMaximum(100);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);
   hframe__1->SetLineStyle(0);
   hframe__1->SetMarkerStyle(20);
   hframe__1->GetXaxis()->SetTitle("M_{W'} (GeV)");
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelOffset(0.007);
   hframe__1->GetXaxis()->SetLabelSize(0.035);
   hframe__1->GetXaxis()->SetTitleSize(0.045);
   hframe__1->GetXaxis()->SetTitleOffset(1.1);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{W'#rightarrow WZ} (pb)");
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
   grae->SetPoint(0,0.8,0.4815079);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.2398972);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1535571);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1092916);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.08361383);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.07107115);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.06164583);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.05431842);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.04908688);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.04361674);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.0390427);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.03607242);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.03343699);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.03097204);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.02864706);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.02648815);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.02437771);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.0224618);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.02065537);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01903534);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01760985);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01622096);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01506068);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01389412);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01290719);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01209175);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01129801);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.01052595);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.009979955);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.009525381);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.009053946);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.008656564);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.008285279);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.06969973);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.0712749);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.07337595);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.07600278);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.07551892);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.07700589);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.07932771);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.08264036);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.08384849);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.0872549);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.09129001);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.09565695);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.1001799);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.1062312);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.1111106);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.1176734);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.1250774);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.1333414);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.142621);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.1524626);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.1656923);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.1781483);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.1934541);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.2161181);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.2440362);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.2734934);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.3132499);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.364244);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.4322363);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.5493981);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.7321202);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,1.004141);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,1.682242);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.48,4.32);
   Graph_Graph1->SetMinimum(0.007456751);
   Graph_Graph1->SetMaximum(1.849637);
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
   grae->SetPoint(0,0.8,0.6115635);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.327313);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.2176346);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1578561);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.1213585);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.1026521);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.08861076);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.07807822);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.06967506);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.06162589);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.05499176);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.05057898);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.04688371);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.04323395);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.0397446);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.03674936);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.0339704);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.03144019);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.02904222);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.02701114);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.02494069);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.02319008);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.02173941);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.02025448);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01887031);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01786022);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01680047);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.015883);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.01510706);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.01468818);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.0140852);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.01358929);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.01311099);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.04223828);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.04281973);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.04369782);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.04486426);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.04467456);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.04578013);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.04775627);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.04968814);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.05109018);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.0540013);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.05694822);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.05968595);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.06306707);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.06693081);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.07070602);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.07625159);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.08105075);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.08690732);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.09351341);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.1005869);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.1089244);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.1181155);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.1289023);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.1440038);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.16342);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.1829715);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.2087246);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.242703);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.2880076);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.3713087);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.4991774);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.6975798);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,1.192134);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(0.01179989);
   Graph_Graph2->SetMaximum(1.310036);
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
   grae->SetPoint(0,0.8,0.8357018);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.4706028);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.3262291);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.2401602);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.1853259);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.1561735);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.1343092);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.1183448);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.1051568);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.09266295);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.08294549);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.07600444);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.07045161);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.06472524);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.05986651);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.05535483);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.05136373);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.04771968);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.04424916);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.04147274);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.03869633);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.03626696);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.03427141);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.0321891);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.03045383);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.02906563);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.02767742);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.02628921);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.02542158);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.02507452);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.02420689);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.02351279);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.02299221);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.48,4.32);
   Graph_Graph3->SetMinimum(0.02069299);
   Graph_Graph3->SetMaximum(0.9169728);
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
   grae->SetPoint(0,0.8,0.9851635);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.4769585);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.2392239);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.2062154);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.1868335);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.1014087);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.06590676);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.08244438);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.104395);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.07374564);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.05452808);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.05236106);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.06354997);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.07387828);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.06691346);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.06056107);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.05410073);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.05245147);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.06273157);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.06749525);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.06521106);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.06403872);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.05692326);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.04576677);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.03916319);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.03323712);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.02854472);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.02540718);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.02328616);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.02226376);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.02128167);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.02059164);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.02011329);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.48,4.32);
   Graph_Graph4->SetMinimum(0.01810196);
   Graph_Graph4->SetMaximum(1.081669);
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
   graph->SetPoint(0,0.8,0.6807755239);
   graph->SetPoint(1,0.9,0.5916737713);
   graph->SetPoint(2,1,0.4541593453);
   graph->SetPoint(3,1.1,0.338000295);
   graph->SetPoint(4,1.2,0.2503529114);
   graph->SetPoint(5,1.3,0.1859560772);
   graph->SetPoint(6,1.4,0.1389695229);
   graph->SetPoint(7,1.5,0.1045827087);
   graph->SetPoint(8,1.6,0.07926705884);
   graph->SetPoint(9,1.7,0.06049124207);
   graph->SetPoint(10,1.8,0.04645925411);
   graph->SetPoint(11,1.9,0.03588760101);
   graph->SetPoint(12,2,0.0278648144);
   graph->SetPoint(13,2.1,0.02173885474);
   graph->SetPoint(14,2.2,0.0170318509);
   graph->SetPoint(15,2.3,0.01339378248);
   graph->SetPoint(16,2.4,0.01056857811);
   graph->SetPoint(17,2.5,0.008370229002);
   graph->SetPoint(18,2.6,0.006636167118);
   graph->SetPoint(19,2.7,0.005278211356);
   graph->SetPoint(20,2.8,0.004205174254);
   graph->SetPoint(21,2.9,0.003356337838);
   graph->SetPoint(22,3,0.002682794712);
   graph->SetPoint(23,3.1,0.002147044808);
   graph->SetPoint(24,3.2,0.0017200264);
   graph->SetPoint(25,3.3,0.001379135586);
   graph->SetPoint(26,3.4,0.001106455464);
   graph->SetPoint(27,3.5,0.0008880528633);
   graph->SetPoint(28,3.6,0.0007129392368);
   graph->SetPoint(29,3.7,0.0005724374902);
   graph->SetPoint(30,3.8,0.0004594857391);
   graph->SetPoint(31,3.9,0.0003688651747);
   graph->SetPoint(32,4,0.0002960180479);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.48,4.32);
   Graph_Graph1->SetMinimum(0.0002664162);
   Graph_Graph1->SetMaximum(0.7488235);
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{W'#rightarrow WZ} , HVT_{B}","L");

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
   hframe__2->SetMinimum(0.001);
   hframe__2->SetMaximum(100);
   hframe__2->SetDirectory(0);
   hframe__2->SetStats(0);
   hframe__2->SetLineStyle(0);
   hframe__2->SetMarkerStyle(20);
   hframe__2->GetXaxis()->SetTitle("M_{W'} (GeV)");
   hframe__2->GetXaxis()->SetLabelFont(42);
   hframe__2->GetXaxis()->SetLabelOffset(0.007);
   hframe__2->GetXaxis()->SetLabelSize(0.035);
   hframe__2->GetXaxis()->SetTitleSize(0.045);
   hframe__2->GetXaxis()->SetTitleOffset(1.1);
   hframe__2->GetXaxis()->SetTitleFont(42);
   hframe__2->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{W'#rightarrow WZ} (pb)");
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
   hframe__3->SetMinimum(0.001);
   hframe__3->SetMaximum(100);
   hframe__3->SetDirectory(0);
   hframe__3->SetStats(0);
   hframe__3->SetLineStyle(0);
   hframe__3->SetMarkerStyle(20);
   hframe__3->GetXaxis()->SetTitle("M_{W'} (GeV)");
   hframe__3->GetXaxis()->SetLabelFont(42);
   hframe__3->GetXaxis()->SetLabelOffset(0.007);
   hframe__3->GetXaxis()->SetLabelSize(0.035);
   hframe__3->GetXaxis()->SetTitleSize(0.045);
   hframe__3->GetXaxis()->SetTitleOffset(1.1);
   hframe__3->GetXaxis()->SetTitleFont(42);
   hframe__3->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{W'#rightarrow WZ} (pb)");
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{W'#rightarrow WZ} , HVT_{B}","L");

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
