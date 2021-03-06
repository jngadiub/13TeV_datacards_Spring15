{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 11:31:29 2016) by ROOT version5.34/18
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
   
   TH1F *hframe__4 = new TH1F("hframe__4","",1000,0.75,4.05);
   hframe__4->SetMinimum(0.001);
   hframe__4->SetMaximum(100);
   hframe__4->SetDirectory(0);
   hframe__4->SetStats(0);
   hframe__4->SetLineStyle(0);
   hframe__4->SetMarkerStyle(20);
   hframe__4->GetXaxis()->SetTitle("M_{W'} (GeV)");
   hframe__4->GetXaxis()->SetLabelFont(42);
   hframe__4->GetXaxis()->SetLabelOffset(0.007);
   hframe__4->GetXaxis()->SetLabelSize(0.035);
   hframe__4->GetXaxis()->SetTitleSize(0.045);
   hframe__4->GetXaxis()->SetTitleOffset(1.1);
   hframe__4->GetXaxis()->SetTitleFont(42);
   hframe__4->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{W'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
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
   grae->SetPoint(0,0.8,0.1112341);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.05649414);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.0363324);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.0257309);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.01963776);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.01685211);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.01450562);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.01287308);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.0115361);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.01024765);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.009153595);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.00849472);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.007865295);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.007248917);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.006711273);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.006177979);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.005718307);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.005261765);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.00485878);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.004497452);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.004140701);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.003828049);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.003557663);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.003302879);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.00306324);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.00286438);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.002682304);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.002522621);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.002388287);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.00229248);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.002193165);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.002097359);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.00202034);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.01723094);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.01764471);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.01805844);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.01853134);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.01876662);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.01934656);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.01990112);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.02064819);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.02093553);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.02181068);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.0226932);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.02361272);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.02466038);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.02585126);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.02711556);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.02854325);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.03023109);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.03230279);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.03441094);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.03679139);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.03961369);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.04251004);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.04619057);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.05171135);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.05812538);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.06541383);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.07434218);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.08650881);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.1024027);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.1311325);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.1750454);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.2387324);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.3983559);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.48,4.32);
   Graph_Graph5->SetMinimum(0.001818306);
   Graph_Graph5->SetMaximum(0.4379894);
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
   grae->SetPoint(0,0.8,0.1417624);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.0768137);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.05181265);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.03734626);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.02864364);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.02434046);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.02095129);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.01838543);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.0163989);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.01450003);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.01295198);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01189021);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01098465);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01016407);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.009352176);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.008647428);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.008004018);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.007432052);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.006849862);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.006369706);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.005919697);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.005525615);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.005186267);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.004828808);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.004524582);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.004270749);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.004047428);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.003818592);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.003651041);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.003561106);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.003413481);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.00330441);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.003208036);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.01062239);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.01078512);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.01094348);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.01113305);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.01107789);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.01129233);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.01177286);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.01222205);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.01258764);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.01319795);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.01382732);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.01461371);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.01538355);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.01626453);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.01708412);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.0181637);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.01941207);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.02081557);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.0222572);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.02397936);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.02592686);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.02804593);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.03047415);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.03411647);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.03873009);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.04358653);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.04953566);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.057844);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.06823295);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.08817533);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.118108);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.1649071);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.2788268);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.48,4.32);
   Graph_Graph6->SetMinimum(0.002887232);
   Graph_Graph6->SetMaximum(0.3063887);
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
   grae->SetPoint(0,0.8,0.194375);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.11125);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.0771875);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.05703125);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.04390625);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.03703125);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.031875);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.02804687);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.02492187);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.02195313);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.01960938);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01804688);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01664062);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01527344);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.01414063);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.013125);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.01214844);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.01136719);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01058594);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.009882813);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.009257813);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.008710937);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.008242187);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.007792969);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.007363281);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.007050781);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.006699219);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.006425781);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.006191406);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.006113281);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.005957031);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.005820312);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.005683594);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.48,4.32);
   Graph_Graph7->SetMinimum(0.005115234);
   Graph_Graph7->SetMaximum(0.2132441);
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
   grae->SetPoint(0,0.8,0.2374042);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1233588);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.06058936);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.04955638);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.0450327);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.02401704);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.01590123);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.02010964);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.02600099);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.01865003);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.01360886);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01293624);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01607155);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01886259);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.01697419);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.01539836);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.01371475);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.01291894);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01400856);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01428058);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01349814);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01346531);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.0126634);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01097843);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.009768457);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.008423322);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.007185154);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.006373543);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.005854225);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.005590021);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.005347208);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.005179284);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.005049482);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.48,4.32);
   Graph_Graph8->SetMinimum(0.004544534);
   Graph_Graph8->SetMaximum(0.2606397);
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
   graph->SetPoint(0,0.8,0.1532495143);
   graph->SetPoint(1,0.9,0.133191801);
   graph->SetPoint(2,1,0.1022359011);
   graph->SetPoint(3,1.1,0.07608731401);
   graph->SetPoint(4,1.2,0.05635699395);
   graph->SetPoint(5,1.3,0.04186060973);
   graph->SetPoint(6,1.4,0.0312834571);
   graph->SetPoint(7,1.5,0.02354263446);
   graph->SetPoint(8,1.6,0.01784382347);
   graph->SetPoint(9,1.7,0.0136171956);
   graph->SetPoint(10,1.8,0.01045845198);
   graph->SetPoint(11,1.9,0.00807866504);
   graph->SetPoint(12,2,0.006272653942);
   graph->SetPoint(13,2.1,0.004893637938);
   graph->SetPoint(14,2.2,0.003834043362);
   graph->SetPoint(15,2.3,0.003015077052);
   graph->SetPoint(16,2.4,0.002379094731);
   graph->SetPoint(17,2.5,0.001884223925);
   graph->SetPoint(18,2.6,0.001493868907);
   graph->SetPoint(19,2.7,0.001188179214);
   graph->SetPoint(20,2.8,0.0009466276174);
   graph->SetPoint(21,2.9,0.000755545882);
   graph->SetPoint(22,3,0.0006039244543);
   graph->SetPoint(23,3.1,0.0004833216862);
   graph->SetPoint(24,3.2,0.0003871954869);
   graph->SetPoint(25,3.3,0.0003104574876);
   graph->SetPoint(26,3.4,0.0002490744108);
   graph->SetPoint(27,3.5,0.0001999097577);
   graph->SetPoint(28,3.6,0.0001604898942);
   graph->SetPoint(29,3.7,0.0001288615179);
   graph->SetPoint(30,3.8,0.0001034349266);
   graph->SetPoint(31,3.9,8.303531324e-05);
   graph->SetPoint(32,4,6.663668196e-05);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(5.997301e-05);
   Graph_Graph2->SetMaximum(0.1685678);
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{W'#rightarrow WZ} #times BR_{WZ #rightarrow e#nuqq} , HVT_{B}","L");

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
   hframe__5->SetMinimum(0.001);
   hframe__5->SetMaximum(100);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineStyle(0);
   hframe__5->SetMarkerStyle(20);
   hframe__5->GetXaxis()->SetTitle("M_{W'} (GeV)");
   hframe__5->GetXaxis()->SetLabelFont(42);
   hframe__5->GetXaxis()->SetLabelOffset(0.007);
   hframe__5->GetXaxis()->SetLabelSize(0.035);
   hframe__5->GetXaxis()->SetTitleSize(0.045);
   hframe__5->GetXaxis()->SetTitleOffset(1.1);
   hframe__5->GetXaxis()->SetTitleFont(42);
   hframe__5->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{W'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
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
   hframe__6->SetMinimum(0.001);
   hframe__6->SetMaximum(100);
   hframe__6->SetDirectory(0);
   hframe__6->SetStats(0);
   hframe__6->SetLineStyle(0);
   hframe__6->SetMarkerStyle(20);
   hframe__6->GetXaxis()->SetTitle("M_{W'} (GeV)");
   hframe__6->GetXaxis()->SetLabelFont(42);
   hframe__6->GetXaxis()->SetLabelOffset(0.007);
   hframe__6->GetXaxis()->SetLabelSize(0.035);
   hframe__6->GetXaxis()->SetTitleSize(0.045);
   hframe__6->GetXaxis()->SetTitleOffset(1.1);
   hframe__6->GetXaxis()->SetTitleFont(42);
   hframe__6->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{W'#rightarrow WW} #times BR_{WW #rightarrow e#nuqq} (pb)");
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
   entry=leg->AddEntry("Graph4","#sigma_{TH} #times BR_{W'#rightarrow WZ} #times BR_{WZ #rightarrow e#nuqq} , HVT_{B}","L");

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
