////////////////////////////////////////////////////////////////////////
//
// \file MVASelect_module.cc
//
// tylerdalion@gmail.com
//
///////////////////////////////////////////////////////////////////////

#ifndef MVASelect_H
#define MVASelect_H

// Generic C++ includes
#include <iostream>

// Framework includes
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Core/EDAnalyzer.h" 
#include "art/Framework/Principal/Event.h" 
#include "art/Framework/Principal/SubRun.h"
#include "fhiclcpp/ParameterSet.h" 
#include "messagefacility/MessageLogger/MessageLogger.h" 
#include "art/Framework/Services/Optional/TFileService.h" 

#include "nutools/NuReweight/art/NuReweight.h"
#include "Utils/AppInit.h"
#include "nusimdata/SimulationBase/GTruth.h"
#include "nusimdata/SimulationBase/MCTruth.h"
#include "nusimdata/SimulationBase/MCFlux.h"
#include "larcoreobj/SummaryData/POTSummary.h"
#include "dune/FDSensOpt/MVAAlg/MVAAlg.h"

#include "TTree.h"
#include "TH1D.h"
#include "TH2D.h"

#include "PDG/PDGCodes.h"
#include "PDG/PDGUtils.h"
#include "PDG/PDGLibrary.h"

#include "EVGCore/EventRecord.h"
#include "GHEP/GHepParticle.h"

constexpr int knRwgts = 41; // -2 to 2 sigma in 0.1 steps

namespace dunemva {

  class MVASelect : public art::EDAnalyzer {

    public:

      explicit MVASelect(fhicl::ParameterSet const& pset);
      virtual ~MVASelect();
      void beginJob() override;
      void beginSubRun(const art::SubRun& sr) override;
      void endSubRun(const art::SubRun& sr) override;
      void reconfigure(fhicl::ParameterSet const& pset) override;
      void analyze(art::Event const & evt) override;


    private:

      MVAAlg fMVAAlg;
      double fMVAResult;
      double fEvtcharge;
      double fRawcharge;
      double fWirecharge;
      std::string fMVAMethod;

      bool fReweight;
      unsigned int fRun,fSubrun,fEvent;
      float fOscPro;
      double fWeight;
      TTree* fTree;  

      bool fSelNuE;
      bool fSelNuMu;
      double fNuECut;
      double fNuMuCut;

      //Neutrino energy reconstruction
      //Gradients and intercepts of calibration of track momentum by range
      //and corrections of MCS track momentum, hadronic energy (numu CC), shower energy and hadronic energy (nue CC)
      double fGradTrkMomRange;
      double fIntTrkMomRange;
      double fGradTrkMomMCS;
      double fIntTrkMomMCS;
      double fGradNuMuHadEnCorr;
      double fIntNuMuHadEnCorr;
      double fGradShwEnergy;
      double fIntShwEnergy;
      double fGradNuEHadEnCorr; 
      double fIntNuEHadEnCorr;

      bool fSaveRecoInputs;

      void FillNormResponseHists();
      void FillINuke( rwgt::ReweightLabel_t label, double sig, double wgt);
      std::vector< rwgt::ReweightLabel_t > fINukeLabel;



      // INuke reweights
      double fSigs[knRwgts];
      double finuke_MFP_pi[knRwgts];
      double finuke_MFP_N[knRwgts];
      double finuke_FrCEx_pi[knRwgts];
      double finuke_FrElas_pi[knRwgts];
      double finuke_FrInel_pi[knRwgts];
      double finuke_FrAbs_pi[knRwgts];
      double finuke_FrPiProd_pi[knRwgts];
      double finuke_FrCEx_N[knRwgts];
      double finuke_FrElas_N[knRwgts];
      double finuke_FrInel_N[knRwgts];
      double finuke_FrAbs_N[knRwgts];
      double finuke_FrPiProd_N[knRwgts];

      // variables for counting particles
      int nP;
      int nN;
      int nPip;
      int nPim;
      int nPi0;
      int nKp;
      int nKm;
      int nK0;
      int nEM;
      int nOtherHad;
      int nNucleus;
      int nUNKNOWN;  


      double fQ2; 
      double fEtrue; 
      double fEreco;
      double fW;
      double fX;
      double fY;
      double fNuMomX;
      double fNuMomY;
      double fNuMomZ;
      double fNuMomT;

      //Outgoing lepton stuff
      int fLepPDG;
      double fLepMomX;
      double fLepMomY;
      double fLepMomZ;
      double fLepMomT;
      double fLepNuAngle;


      int fIsCoh; // 1=is coherent, 0=otherwise
      int fIsDIS; // 1=is dis,      0=otherwise
      int fCC;    // 1=is CC, 0=otherwise
      int fNC;    // 1=is NC, 0=otherwise
      int fEvClass_reco; // 0=NuMuCC, 1=NuECC, 2=NC
      int fNuPdg;
      int fBeamPdg;

      // trut nu vertex for fiducial cuts
      double nuvtxx_truth;
      double nuvtxy_truth;
      double nuvtxz_truth;

      int fMode; // 0=QE/El, 1=RES, 2=DIS, 3=Coherent production
      int fCCNC; // 0=CC, 1=NC

      double ftotPOT;

      // [0][j]: true CC,  [1][j]: true NC
      // [i][0]: nu,       [i][1]: nubar
      bool fMakeSystHist;
      std::vector< std::vector<TH2D*> > h_ccqe_1,   h_ccqe_2,   h_ccqe_3;   // 3 Q2 bins
      std::vector< std::vector<TH2D*> > h_cc1pic_1, h_cc1pic_2, h_cc1pic_3; // 3 Q2 bins
      std::vector< std::vector<TH2D*> > h_cc1piz_1, h_cc1piz_2, h_cc1piz_3; // 3 Q2 bins
      std::vector< std::vector<TH2D*> > h_2pi;
      std::vector< std::vector<TH2D*> > h_dis_1, h_dis_2, h_dis_3;          // 3 Ev bins
      std::vector< std::vector<TH2D*> > h_coh;
      std::vector< std::vector<TH2D*> > h_nc;

