{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 10:41:56 2016) by ROOT version5.34/18
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
   grae->SetPoint(0,0.8,9.822189);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,6.069008);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,4.459249);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,4.026416);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,3.423311);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,2.986149);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,2.583573);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,2.268481);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,2.098412);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.924547);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,2.015852);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.988331);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,1.855069);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,1.774949);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,1.773432);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,1.785591);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,1.757799);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,1.675612);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,1.5232);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,1.479886);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,1.451011);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,1.450062);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,1.443792);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,1.451011);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,1.465991);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,1.508762);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,1.508762);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,1.501543);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,1.494595);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,1.508355);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,1.494324);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,1.494595);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,1.480293);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,11.10437);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,11.10437);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,11.20962);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,11.31488);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,11.10437);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,11.20962);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,11.20962);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,11.20962);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,10.78861);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,10.5781);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,10.52547);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,10.47284);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,10.5781);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,10.78861);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,11.20962);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,12.63056);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,13.31472);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,13.52523);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,13.43313);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,13.31472);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,14.0515);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,15.2093);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,15.41981);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,14.57777);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,16.05134);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,17.5249);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,20.26153);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,23.53758);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,27.47147);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,32.73421);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,36.73389);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,49.4697);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,76.83592);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.48,4.32);
   Graph_Graph1->SetMinimum(1.299412);
   Graph_Graph1->SetMaximum(84.37513);
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
   grae->SetPoint(0,0.8,14.60929);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,9.229764);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,6.820878);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,6.114642);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,5.16216);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,4.459624);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,3.815929);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,3.337916);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,3.059148);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,2.791437);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,2.938788);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,2.898668);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,2.690663);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,2.56157);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,2.572253);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,2.589889);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,2.549579);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,2.424261);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,2.17677);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,2.096614);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,2.063661);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,2.052559);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,2.053394);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,2.055705);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,2.095013);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,2.149586);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,2.166674);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,2.161627);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,2.14633);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,2.159466);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,2.156579);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,2.14633);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,2.136329);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,7.368404);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,7.368404);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,7.438247);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,7.50809);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,7.368404);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,7.438247);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,7.438247);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,7.438247);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,7.158876);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,7.019191);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,6.98427);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,6.949348);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,7.019191);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,7.158876);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,7.438247);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,8.381124);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,8.835101);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,8.974787);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,8.913674);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,8.835101);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,9.324);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,10.09227);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,10.23196);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,9.673214);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,10.65101);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,11.62881);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,13.44472);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,15.61857);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,18.22894);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,21.72108);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,24.3751);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,32.82607);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,50.98517);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(1.847303);
   Graph_Graph2->SetMaximum(55.87843);
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
   grae->SetPoint(0,0.8,25.33481);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,16.31146);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,12.11212);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,10.79332);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,9.058064);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,7.760956);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,6.680756);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,5.77842);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,5.292547);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,4.806674);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,5.084315);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,5.014905);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,4.633147);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,4.390211);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,4.429254);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,4.459621);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,4.390211);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,4.164627);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,3.696106);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,3.557285);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,3.487875);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,3.45317);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,3.470522);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,3.487875);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,3.557285);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,3.696106);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,3.696106);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,3.696106);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,3.661401);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,3.730812);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,3.696106);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,3.661401);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,3.661401);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.48,4.32);
   Graph_Graph3->SetMinimum(1.265005);
   Graph_Graph3->SetMaximum(27.52298);
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
   grae->SetPoint(0,0.8,55.55353);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,23.87837);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,11.95893);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,4.848466);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,3.771566);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,4.152683);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,5.722465);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,6.656653);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,6.59125);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,4.957219);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,3.198951);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,2.382439);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,2.641825);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,2.547377);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,1.99837);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,1.680362);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,1.580087);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,1.807462);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,2.644575);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,2.78886);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,2.798239);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,2.783176);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,2.747032);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,2.560889);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,2.055225);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,1.6334);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,1.468899);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,1.39064);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,1.305878);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,1.295423);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,1.272647);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,1.254436);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,1.24029);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.48,4.32);
   Graph_Graph4->SetMinimum(1.116261);
   Graph_Graph4->SetMaximum(60.98485);
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
