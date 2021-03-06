{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 14:45:35 2016) by ROOT version5.34/18
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
   grae->SetPoint(0,0.8,4.727314);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,2.408745);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,1.634761);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,1.210396);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.9690949);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.7526207);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.6363334);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.5347334);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.4611958);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.4067085);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.3812819);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.3078284);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.2675518);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.2290837);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.2000792);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.1767769);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.1576547);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.140863);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.1307476);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.121807);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.1148237);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.1088582);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.1034885);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.09617709);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.0899452);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.08433721);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.07982979);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.07555229);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.0712776);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.06757632);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.06441131);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.06179132);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.06009315);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.8294477);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.834346);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.8512179);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.8708112);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.8925815);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.9274139);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.9535383);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.9883707);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,1.023203);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,1.066744);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,1.127701);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,1.153825);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,1.188657);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,1.232198);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,1.293155);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,1.36282);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,1.506503);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,1.668692);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,1.854828);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,2.098655);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,2.429563);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,2.795304);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,3.422288);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,3.639991);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,4.127645);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,4.772046);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,5.695105);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,6.774912);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,8.67328);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,10.83289);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,14.46417);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,20.55114);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,35.80629);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.48,4.32);
   Graph_Graph1->SetMinimum(0.05408384);
   Graph_Graph1->SetMaximum(39.38091);
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
   grae->SetPoint(0,0.8,6.911985);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,3.75653);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,2.58979);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,1.939137);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,1.537786);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,1.198151);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,1.009751);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.8471654);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.7318378);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.6453759);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.6060064);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.4876692);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.4259461);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.3646983);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.3214413);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.2854522);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.256332);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.2300371);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.2156284);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.2034842);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.1933014);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.1847119);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.177912);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.1675531);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.1580856);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.1499155);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.1435137);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.1376093);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.1309555);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.1254663);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.1214323);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.1172031);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.1155265);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.5503875);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.5536378);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.5648334);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.5778347);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.5922805);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.6153939);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.632729);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.6558424);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.6789558);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.7078475);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.7482959);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.7656309);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.7887444);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.8176361);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.8580845);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.9043113);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.999654);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,1.107276);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,1.230788);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,1.392582);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,1.612159);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,1.854849);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,2.27089);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,2.415349);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,2.738936);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,3.166534);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,3.779039);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,4.495554);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,5.755233);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,7.188263);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,9.597834);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,13.6369);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,23.57231);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(0.1039738);
   Graph_Graph2->SetMaximum(25.91799);
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
   grae->SetPoint(0,0.8,11.80676);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,6.776251);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,4.769217);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,3.571888);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,2.859807);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,2.233866);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,1.877825);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,1.573468);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,1.360993);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.2002);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.128418);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.9216849);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.8010906);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.6919815);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.6115853);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.5502114);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.4967336);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.4493573);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.4263869);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.4062879);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.3919314);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.3804463);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.3718324);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.3517333);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.3373769);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.3258917);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.3144065);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.3057927);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.2943075);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.2871293);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.2806689);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.2751057);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.2734906);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.48,4.32);
   Graph_Graph3->SetMinimum(0.2461416);
   Graph_Graph3->SetMaximum(12.96008);
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
   grae->SetPoint(0,0.8,22.45353);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,18.6763);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,8.762514);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,2.483476);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,2.680738);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,1.587577);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,1.030705);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.782786);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.9203282);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.593672);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.69986);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.248623);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.8771325);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.7964738);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.6330627);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.4582344);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.3465768);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.3054222);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.3316662);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.4803791);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.543345);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.5610271);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.5666633);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.5403695);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.4669472);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.3585661);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.304009);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.2787993);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.2639923);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.2568489);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.2528452);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.2507413);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.2516406);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.48,4.32);
   Graph_Graph4->SetMinimum(0.2256672);
   Graph_Graph4->SetMaximum(24.67381);
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
