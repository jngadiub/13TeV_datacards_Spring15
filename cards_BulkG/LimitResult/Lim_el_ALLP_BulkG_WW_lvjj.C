{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 14:46:06 2016) by ROOT version5.34/18
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
   hframe__4->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__4->GetXaxis()->SetLabelFont(42);
   hframe__4->GetXaxis()->SetLabelOffset(0.007);
   hframe__4->GetXaxis()->SetLabelSize(0.035);
   hframe__4->GetXaxis()->SetTitleSize(0.045);
   hframe__4->GetXaxis()->SetTitleOffset(1.1);
   hframe__4->GetXaxis()->SetTitleFont(42);
   hframe__4->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
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
   grae->SetPoint(0,0.8,0.09089966);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.04507507);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.03089661);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.02425018);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.01935822);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.01614349);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.0136409);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.01226578);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.01110443);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.009919281);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.008994904);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.008070526);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.00725708);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.006714706);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.006264496);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.005836411);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.00541748);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.005041428);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.004706879);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.004387665);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.004113922);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.003894424);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.003668175);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.003415642);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.003182945);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.002986183);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.002811012);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.002659512);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.00249836);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.002367496);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.00225399);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.00215517);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.002063198);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.02114681);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.02138375);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.02173916);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.02221303);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.02268691);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.02339773);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.02404832);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.02499296);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.02593843);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.0271206);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.02853943);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.02948437);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.03054882);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.03196706);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.03350484);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.03491609);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.03597999);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.03736619);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.03869265);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.04028533);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.04294071);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.04669407);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.0516065);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.05534604);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.06100998);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.06646451);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.07455584);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.08725015);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.104258);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.1295512);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.166265);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.2227789);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.345975);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.48,4.32);
   Graph_Graph5->SetMinimum(0.001856878);
   Graph_Graph5->SetMaximum(0.3803662);
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
   grae->SetPoint(0,0.8,0.1195055);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.06418174);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.04529166);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.03537133);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.02804901);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.02335423);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.019669);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.01748667);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.015897);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.0141414);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.01282356);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01150572);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01030204);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.009554399);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.00893478);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.008326668);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.007784605);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.007297399);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.006839346);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.006432715);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.006094224);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.005785313);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.005531099);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.005186864);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.004882598);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.004649216);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.004430593);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.004219556);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.004035807);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.003868067);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.003722425);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.003598993);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.003501516);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.01403216);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.01418938);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.01442521);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.01473966);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.01505411);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.01552577);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.01583171);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.01606137);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.01639754);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.01686103);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.01744438);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.01771328);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.01819284);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.01870269);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.01942693);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.02015283);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.02116861);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.02208439);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.02339504);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.02473052);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.02635754);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.02890339);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.03221391);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.0351769);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.03882413);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.04306857);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.0483117);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.05674721);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.06795174);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.0855559);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.1094097);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.1485243);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.2415467);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.48,4.32);
   Graph_Graph6->SetMinimum(0.003151364);
   Graph_Graph6->SetMaximum(0.2653512);
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
   grae->SetPoint(0,0.8,0.165625);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.0965625);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.0696875);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.05421875);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.04328125);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.03578125);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.03023438);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.02695313);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.02429687);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.02179688);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.01976563);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01773438);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01601562);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01488281);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.01394531);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.01316406);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.01238281);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.01167969);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01105469);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01054688);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01007813);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.009726563);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.009414063);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.008945313);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.008554687);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.008242187);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.007929688);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.007714844);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.007480469);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.007324219);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.007167969);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.007050781);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.006972656);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.48,4.32);
   Graph_Graph7->SetMinimum(0.006275391);
   Graph_Graph7->SetMaximum(0.1814902);
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
   grae->SetPoint(0,0.8,0.2549307);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1345385);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.08605554);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.04812869);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.03701485);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.0278785);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.02085848);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.01982948);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.0244705);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.02189744);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.01988535);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01937899);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01853499);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01561887);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.01197081);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.009107394);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.008158212);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.0100199);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01323112);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01500186);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01766682);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.0167509);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01416255);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01263651);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01157876);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01045069);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.008191006);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.006910498);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.006331092);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.006091487);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.005985252);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.005940284);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.005921098);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.48,4.32);
   Graph_Graph8->SetMinimum(0.005328989);
   Graph_Graph8->SetMaximum(0.2798317);
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
   graph->SetPoint(0,0.8,0.03311152167);
   graph->SetPoint(1,0.9,0.01628057898);
   graph->SetPoint(2,1,0.008924418237);
   graph->SetPoint(3,1.1,0.005567623079);
   graph->SetPoint(4,1.2,0.002977561471);
   graph->SetPoint(5,1.3,0.002026270991);
   graph->SetPoint(6,1.4,0.001137876204);
   graph->SetPoint(7,1.5,0.0007847890999);
   graph->SetPoint(8,1.6,0.0004999379048);
   graph->SetPoint(9,1.7,0.0003234715627);
   graph->SetPoint(10,1.8,0.0002125754278);
   graph->SetPoint(11,1.9,0.0001418884048);
   graph->SetPoint(12,2,0.0001042730789);
   graph->SetPoint(13,2.1,6.623471633e-05);
   graph->SetPoint(14,2.2,4.632229944e-05);
   graph->SetPoint(15,2.3,3.290425728e-05);
   graph->SetPoint(16,2.4,2.373943892e-05);
   graph->SetPoint(17,2.5,1.952825971e-05);
   graph->SetPoint(18,2.6,1.294726116e-05);
   graph->SetPoint(19,2.7,9.787403808e-06);
   graph->SetPoint(20,2.8,7.51473399e-06);
   graph->SetPoint(21,2.9,5.860252653e-06);
   graph->SetPoint(22,3,4.277194231e-06);
   graph->SetPoint(23,3.1,3.73416316e-06);
   graph->SetPoint(24,3.2,3.051195493e-06);
   graph->SetPoint(25,3.3,2.53222191e-06);
   graph->SetPoint(26,3.4,2.134448098e-06);
   graph->SetPoint(27,3.5,1.82739248e-06);
   graph->SetPoint(28,3.6,1.589049134e-06);
   graph->SetPoint(29,3.7,1.403418453e-06);
   graph->SetPoint(30,3.8,1.258927779e-06);
   graph->SetPoint(31,3.9,1.147044371e-06);
   graph->SetPoint(32,4,1.061474808e-06);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(9.553273e-07);
   Graph_Graph2->SetMaximum(0.03642257);
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{G_{Bulk}#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} #tilde{k}=0.5","L");

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
   
   TH1F *hframe__5 = new TH1F("hframe__5","",1000,0.75,4.05);
   hframe__5->SetMinimum(0.0001);
   hframe__5->SetMaximum(100);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineStyle(0);
   hframe__5->SetMarkerStyle(20);
   hframe__5->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__5->GetXaxis()->SetLabelFont(42);
   hframe__5->GetXaxis()->SetLabelOffset(0.007);
   hframe__5->GetXaxis()->SetLabelSize(0.035);
   hframe__5->GetXaxis()->SetTitleSize(0.045);
   hframe__5->GetXaxis()->SetTitleOffset(1.1);
   hframe__5->GetXaxis()->SetTitleFont(42);
   hframe__5->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
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
   hframe__6->GetXaxis()->SetTitle("M_{G_{Bulk}} (GeV)");
   hframe__6->GetXaxis()->SetLabelFont(42);
   hframe__6->GetXaxis()->SetLabelOffset(0.007);
   hframe__6->GetXaxis()->SetLabelSize(0.035);
   hframe__6->GetXaxis()->SetTitleSize(0.045);
   hframe__6->GetXaxis()->SetTitleOffset(1.1);
   hframe__6->GetXaxis()->SetTitleFont(42);
   hframe__6->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{G_{Bulk}#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{G_{Bulk}#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} #tilde{k}=0.5","L");

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