      bool IsCCQE();
      bool IsCC1PiC();
      bool IsCC1Pi0();
      bool IsCC2Pi();
      bool IsDIS();

      //Inputs to MVA

      //float fEvtcharge;
      float fNtrack;
      float fAvgtrklength;
      float fMaxtrklength;
      float fTrkdedx;
      float fTrkrch; 
      float fTrkrt;  
      float fTrkfr;  
      float fTrkpida_save;
      float fNshower;
      float fShowerdedx;
      float fEshower;
      float fFrshower;
      float fNhitspershw;
      float fShwlength;
      float fShwmax;
      float fFract_5_wires;
      float fFract_10_wires;
      float fFract_50_wires;
      float fFract_100_wires;
      float fShwdis;
      float fShwdisx;
      float fShwdisy;
      float fShwdisz;
      float fShwcosx;
      float fShwcosy;
      float fShwcosz;
      float fTrkcosx;
      float fTrkcosy;
      float fTrkcosz;
      float fET;



  }; // class MVASelect


  //------------------------------------------------------------------------------
  MVASelect::MVASelect(fhicl::ParameterSet const& pset)
    : EDAnalyzer(pset)
      , fMVAAlg(pset)
  {
    this->reconfigure(pset);
    if (fReweight){
      genie::utils::app_init::MesgThresholds("Messenger_production.xml");
    }
    fINukeLabel.emplace_back(rwgt::fReweightMFP_pi);
    fINukeLabel.emplace_back(rwgt::fReweightMFP_N);
    fINukeLabel.emplace_back(rwgt::fReweightFrCEx_pi);
    fINukeLabel.emplace_back(rwgt::fReweightFrElas_pi);
    fINukeLabel.emplace_back(rwgt::fReweightFrInel_pi);
    fINukeLabel.emplace_back(rwgt::fReweightFrAbs_pi);
    fINukeLabel.emplace_back(rwgt::fReweightFrPiProd_pi);
    fINukeLabel.emplace_back(rwgt::fReweightFrCEx_N);
    fINukeLabel.emplace_back(rwgt::fReweightFrElas_N);
    fINukeLabel.emplace_back(rwgt::fReweightFrInel_N);
    fINukeLabel.emplace_back(rwgt::fReweightFrAbs_N);
    fINukeLabel.emplace_back(rwgt::fReweightFrPiProd_N);
  }

  dunemva::MVASelect::~MVASelect(){}

  //------------------------------------------------------------------------------
  void MVASelect::reconfigure(fhicl::ParameterSet const& pset) 
  {
    fMVAMethod=pset.get< std::string >("MVAMethod");
    fReweight=pset.get<bool>("Reweight");
    fMakeSystHist=pset.get<bool>("MakeSystHist");
    fMVAAlg.reconfigure(pset);

    fNuECut  = pset.get<double>("NuECut");
    fNuMuCut = pset.get<double>("NuMuCut");

    fGradTrkMomRange = pset.get<double>("GradTrkMomRange");
    fIntTrkMomRange = pset.get<double>("IntTrkMomRange");
    fGradTrkMomMCS = pset.get<double>("GradTrkMomMCS");
    fIntTrkMomMCS = pset.get<double>("IntTrkMomMCS");
    fGradNuMuHadEnCorr = pset.get<double>("GradNuMuHadEnCorr");
    fIntNuMuHadEnCorr = pset.get<double>("IntNuMuHadEnCorr");
    fGradShwEnergy = pset.get<double>("GradShwEnergy");
    fIntShwEnergy = pset.get<double>("IntShwEnergy");
    fGradNuEHadEnCorr = pset.get<double>("GradNuEHadEnCorr");
    fIntNuEHadEnCorr = pset.get<double>("IntNuEHadEnCorr");

    fSaveRecoInputs = pset.get<bool>("SaveRecoInputs");

    if(pset.get<std::string>("Select") == "nue"){
      fSelNuE  = true;
      fSelNuMu = false;
    } else if(pset.get<std::string>("Select") == "numu"){
      fSelNuE  = false;
      fSelNuMu = true;
    }

    return;
  }


