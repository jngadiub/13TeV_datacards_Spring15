{
//=========Macro generated from canvas: c2/c2
//=========  (Mon Jan 25 22:46:34 2016) by ROOT version5.34/18
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
   grae->SetPoint(0,0.8,3.185352);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,2.395859);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,2.490996);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,1.547324);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,1.34668);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,1.305967);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,1.304639);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,1.108447);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.9774316);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.8931152);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.8695312);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.604668);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.5253076);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.4888477);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.4580566);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.4364648);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.4225977);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.4199707);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.3693701);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.3276221);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.2922363);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.263606);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.2401514);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.227041);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.2176685);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.2110107);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.2060669);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.2016089);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.1935718);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.1884155);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.1838013);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.1793701);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.1761353);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,2.327689);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,2.350435);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,2.388345);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,2.388345);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,2.433838);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,2.494494);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,2.509658);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,2.539986);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,2.570315);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,2.630971);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,2.721956);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,2.934253);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,3.18446);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,3.472578);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,3.836517);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,4.276276);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,4.261111);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,4.344514);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,4.473409);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,4.685706);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,4.95866);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,5.656208);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,8.036972);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,8.279597);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,9.007474);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,9.977976);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,11.67635);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,11.55504);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,11.94931);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,13.769);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,20.19858);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,20.4412);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,28.5085);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.48,4.32);
   Graph_Graph5->SetMinimum(0.1585217);
   Graph_Graph5->SetMaximum(31.34174);
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
   grae->SetPoint(0,0.8,5.054601);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,3.702495);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,3.777525);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,2.447465);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,2.126702);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,2.059133);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,2.070236);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,1.764617);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,1.568975);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.434853);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.391153);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.9763675);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.8525802);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.7962045);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.7540031);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.7263266);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.7065733);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.7042174);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.6247646);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.5591061);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.5068374);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.4602014);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.4237468);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.4059192);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.3923483);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.38354);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.3772038);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.3725965);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.3612649);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.3522277);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.347696);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.3410743);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.3366816);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,1.544559);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,1.559653);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,1.584808);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,1.584808);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,1.614995);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,1.655244);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,1.665306);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,1.685431);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,1.705556);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,1.745805);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,1.806178);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,1.94705);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,2.113078);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,2.304261);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,2.545755);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,2.837561);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,2.827499);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,2.882841);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,2.968371);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,3.109243);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,3.290364);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,3.753228);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,5.333005);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,5.494002);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,5.976991);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,6.620977);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,7.747951);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,7.667453);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,7.929072);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,9.136545);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,13.40295);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,13.56395);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,18.91708);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.48,4.32);
   Graph_Graph6->SetMinimum(0.3030134);
   Graph_Graph6->SetMaximum(20.77512);
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
   grae->SetPoint(0,0.8,9.4);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,6.74);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,6.66);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,4.54);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,3.94);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,3.81);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,3.85);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,3.29);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,2.97);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,2.73);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,2.65);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.865);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,1.635);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,1.545);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,1.475);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,1.4325);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,1.405);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,1.41);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,1.265);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,1.145);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,1.05);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.9675);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.8975);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.8675);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.8475);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.8375);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.8275);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.8225);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.8025);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.7875);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.7875);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.775);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.7675);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.48,4.32);
   Graph_Graph7->SetMinimum(0.69075);
   Graph_Graph7->SetMaximum(10.26325);
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
   grae->SetPoint(0,0.8,5.050566);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,2.817635);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,3.468936);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,4.333782);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,3.033877);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,2.7141);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,2.129767);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,1.774403);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,1.693447);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.36736);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.283549);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.020036);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.9198128);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.9248927);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.9361535);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.9866955);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,1.284561);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,1.918755);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,1.88551);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,1.827861);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,1.760307);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,1.66647);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,1.556085);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,1.430362);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.9293222);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.7769485);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.754789);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.7534813);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.7451754);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.7370762);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.7423623);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.7358793);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.7317895);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.48,4.32);
   Graph_Graph8->SetMinimum(0.2999119);
   Graph_Graph8->SetMaximum(5.482444);
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
