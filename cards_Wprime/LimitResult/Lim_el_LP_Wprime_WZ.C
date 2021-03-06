{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan 26 11:56:20 2016) by ROOT version5.34/18
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
   grae->SetPoint(0,0.8,8.430767);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,5.323727);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,3.854623);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,3.139304);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,2.610982);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,1.865297);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,1.647414);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,1.276979);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,1.066481);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.9226492);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.810085);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.7081601);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.6264239);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.5497416);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.4858948);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.4312775);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.3846261);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.3448913);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.3056419);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.2707414);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.2421259);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.2177075);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.1972911);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.1844691);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.173865);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.1656659);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.1588171);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.1524657);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.1424405);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.1348095);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.1271689);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.1210738);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.1156931);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,1.431464);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,1.486196);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,1.536718);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,1.604081);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,1.663024);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,1.747228);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,1.79354);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,1.844062);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,1.894584);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,1.961947);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,2.062992);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,2.231399);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,2.433488);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,2.669259);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,2.938711);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,3.275526);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,3.587079);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,3.974417);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,4.412276);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,4.93434);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,5.574288);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,6.247918);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,7.106796);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,8.117242);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,9.329775);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,11.26646);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,14.61777);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,16.50393);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,22.97078);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,27.61883);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,33.81623);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,44.08908);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,63.8575);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.48,4.32);
   Graph_Graph1->SetMinimum(0.1041238);
   Graph_Graph1->SetMaximum(70.23168);
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
   grae->SetPoint(0,0.8,12.32694);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,8.166986);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,6.10596);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,4.98079);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,4.14256);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,2.941036);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,2.601626);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,2.010244);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,1.678839);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.450165);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.271246);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.114799);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.9908398);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.873755);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.7773363);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.6888532);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.6200115);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.5616988);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.4986807);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.4480814);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.40517);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.3664426);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.335002);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.3172389);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.3015412);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.2909464);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.2796297);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.2707873);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.2558077);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.2448798);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.2331697);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.222683);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.2138142);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.9498607);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.9861789);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,1.019703);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,1.064403);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,1.103515);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,1.159389);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,1.19012);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,1.223644);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,1.257169);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,1.301868);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,1.368917);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,1.480665);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,1.614763);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,1.771211);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,1.950008);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,2.173505);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,2.380239);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,2.63726);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,2.927806);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,3.274226);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,3.698869);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,4.145863);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,4.715779);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,5.386269);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,6.190857);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,7.475962);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,9.699754);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,10.95134);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,15.24247);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,18.32672);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,22.43906);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,29.25571);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,42.03924);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.48,4.32);
   Graph_Graph2->SetMinimum(0.1924328);
   Graph_Graph2->SetMaximum(46.22178);
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
   grae->SetPoint(0,0.8,21.05635);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,14.53732);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,11.15009);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,9.106651);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,7.574068);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,5.441779);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,4.819862);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,3.714847);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,3.076271);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,2.676467);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,2.343297);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,2.060102);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,1.837989);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,1.626981);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,1.454843);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,1.310469);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,1.182754);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,1.080027);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.9689699);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.8801245);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.8023848);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.7357508);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.6802224);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.6469054);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.624694);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.6080355);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.591377);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.5761067);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.5483425);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.5289076);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.5066963);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.4900378);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.4719911);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.48,4.32);
   Graph_Graph3->SetMinimum(0.4247919);
   Graph_Graph3->SetMaximum(23.11479);
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
   grae->SetPoint(0,0.8,13.15421);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,5.079492);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,4.390508);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,6.400213);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,5.484332);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,4.940675);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,3.128977);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,2.279368);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,1.603519);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.186362);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.140128);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.128592);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.935228);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.8249486);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.7599392);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.7163466);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.69368);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.8366663);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,1.148753);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,1.12618);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,1.089068);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,1.032346);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.9687415);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.802789);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.5884338);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.5108746);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.4884065);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.4823791);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.4648169);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.4554681);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.4437029);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.4326052);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.4221562);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.48,4.32);
   Graph_Graph4->SetMinimum(0.3799406);
   Graph_Graph4->SetMaximum(14.42742);
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
