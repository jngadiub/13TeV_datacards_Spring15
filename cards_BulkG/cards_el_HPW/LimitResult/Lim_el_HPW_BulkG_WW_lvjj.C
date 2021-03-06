{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 14:45:47 2016) by ROOT version5.34/18
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
   grae->SetPoint(0,0.8,0.107865);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.05486633);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.03679871);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.02819824);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.02211395);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.01820313);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.01514557);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.01343903);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.01205246);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.01070145);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.00962265);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.008491058);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.00758255);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.006969452);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.006448135);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.00596489);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.005527878);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.005135269);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.00480835);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.004506912);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.004244843);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.004009438);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.003819466);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.003597984);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.003399086);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.003233719);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.003088989);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.002965393);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.00283535);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.002722893);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.002634773);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.002559547);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.002500534);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.02724799);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.02712952);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.02736646);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.02736646);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.0276034);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.02807728);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.02855115);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.02902503);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.02973463);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.03044416);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.03162487);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.03233288);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.03327763);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.03445905);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.0358771);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.03776849);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.03989635);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.04140249);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.04269529);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.04434121);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.04701172);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.05131428);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.05671953);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.06139746);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.06783893);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.07415361);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.08281958);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.0984466);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.1184926);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.150553);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.1967511);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.2720969);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.4318081);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.48,4.32);
   Graph_Graph5->SetMinimum(0.002250481);
   Graph_Graph5->SetMaximum(0.4747388);
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
   grae->SetPoint(0,0.8,0.1418238);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.07776139);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.05323541);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.04065943);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.03173357);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.02612152);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.02173392);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.01928503);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.0172953);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.01525649);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.01373786);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01213912);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01084029);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.009990637);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.009288057);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.008676987);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.008063329);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.00756762);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.007141728);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.00675794);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.006427392);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.006166992);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.005910981);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.005635982);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.005375814);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.005189152);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.005040867);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.004870325);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.00470787);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.004605673);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.004506452);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.004430377);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.004362106);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.01808065);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.01800204);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.01815926);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.01815926);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.01831648);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.01863093);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.01894538);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.01925982);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.01957516);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.01988303);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.02015781);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.02027074);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.02051473);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.02088231);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.021366);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.02209688);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.02292395);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.02406208);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.02519082);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.02660612);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.02830587);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.03124332);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.03510053);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.03832564);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.04274182);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.04718817);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.05318032);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.06343793);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.07706717);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.09812526);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.1287037);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.1802159);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.2939464);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.48,4.32);
   Graph_Graph6->SetMinimum(0.003925895);
   Graph_Graph6->SetMaximum(0.3229048);
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
   grae->SetPoint(0,0.8,0.199375);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1165625);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.0815625);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.0625);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.04859375);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.04);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.03328125);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.02953125);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.02648438);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.02351563);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.02132812);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.01898438);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.01695312);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01585938);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.01480469);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.01394531);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.01316406);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.01246094);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01183594);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01136719);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01097656);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01066406);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01042969);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01003906);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.009804688);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.009570313);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.009414063);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.009257813);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.009101563);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.009023438);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.009023438);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.008945313);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.008984375);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.48,4.32);
   Graph_Graph7->SetMinimum(0.008050781);
   Graph_Graph7->SetMaximum(0.218418);
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
   grae->SetPoint(0,0.8,0.3088996);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1899763);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1377187);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.05439918);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.04150583);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.03311228);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.02654891);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.02242429);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.02707034);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.02732856);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.02518789);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.0241077);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.02107861);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.01651415);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.01129676);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.008695639);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.008086956);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.009007646);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01204697);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01376762);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01720192);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01868308);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01840288);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01710836);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01587121);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.0146686);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01181325);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.009581139);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.008610642);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.00823905);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.008105122);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.008081478);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.008119627);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.48,4.32);
   Graph_Graph8->SetMinimum(0.00727333);
   Graph_Graph8->SetMaximum(0.3389814);
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
   TText *text = pt->AddText("WW enriched");
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