  //------------------------------------------------------------------------------
  void MVASelect::beginJob()
  {

    art::ServiceHandle<art::TFileService> tfs;
    fTree =tfs->make<TTree>("MVASelection","Results");

    fTree->Branch("run",         &fRun,        "run/I");
    fTree->Branch("subrun",      &fSubrun,     "subrun/I");
    fTree->Branch("event",       &fEvent,      "event/I");
    fTree->Branch("mvaresult",   &fMVAResult,  "mvaresult/D");
    fTree->Branch("weight",      &fWeight,     "weight/D");
    fTree->Branch("oscpro",      &fOscPro,     "oscpro/F");
    fTree->Branch("evtcharge",   &fEvtcharge,  "evtcharge/D");
    fTree->Branch("rawcharge",   &fRawcharge,  "rawcharge/D");
    fTree->Branch("wirecharge",  &fWirecharge, "wirecharge/D");
    // particle counts
    fTree->Branch("nP",        &nP,         "nP/I");
    fTree->Branch("nN",        &nN,         "nN/I");
    fTree->Branch("nipip",     &nPip,       "nipip/I");
    fTree->Branch("nipim",     &nPim,       "nipim/I");
    fTree->Branch("nipi0",     &nPi0,       "nipi0/I");
    fTree->Branch("nikp",      &nKp,        "nikp/I");
    fTree->Branch("nikm",      &nKm,        "nikm/I");
    fTree->Branch("nik0",      &nK0,        "nik0/I");
    fTree->Branch("niem",      &nEM,        "niem/I");
    fTree->Branch("niother",   &nOtherHad,  "niother/I");
    fTree->Branch("nNucleus",  &nNucleus,   "nNucleus/I");
    fTree->Branch("nUNKNOWN",  &nUNKNOWN,   "nUNKNOWN/I");

    fTree->Branch("Q2",           &fQ2,           "Q2/D");
    fTree->Branch("Ev",           &fEtrue,        "Ev/D");
    fTree->Branch("Ev_reco",      &fEreco,        "Ev_reco/D");
    fTree->Branch("EvClass_reco", &fEvClass_reco, "EvClass_reco/I");
    fTree->Branch("coh",          &fIsCoh,        "coh/I");
    fTree->Branch("dis",          &fIsDIS,        "dis/I");
    fTree->Branch("cc",           &fCC,           "cc/I");
    fTree->Branch("nc",           &fNC,           "nc/I");
    fTree->Branch("neu",          &fNuPdg,        "neu/I");
    fTree->Branch("beamPdg",      &fBeamPdg,      "beamPdg/I");
    fTree->Branch("mode",         &fMode,         "mode/I");
    fTree->Branch("ccnc",         &fCCNC,         "ccnc/I");
    fTree->Branch("W",            &fW,            "W/D");
    fTree->Branch("X",            &fX,            "X/D");
    fTree->Branch("Y",            &fY,            "Y/D");
    fTree->Branch("NuMomX",       &fNuMomX,       "NuMomX/D");
    fTree->Branch("NuMomY",       &fNuMomY,       "NuMomY/D");
    fTree->Branch("NuMomZ",       &fNuMomZ,       "NuMomZ/D");
    fTree->Branch("NuMomT",       &fNuMomT,       "NuMomT/D");

    fTree->Branch("LepPDG",       &fLepPDG,       "LepPDG/I");
    fTree->Branch("LepMomX",      &fLepMomX,       "LepMomX/D");
    fTree->Branch("LepMomY",      &fLepMomY,       "LepMomY/D");
    fTree->Branch("LepMomZ",      &fLepMomZ,       "LepMomZ/D");
    fTree->Branch("LepMomT",      &fLepMomT,       "LepMomT/D");
    fTree->Branch("LepNuAngle",   &fLepNuAngle,       "LepNuAngle/D");




    fTree->Branch("nuvtxx_truth",&nuvtxx_truth,"nuvtxx_truth/D");
    fTree->Branch("nuvtxy_truth",&nuvtxy_truth,"nuvtxy_truth/D");
    fTree->Branch("nuvtxz_truth",&nuvtxz_truth,"nuvtxz_truth/D");

    fTree->Branch("totpot",       &ftotPOT,       "totpot/D");

    fTree->Branch("sigs",             fSigs,             "sigs[41]/D");
    fTree->Branch("f_int_pi_mfp",     finuke_MFP_pi,     "f_int_pi_mfp[41]/D");
    fTree->Branch("f_int_n_mfp",      finuke_MFP_N,      "f_int_n_mfp[41]/D");
    fTree->Branch("f_int_pi_cex",     finuke_FrCEx_pi,   "f_int_pi_cex[41]/D");
    fTree->Branch("f_int_pi_elas",    finuke_FrElas_pi,  "f_int_pi_elas[41]/D");
    fTree->Branch("f_int_pi_inel",    finuke_FrInel_pi,  "f_int_pi_inel[41]/D");
    fTree->Branch("f_int_pi_abs",     finuke_FrAbs_pi,   "f_int_pi_abs[41]/D");
    fTree->Branch("f_int_pi_prod",    finuke_FrPiProd_pi,"f_int_pi_prod[41]/D");
    fTree->Branch("f_int_n_cex",      finuke_FrCEx_N,    "f_int_n_cex[41]/D");
    fTree->Branch("f_int_n_elas",     finuke_FrElas_N,   "f_int_n_elas[41]/D");
    fTree->Branch("f_int_n_inel",     finuke_FrInel_N,   "f_int_n_inel[41]/D");
    fTree->Branch("f_int_n_abs",      finuke_FrAbs_N,    "f_int_n_abs[41]/D");
    fTree->Branch("f_int_n_prod",     finuke_FrPiProd_N, "f_int_n_prod[41]/D");


    //Inputs to MVA
    //fTree->Branch("evtcharge",        &fEvtcharge,"evtcharge/F");
    if (fSaveRecoInputs){
      fTree->Branch("ntrack",           &fNtrack,"ntrack/F");
      fTree->Branch("maxtrklength",     &fMaxtrklength,"maxtrklength/F");
      fTree->Branch("avgtrklength",     &fAvgtrklength,"avgtrklength/F");
      fTree->Branch("trkdedx",          &fTrkdedx,"trkdedx/F");
      fTree->Branch("trkrch",           &fTrkrch,"trkrch/F");
      fTree->Branch("trkrt",            &fTrkrt,"trkrt/F");
      fTree->Branch("trkfr",            &fTrkfr,"trkfr/F");
      fTree->Branch("trkpida",          &fTrkpida_save,"trkpida/F");
      fTree->Branch("nshower",          &fNshower,"nshower/F");
      fTree->Branch("showerdedx",       &fShowerdedx,"showerdedx/F");
      fTree->Branch("eshower",          &fEshower,"eshower/F");
      fTree->Branch("frshower",         &fFrshower,"frshower/F");
      fTree->Branch("nhitspershw",      &fNhitspershw,"nhitspershw/F");
      fTree->Branch("shwlength",        &fShwlength,"shwlength/F");
      fTree->Branch("shwmax",           &fShwmax,"shwmax/F");
      fTree->Branch("fract_5_wires",    &fFract_5_wires,"fract_5_wires/F");
      fTree->Branch("fract_10_wires",   &fFract_10_wires,"fract_10_wires/F");
      fTree->Branch("fract_50_wires",   &fFract_50_wires,"fract_50_wires/F");
      fTree->Branch("fract_100_wires",  &fFract_100_wires,"fract_100_wires/F");
      fTree->Branch("shwdis",           &fShwdis,"shwdis/F");
      fTree->Branch("shwdisx",          &fShwdisx,"shwdisx/F");
      fTree->Branch("shwdisy",          &fShwdisy,"shwdisy/F");
      fTree->Branch("shwdisz",          &fShwdisz,"shwdisz/F");
      fTree->Branch("shwcosx",          &fShwcosx,"shwcosx/F");
      fTree->Branch("shwcosy",          &fShwcosy,"shwcosy/F");
      fTree->Branch("shwcosz",          &fShwcosz,"shwcosz/F");
      fTree->Branch("trkcosx",          &fTrkcosx,"trkcosx/F");
      fTree->Branch("trkcosy",          &fTrkcosy,"trkcosy/F");
      fTree->Branch("trkcosz",          &fTrkcosz,"trkcosz/F");
      fTree->Branch("ET",               &fET,"ET/F");
    }


    const int bins_true_E = 98;
    const double bin_edges_true_E[bins_true_E + 1] = {
      0.000, 0.125, 0.250, 0.375, 0.500, 0.625, 0.750, 0.875, 
      1.000, 1.125, 1.250, 1.375, 1.500, 1.625, 1.750, 1.875, 
      2.000, 2.125, 2.250, 2.375, 2.500, 2.625, 2.750, 2.875, 
      3.000, 3.125, 3.250, 3.375, 3.500, 3.625, 3.750, 3.875, 
      4.000, 4.125, 4.250, 4.375, 4.500, 4.625, 4.750, 4.875, 
      5.000, 5.125, 5.250, 5.375, 5.500, 5.625, 5.750, 5.875, 
      6.000, 6.125, 6.250, 6.375, 6.500, 6.625, 6.750, 6.875, 
      7.000, 7.125, 7.250, 7.375, 7.500, 7.625, 7.750, 7.875, 
      8.000, 8.125, 8.250, 8.375, 8.500, 8.625, 8.750, 8.875, 
      9.000, 9.125, 9.250, 9.375, 9.500, 9.625, 9.750, 9.875, 
      10.000, 11.000, 12.000, 13.000, 14.000, 15.000, 16.000, 
      17.000, 18.000, 19.000, 20.000, 30.000, 40.000, 50.000, 
      60.000, 70.000, 80.000, 90.000, 100.000};

    /*
       const int bins_reco_E = 71;
       const double bin_edges_reco_E[bins_reco_E + 1] = {
       0.000, 0.125, 0.250, 0.375, 0.500, 0.625, 0.750, 0.875, 
       1.000, 1.125, 1.250, 1.375, 1.500, 1.625, 1.750, 1.875, 
       2.000, 2.125, 2.250, 2.375, 2.500, 2.625, 2.750, 2.875, 
       3.000, 3.125, 3.250, 3.375, 3.500, 3.625, 3.750, 3.875, 
       4.000, 4.125, 4.250, 4.375, 4.500, 4.625, 4.750, 4.875, 
       5.000, 5.125, 5.250, 5.375, 5.500, 5.625, 5.750, 5.875, 
       6.000, 6.125, 6.250, 6.375, 6.500, 6.625, 6.750, 6.875, 
       7.000, 7.125, 7.250, 7.375, 7.500, 7.625, 7.750, 7.875, 
       8.000, 9.000, 10.000, 12.000, 14.000, 16.000, 18.000, 20.000};
       */

    const int n_respo_bins  = 101;
    double respo_min = -5.0 - (5.0 - -5.0)/(2.0*(n_respo_bins-1));
    double respo_max =  5.0 + (5.0 - -5.0)/(2.0*(n_respo_bins-1));
    double bin_edges_respo[n_respo_bins + 1] = {0.0};
    for(int i=0; i<=n_respo_bins; i++) bin_edges_respo[i] = respo_min + i*(respo_max-respo_min)/n_respo_bins;
    //for(int i=0; i<=n_respo_bins; i++) cout<<"bin_edges_respo["<<i<<"] = "<<bin_edges_respo[i]<<endl;

    h_ccqe_1.resize(2);    h_ccqe_2.resize(2);    h_ccqe_2.resize(2);
    h_cc1pic_1.resize(2);  h_cc1pic_2.resize(2);  h_cc1pic_2.resize(2);
    h_cc1piz_1.resize(2);  h_cc1piz_2.resize(2);  h_cc1piz_2.resize(2);
    h_2pi.resize(2);
    h_dis_1.resize(2);     h_dis_2.resize(2);     h_dis_2.resize(2);
    h_coh.resize(2);
    h_nc.resize(2);

    std::string current, ptype;
    if( fMakeSystHist ){
      for(unsigned int i=0; i<2; i++){
        if(i) current = "nc";
        else  current = "cc";

        h_ccqe_1[i].resize(2);    h_ccqe_2[i].resize(2);    h_ccqe_2[i].resize(2);
        h_cc1pic_1[i].resize(2);  h_cc1pic_2[i].resize(2);  h_cc1pic_2[i].resize(2);
        h_cc1piz_1[i].resize(2);  h_cc1piz_2[i].resize(2);  h_cc1piz_2[i].resize(2);
        h_2pi[i].resize(2);
        h_dis_1[i].resize(2);     h_dis_2[i].resize(2);     h_dis_2[i].resize(2);
        h_coh[i].resize(2);
        h_nc[i].resize(2);

        for(unsigned int j=0; j<2; j++){ 
          if(i) ptype = "nubar";
          else  ptype = "nu";

          h_ccqe_1[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_ccqe_1",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_ccqe_1",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_ccqe_2[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_ccqe_2",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_ccqe_2",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_ccqe_3[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_ccqe_3",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_ccqe_3",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);

          h_cc1pic_1[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_cc1pic_1",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_cc1pic_1",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_cc1pic_2[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_cc1pic_2",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_cc1pic_2",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_cc1pic_3[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_cc1pic_3",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_cc1pic_3",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);

          h_cc1piz_1[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_cc1piz_1",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_cc1piz_1",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_cc1piz_2[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_cc1piz_2",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_cc1piz_2",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_cc1piz_3[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_cc1piz_3",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_cc1piz_3",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);

          h_2pi[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_2pi",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_2pi",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);

          h_dis_1[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_dis_1",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_dis_1",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_dis_2[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_dis_2",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_dis_2",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_dis_3[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_dis_3",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_dis_3",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);

          h_coh[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_coh",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_coh",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
          h_nc[i][j] = tfs->make<TH2D>( Form("%sRespo_f_int_%s_nc",current.c_str(),ptype.c_str()),
              Form("%sRespo_f_int_%s_nc",current.c_str(),ptype.c_str()),
              bins_true_E, bin_edges_true_E,
              n_respo_bins,bin_edges_respo);
        }
      }
    } // if making syst hists
    return;
  }

  //------------------------------------------------------------------------------
  /*
     TH2D* MVASelect::MakeRespoHist(TString name){
     return fTfs->make<TH2D>( name, name,
     bins_true_E, bin_edges_true_E,
     n_respo_bins,bin_edges_respo);
     }
     */

  //------------------------------------------------------------------------------
  void MVASelect::beginSubRun(const art::SubRun& sr){
    art::Handle< sumdata::POTSummary > pots;
    if(sr.getByLabel("generator",pots))
      ftotPOT = pots->totpot;
    else
      ftotPOT = -1.;
  }


  //------------------------------------------------------------------------------
  void MVASelect::analyze(art::Event const & evt)
  {
    fRun = evt.id().run();
    fSubrun = evt.id().subRun();
    fEvent = evt.id().event();
    fMVAAlg.Run(evt,fMVAResult,fWeight);
    fEvtcharge = fMVAAlg.evtcharge;
    fRawcharge = fMVAAlg.rawcharge;
    fWirecharge = fMVAAlg.wirecharge;

    //Fill MVA reco stuff
    if (fSaveRecoInputs){
      fNtrack         = fMVAAlg.ntrack;
      fAvgtrklength   = fMVAAlg.avgtrklength;
      fMaxtrklength   = fMVAAlg.maxtrklength;
      fTrkdedx        = fMVAAlg.trkdedx;
      fTrkrch         = fMVAAlg.trkrch ;
      fTrkrt          = fMVAAlg.trkrt  ;
      fTrkfr          = fMVAAlg.trkfr  ;
      fTrkpida_save   = fMVAAlg.trkpida_save;
      fNshower        = fMVAAlg.nshower;
      fShowerdedx     = fMVAAlg.showerdedx;
      fEshower        = fMVAAlg.eshower;
      fFrshower       = fMVAAlg.frshower;
      fNhitspershw    = fMVAAlg.nhitspershw;
      fShwlength      = fMVAAlg.shwlength;
      fShwmax         = fMVAAlg.shwmax;
      fFract_5_wires  = fMVAAlg.fract_5_wires;
      fFract_10_wires = fMVAAlg.fract_10_wires;
      fFract_50_wires = fMVAAlg.fract_50_wires;
      fFract_100_wires= fMVAAlg.fract_100_wires;
      fShwdis         = fMVAAlg.shwdis;
      fShwdisx        = fMVAAlg.shwdisx;
      fShwdisy        = fMVAAlg.shwdisy;
      fShwdisz        = fMVAAlg.shwdisz;
      fShwcosx        = fMVAAlg.shwcosx;
      fShwcosy        = fMVAAlg.shwcosy;
      fShwcosz        = fMVAAlg.shwcosz;
      fTrkcosx        = fMVAAlg.trkcosx;
      fTrkcosy        = fMVAAlg.trkcosy;
      fTrkcosz        = fMVAAlg.trkcosz;
      fET             = fMVAAlg.ET;
    }

    art::Handle< std::vector<simb::MCTruth> > mct;
    std::vector< art::Ptr<simb::MCTruth> > truth;
    if( evt.getByLabel("generator", mct) )
      art::fill_ptr_vector(truth, mct);
    else
      mf::LogWarning("MVASelect") << "No MCTruth.";

    art::Handle< std::vector<simb::MCFlux> > mcf;
    std::vector< art::Ptr<simb::MCFlux> > flux;
    if( evt.getByLabel("generator", mcf) )
      art::fill_ptr_vector(flux, mcf);
    else
      mf::LogWarning("MVASelect") << "No MCFlux.";

    art::Handle< std::vector<simb::GTruth> > gt;
    std::vector< art::Ptr<simb::GTruth> > gtru;
    if( evt.getByLabel("generator", gt) )
      art::fill_ptr_vector(gtru, gt);
    else
      mf::LogWarning("MVASelect") << "No GTruth.";


    for(size_t i=0; i<truth.size(); i++){

      if(i>1){
        mf::LogWarning("MVASelect") << "Skipping MC truth index " << i;
        continue;
      }

      fCCNC     = truth[i]->GetNeutrino().CCNC();  //0=CC 1=NC
      if(fCCNC==0){
        fCC = 1;
        fNC = 0;
      }
      else if(fCCNC==1){
        fCC = 0;
        fNC = 1;
      }
      fNuPdg    = truth[i]->GetNeutrino().Nu().PdgCode();
      fBeamPdg  = flux[i]->fntype;
      fMode     = truth[i]->GetNeutrino().Mode(); //0=QE/El, 1=RES, 2=DIS, 3=Coherent production
      fEtrue    = truth[i]->GetNeutrino().Nu().E();
      fQ2       = truth[i]->GetNeutrino().QSqr();
      fW        = truth[i]->GetNeutrino().W();
      fX        = truth[i]->GetNeutrino().X();
      fY        = truth[i]->GetNeutrino().Y();
      fNuMomX   = truth[i]->GetNeutrino().Nu().Momentum().X();
      fNuMomY   = truth[i]->GetNeutrino().Nu().Momentum().Y();
      fNuMomZ   = truth[i]->GetNeutrino().Nu().Momentum().Z();
      fNuMomT   = truth[i]->GetNeutrino().Nu().Momentum().T();

      //Lepton stuff
      fLepPDG     = truth[i]->GetNeutrino().Lepton().PdgCode();
      fLepMomX    = truth[i]->GetNeutrino().Lepton().Momentum().X();
      fLepMomY    = truth[i]->GetNeutrino().Lepton().Momentum().Y();
      fLepMomZ    = truth[i]->GetNeutrino().Lepton().Momentum().Z();
      fLepMomT    = truth[i]->GetNeutrino().Lepton().Momentum().T();
      fLepNuAngle = truth[i]->GetNeutrino().Nu().Momentum().Vect().Angle(truth[i]->GetNeutrino().Lepton().Momentum().Vect());

      fOscPro   = fMVAAlg.OscPro(fCCNC,fBeamPdg,fNuPdg,fEtrue);

      nuvtxx_truth = truth[i]->GetNeutrino().Nu().Vx();
      nuvtxy_truth = truth[i]->GetNeutrino().Nu().Vy();
      nuvtxz_truth = truth[i]->GetNeutrino().Nu().Vz();

      if(fMode==3) fIsCoh = 1;
      else         fIsCoh = 0;

      if(fMode==2) fIsDIS = 1;
      else         fIsDIS = 0;

      // Cheat selection for now, will be refilled in script cutting on MVAResult
      fEvClass_reco = -1;
      if( fCCNC==1 )
        fEvClass_reco = 2;
      else if( fCCNC==0 && std::abs(fNuPdg)==12  )
        fEvClass_reco = 1;
      else if( fCCNC==0 && std::abs(fNuPdg)==14  )
        fEvClass_reco = 0;
      else
        mf::LogWarning("MVASelect") << "Bad EvClass_reco";

      nP        = 0;
      nN        = 0;
      nPip      = 0;
      nPim      = 0;
      nPi0      = 0;
      nKp       = 0;
      nKm       = 0;
      nK0       = 0;
      nEM       = 0;
      nOtherHad = 0;
      nNucleus  = 0;
      nUNKNOWN  = 0;

      for(int p=0; p<truth[i]->NParticles(); p++){
        if( truth[i]->GetParticle(p).StatusCode() == genie::kIStHadronInTheNucleus ){

          if      (truth[i]->GetParticle(p).PdgCode() == genie::kPdgProton  || 
              truth[i]->GetParticle(p).PdgCode() == genie::kPdgAntiProton)          { nP++;       }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgNeutron || 
              truth[i]->GetParticle(p).PdgCode() == genie::kPdgAntiNeutron)         { nN++;       }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgPiP)                 { nPip++;     }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgPiM)                 { nPim++;     }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgPi0)                 { nPi0++;     }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgKP)                  { nKp++;      }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgKM)                  { nKm++;      }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgK0    || 
              truth[i]->GetParticle(p).PdgCode() == genie::kPdgAntiK0)              { nK0++;      }
          else if (truth[i]->GetParticle(p).PdgCode() == genie::kPdgGamma || 
              truth[i]->GetParticle(p).PdgCode() == genie::kPdgElectron || 
              truth[i]->GetParticle(p).PdgCode() == genie::kPdgPositron)            { nEM++;      }
          else if (genie::pdg::IsHadron(truth[i]->GetParticle(p).PdgCode()))             { nOtherHad++;}
          else if (genie::pdg::IsIon   (truth[i]->GetParticle(p).PdgCode()))             { nNucleus++; }
          else                                                                           { nUNKNOWN++; }

        }
      }

      // depends on fCCNC, particle counts,
      //
      // loops through every sigma, checks particle counts,
      //  and fills the histograms accordingly. 
      if( (fSelNuE  && fMVAResult < fNuECut ) ||
          (fSelNuMu && fMVAResult < fNuMuCut) ){
        if(fMakeSystHist) this->FillNormResponseHists();
      }

      unsigned int sigs_i = 0;
      double sig_step = 0.1;
      for(double sig=-2; sig<=2.01; sig+=sig_step){      
        if(knRwgts<=sigs_i)
          mf::LogError("MVASelect") << "too many sigma steps";
        fSigs[sigs_i] = sig;
        sigs_i++;
      }    

      if(fReweight){ // takes a long time, only reweight if necessary

        rwgt::NuReweight *rwt;
        for(unsigned int r=0; r<fINukeLabel.size(); r++){
          for(double s=-2; s<=2.01; s+=sig_step){
            rwt = new rwgt::NuReweight();
            //rwt->ConfigureINuke();
            rwt->ReweightIntraNuke(fINukeLabel[r],s);
            double wgt = rwt->CalcWeight(*(truth[i]), *(gtru[i]));
            if(wgt>10)
              mf::LogVerbatim("MVASelect") << "High weight: " << wgt;
            this->FillINuke(fINukeLabel[r],s,wgt);
            delete rwt;
          } // all sigma steps s
        } // all reweights r
      } // if reweighting

    } // loop through MC truth i


    //Neutrino energy reconstruction
    double longestTrackMom, maxShowerEnergy, corrHadEnergy;

    //numu CC event with at least one reco track,
    //longest reco track is either contained or is exiting with a defined value of MCS track momentum
    if (fSelNuMu){
      if (fMVAAlg.maxTrackLength >= 0.0 && 
          (fMVAAlg.longestTrackContained || (!fMVAAlg.longestTrackContained && fMVAAlg.longestTrackMCSMom >= 0.0))){
        if (fMVAAlg.longestTrackContained)
          longestTrackMom = (fMVAAlg.maxTrackLength - fIntTrkMomRange) / fGradTrkMomRange;
        else
          longestTrackMom = (fMVAAlg.longestTrackMCSMom - fIntTrkMomMCS) / fGradTrkMomMCS;
        corrHadEnergy = (((fMVAAlg.totalEventCharge - fMVAAlg.longestTrackCharge) * (1.0 / 0.63) * (23.6e-9 / 4.966e-3)) - fIntNuMuHadEnCorr) / fGradNuMuHadEnCorr;
        fEreco = longestTrackMom + corrHadEnergy;
      }
      else{
        fEreco = fWirecharge/0.63/4.966e-3*23.6e-9; 
      }
    }
    else if (fSelNuE){//nue CC event with at least one reco shower
      if(fMVAAlg.maxShowerCharge >= 0.0){
        maxShowerEnergy = ((fMVAAlg.maxShowerCharge * (1.0 / 0.63) * (23.6e-9 / 4.966e-3)) - fIntShwEnergy) / fGradShwEnergy;
        corrHadEnergy = (((fMVAAlg.totalEventCharge - fMVAAlg.maxShowerCharge) * (1.0 / 0.63) * (23.6e-9 / 4.966e-3)) - fIntNuEHadEnCorr) / fGradNuEHadEnCorr;
        fEreco = maxShowerEnergy + corrHadEnergy;
      }
      else{
        fEreco = fWirecharge/0.63/4.966e-3*23.6e-9; 
        //0.63: recombination factor, 1/4.966e-3: calorimetry constant to convert ADC to number of electrons, Wion = 23.6 eV
      }
    }

    fTree->Fill();
    return;
  }

  //------------------------------------------------------------------------------
  void MVASelect::FillINuke( rwgt::ReweightLabel_t label, double sig, double wgt){

    unsigned int sig_i = UINT_MAX;
    for(unsigned int a=0; a<knRwgts; a++)
      if( std::abs(fSigs[a]-sig)<1e-6 )
        sig_i = a;

    if(sig_i==UINT_MAX)
      mf::LogError("MVASelect") << "bad sigma index";

    if(      label == rwgt::fReweightMFP_pi )
      finuke_MFP_pi[sig_i] = wgt;
    else if( label == rwgt::fReweightMFP_N )
      finuke_MFP_N[sig_i] = wgt;
    else if( label == rwgt::fReweightFrCEx_pi )
      finuke_FrCEx_pi[sig_i] = wgt;
    else if( label == rwgt::fReweightFrElas_pi )
      finuke_FrElas_pi[sig_i] = wgt;
    else if( label == rwgt::fReweightFrInel_pi )
      finuke_FrInel_pi[sig_i] = wgt;
    else if( label == rwgt::fReweightFrAbs_pi )
      finuke_FrAbs_pi[sig_i] = wgt;
    else if( label == rwgt::fReweightFrPiProd_pi )
      finuke_FrPiProd_pi[sig_i] = wgt;
    else if( label == rwgt::fReweightFrCEx_N )
      finuke_FrCEx_N[sig_i] = wgt;
    else if( label == rwgt::fReweightFrElas_N )
      finuke_FrElas_N[sig_i] = wgt;
    else if( label == rwgt::fReweightFrInel_N )
      finuke_FrInel_N[sig_i] = wgt;
    else if( label == rwgt::fReweightFrAbs_N )
      finuke_FrAbs_N[sig_i] = wgt;
    else if( label == rwgt::fReweightFrPiProd_N )
      finuke_FrPiProd_N[sig_i] = wgt;  
  }

  //------------------------------------------------------------------------------
  void MVASelect::FillNormResponseHists(){

    if(!fMakeSystHist){
      mf::LogWarning("FillNormResponseHists") 
        << "Job not configured to make systematic historgams, return.";
      return;
    }
    double weight(1.);
    bool rightSign;
    for(unsigned int s=0; s<knRwgts; s++){
      for(unsigned int j=0; j<2; j++){ 
        if(j) rightSign = (fNuPdg < 0); // nubar
        else  rightSign = (fNuPdg > 0); // nu

        // h_ccqe_<q2 bin>
        if( IsCCQE()   &&
            fQ2 < 0.2  &&
            rightSign  )   h_ccqe_1[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else               h_ccqe_1[fCCNC][j]->Fill(fEtrue,s,weight);	
        if( IsCCQE()   &&
            fQ2 >= 0.2 &&  fQ2 < 0.55  &&
            rightSign  )   h_ccqe_2[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else               h_ccqe_2[fCCNC][j]->Fill(fEtrue,s,weight);
        if( IsCCQE()    &&
            fQ2 >= 0.55 &&
            rightSign  )   h_ccqe_3[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	           h_ccqe_3[fCCNC][j]->Fill(fEtrue,s,weight);



        // h_cc1pic_<q2 bin>
        if( IsCC1PiC() &&
            fQ2 < 0.2  &&
            rightSign  )   h_cc1pic_1[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	           h_cc1pic_1[fCCNC][j]->Fill(fEtrue,s,weight);	
        if( IsCC1PiC() &&
            fQ2 >= 0.2 &&  fQ2 < 0.55  &&
            rightSign  )   h_cc1pic_2[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else               h_cc1pic_2[fCCNC][j]->Fill(fEtrue,s,weight);
        if( IsCC1PiC()  &&
            fQ2 >= 0.55 &&
            rightSign  )    h_cc1pic_3[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	            h_cc1pic_3[fCCNC][j]->Fill(fEtrue,s,weight);



        // h_cc1piz_<q2 bin>
        if( IsCC1Pi0() &&
            fQ2 < 0.2  &&
            rightSign  )   h_cc1piz_1[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	           h_cc1piz_1[fCCNC][j]->Fill(fEtrue,s,weight);	
        if( IsCC1Pi0() &&
            fQ2 >= 0.2 &&  fQ2 < 0.55  &&
            rightSign  )   h_cc1piz_2[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	           h_cc1piz_2[fCCNC][j]->Fill(fEtrue,s,weight);
        if( IsCC1Pi0()  &&
            fQ2 >= 0.55 &&
            rightSign  )    h_cc1piz_3[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	            h_cc1piz_3[fCCNC][j]->Fill(fEtrue,s,weight);



        // h_2pi
        if( IsCC2Pi()   &&
            rightSign  )    h_2pi[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	            h_2pi[fCCNC][j]->Fill(fEtrue,s,weight);



        // h_dis_<q2 bin>
        if( IsDIS()       &&
            fEtrue < 7.5  &&
            rightSign  )   h_dis_1[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	           h_dis_1[fCCNC][j]->Fill(fEtrue,s,weight);
        if( IsDIS()        &&
            fEtrue >= 7.5  &&  fEtrue < 15.0  &&
            rightSign  )   h_dis_2[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	           h_dis_2[fCCNC][j]->Fill(fEtrue,s,weight);
        if( IsDIS()      &&
            fQ2 >= 15.0  &&
            rightSign  )    h_dis_3[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	            h_dis_3[fCCNC][j]->Fill(fEtrue,s,weight);



        // h_coh
        if( fIsCoh    &&
            rightSign  )    h_coh[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	            h_coh[fCCNC][j]->Fill(fEtrue,s,weight);


        // h_nc
        if( fCCNC == 1 &&
            rightSign  )    h_nc[fCCNC][j]->Fill(fEtrue,s,weight*(1+0.1*s));
        else	            h_nc[fCCNC][j]->Fill(fEtrue,s,weight);


      }
    }

  }

  //------------------------------------------------------------------------------
  bool MVASelect::IsCCQE(){
    return ( fCCNC==0 &&
        nPip==0  && nPim==0 && nPi0==0 &&
        nKp==0   && nKm==0  && nK0==0  &&
        nEM==0   && nOtherHad==0 );
  }
  bool MVASelect::IsCC1PiC(){
    return ( fCCNC==0 &&
        nPip+nPim == 1    && nPi0==0 && 
        nKp==0  && nKm==0 && nK0==0  &&
        nOtherHad==0      &&
        !fIsCoh );
  }
  bool MVASelect::IsCC1Pi0(){
    return ( fCCNC==0 && 
        nPip== 0 && nPim==0 && nPi0==1 && 
        nKp==0   && nKm==0  && nK0==0  &&
        nOtherHad==0        &&
        !fIsCoh );
  }
  bool MVASelect::IsCC2Pi(){
    return ( fCCNC==0 &&
        nPip     +  nPim    +  nPi0 == 2 && 
        nKp==0   && nKm==0  && nK0==0    &&
        nOtherHad==0        &&
        !fIsCoh );
  }
  bool MVASelect::IsDIS(){
    return ( fIsDIS &&
        nPip +  nPim + nPi0 > 2 );
  }


  //------------------------------------------------------------------------------
  void MVASelect::endSubRun(const art::SubRun& sr){
    fMVAAlg.endSubRun(sr);
  }

  DEFINE_ART_MODULE(MVASelect)

} // namespace dunemva

#endif // MVASelect_H


/*

ReweightLabel_t:

fReweightMFP_pi = genie::rew::kINukeTwkDial_MFP_pi,           ///< tweak mean free path for pions
fReweightMFP_N = genie::rew::kINukeTwkDial_MFP_N,             ///< tweak mean free path for nucleons
fReweightFrCEx_pi = genie::rew::kINukeTwkDial_FrCEx_pi,       ///< tweak charge exchange probability for pions, for given total rescattering probability
fReweightFrElas_pi = genie::rew::kINukeTwkDial_FrElas_pi,     ///< tweak elastic   probability for pions, for given total rescattering probability
fReweightFrInel_pi = genie::rew::kINukeTwkDial_FrInel_pi,     ///< tweak inelastic probability for pions, for given total rescattering probability
fReweightFrAbs_pi = genie::rew::kINukeTwkDial_FrAbs_pi,       ///< tweak absorption probability for pions, for given total rescattering probability
fReweightFrPiProd_pi = genie::rew::kINukeTwkDial_FrPiProd_pi, ///< tweak pion production probability for pions, for given total rescattering probability
fReweightFrCEx_N = genie::rew::kINukeTwkDial_FrCEx_N,         ///< tweak charge exchange probability for nucleons, for given total rescattering probability
fReweightFrElas_N = genie::rew::kINukeTwkDial_FrElas_N,       ///< tweak elastic    probability for nucleons, for given total rescattering probability
fReweightFrInel_N = genie::rew::kINukeTwkDial_FrInel_N,       ///< tweak inelastic  probability for nucleons, for given total rescattering probability
fReweightFrAbs_N = genie::rew::kINukeTwkDial_FrAbs_N,         ///< tweak absorption probability for nucleons, for given total rescattering probability
fReweightFrPiProd_N = genie::rew::kINukeTwkDial_FrPiProd_N,   ///< tweak pion production probability for nucleons, for given total rescattering probability

kINukeTwkDial_MFP_pi            20%
kINukeTwkDial_MFP_N             20%
kINukeTwkDial_FrAbs_pi          20%
kINukeTwkDial_FrCEx_pi          50%
kINukeTwkDial_FrElas_pi         10%
kINukeTwkDial_FrInel_pi         40%
kINukeTwkDial_FrPiProd_pi       20%
kINukeTwkDial_FrAbs_N           20%
kINukeTwkDial_FrCEx_N           50%
kINukeTwkDial_FrElas_N          30%
kINukeTwkDial_FrInel_N          40%
kINukeTwkDial_FrPiProd_N        20%

*/
