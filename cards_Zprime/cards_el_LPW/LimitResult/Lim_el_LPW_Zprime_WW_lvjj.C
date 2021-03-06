{
//=========Macro generated from canvas: c2/c2
//=========  (Mon Jan 25 22:36:13 2016) by ROOT version5.34/18
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
   grae->SetPoint(0,0.8,2.167871);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,1.214385);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.836283);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.5532861);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.4123792);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.3335229);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.2878906);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.2318005);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.1928101);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.1624878);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.1393982);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.1231567);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.1116455);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.09691772);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.08499756);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.07494873);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.06636414);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.05979553);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.05333405);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.04836121);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.04396362);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.04025391);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.03730957);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.03398254);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.0315097);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.02930481);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.02747955);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.02603882);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.02532471);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.02504791);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.02474854);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.02462402);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.02474823);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.3137073);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.310864);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.3099162);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.3099162);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.310864);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.314655);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.3269759);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.34214);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.3610951);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.380998);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.4094307);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.4340723);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.4644005);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.5023108);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.5430643);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.5932953);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.6501607);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.7183991);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.7999062);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.8984728);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,1.019786);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,1.118352);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,1.254829);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,1.450067);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,1.705961);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,2.050944);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,2.539986);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,2.934253);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,3.62801);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,4.867675);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,7.274976);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,10.2206);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,17.04445);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.48,4.32);
   Graph_Graph5->SetMinimum(0.02216162);
   Graph_Graph5->SetMaximum(18.74643);
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
   grae->SetPoint(0,0.8,3.233177);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,1.879594);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,1.31845);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.8778384);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.6542768);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.5266879);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.4532028);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.3654826);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.3040059);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.2574255);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.2219181);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.1960672);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.1792023);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.1557052);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.1377156);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.1223881);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.1094376);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.09932403);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.08943187);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.08202874);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.07530488);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.06938732);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.06497581);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.05993598);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.05596292);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.05262825);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.0499163);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.04774331);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.04687953);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.04629143);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.0460745);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.04607034);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.04641852);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.2081633);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.2062766);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.2056477);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.2056477);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.2062766);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.2087922);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.2169678);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.2270301);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.2396079);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.2528146);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.2716814);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.2880326);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.3081572);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.3333128);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.3603552);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.3936865);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.43142);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.4767002);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.530785);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.5961898);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.6766879);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.7420927);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.8326532);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.962205);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,1.132006);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,1.360923);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,1.685431);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,1.94705);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,2.407399);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,3.22999);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,4.827376);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,6.781973);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,11.31);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.48,4.32);
   Graph_Graph6->SetMinimum(0.0414633);
   Graph_Graph6->SetMaximum(12.43639);
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
   grae->SetPoint(0,0.8,5.62);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,3.37);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,2.39875);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,1.605);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,1.19625);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.9675);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.8375);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.67625);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.5625);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.478125);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.41375);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.36875);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.33625);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.29625);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.26375);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.236875);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.214375);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.195625);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.1790625);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.165625);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.153125);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.143125);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.135);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.125625);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.1190625);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.1128125);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.1078125);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.10375);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.1025);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.1021875);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.1021875);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.1025);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.1034375);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.48,4.32);
   Graph_Graph7->SetMinimum(0.09196875);
   Graph_Graph7->SetMaximum(6.171781);
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
   grae->SetPoint(0,0.8,5.475915);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,1.534803);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,1.150533);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,1.057042);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.8167826);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,1.008296);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.8435748);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.5590761);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.3446418);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.2681449);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.2801471);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.2629566);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.2163572);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.1778426);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.161615);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.1513108);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.1428295);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.1358942);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.1294401);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.1240069);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.1188656);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.11461);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.1108923);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.1063968);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.1028566);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.09985344);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.09680231);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.09446492);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.09455781);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.09507897);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.09573905);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.09651889);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.09771713);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.48,4.32);
   Graph_Graph8->SetMinimum(0.08501843);
   Graph_Graph8->SetMaximum(6.014061);
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
   TText *text = pt->AddText("WW enriched");
   text = pt->AddText("0.6 < #tau_{21} < 0.75");
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
