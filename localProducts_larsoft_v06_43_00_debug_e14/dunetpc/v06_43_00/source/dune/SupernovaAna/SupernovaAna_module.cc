////////////////////////////////////////////////////////////////////////
// Class:       SupernovaAna
// Module Type: analyzer
// File:        SupernovaAna_module.cc
//
// Generated at Mon Jul 11 21:36:48 2016 by Michael Baird using the old
// copy and paste...
////////////////////////////////////////////////////////////////////////

// C++ includes

// ROOT includes
#include "TTree.h"
#include "TH1F.h"

// Framework includes
#include "art/Framework/Core/EDAnalyzer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "art/Framework/Services/Optional/TFileDirectory.h"
#include "art/Framework/Services/Optional/TFileService.h"
#include "art/Framework/Services/Registry/ServiceHandle.h"
#include "canvas/Utilities/InputTag.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"
#include "nusimdata/SimulationBase/MCTruth.h"
#include "lardataobj/RecoBase/Hit.h"
#include "larsim/MCCheater/BackTracker.h"
#include "lardataobj/Simulation/SimChannel.h"

// DUNETPC specific includes
#include "dune/DAQTriggerSim/TriggerDataProducts/TriggerTypes.h"
#include "dune/DAQTriggerSim/TriggerDataProducts/BasicTrigger.h"

// should this be somewhere else?
const int kMaxNumHits=50000;
const int kMaxNumParticles=500;

class SupernovaAna;

class SupernovaAna : public art::EDAnalyzer {

public:

  explicit SupernovaAna(fhicl::ParameterSet const & p);

  // Plugins should not be copied or assigned.
  SupernovaAna(SupernovaAna const &) = delete;
  SupernovaAna(SupernovaAna &&) = delete;
  SupernovaAna & operator = (SupernovaAna const &) = delete;
  SupernovaAna & operator = (SupernovaAna &&) = delete;

  // The main guts...
  void analyze(art::Event const & e) override;

  void reconfigure(fhicl::ParameterSet const & p);

  void beginJob();



private:
  
  //std::map< std::pair<double,double>, std::vector<geo::WireID> > fHitToWids;
  //void InitHitToWids( const std::vector< art::Ptr<recob::Hit> >& Hits );
  art::ServiceHandle<cheat::BackTracker> bt; 
  
  // label for the modules that made trigger objects
  std::string fTruthLabel;
  std::string fHitLabel;

  // Define an ntuple to be filled
  TTree* fNTuple;

  // Define variables to be used as branches of the nTuple
  int EventNum;
  int EventNumCut;
  int NHits;
  int NCollectionHits;
  double HitX[kMaxNumHits];
  double HitY[kMaxNumHits];
  double HitZ[kMaxNumHits];
  double IdesPerHit[kMaxNumHits];
  double HitTrueE[kMaxNumHits];
  double avgRMS;
  double avgRMSloop[kMaxNumHits];
  double avgRMSloopsum;
  double SummedADC;
  int NMCTruths;
  size_t NParticles[kMaxNumParticles];
  int ParticleNo[kMaxNumParticles];
  double MomentumXTruths[kMaxNumParticles];
  double MomentumYTruths[kMaxNumParticles];
  double MomentumZTruths[kMaxNumParticles];
  double MomentumTransTruths[kMaxNumParticles];
  double NuEnergyTruths[kMaxNumParticles];
  double LeptonEnergyTruths[kMaxNumParticles];
  double ThetaTruths[kMaxNumParticles];
  int OriginTruths[kMaxNumParticles];
  int CCNCTruths[kMaxNumParticles];
  int ModeTruths[kMaxNumParticles];
  int InteractionTypeTruths[kMaxNumParticles];
  int TargetTruths[kMaxNumParticles];
  int HitNucTruths[kMaxNumParticles];
  int HitQuarkTruths[kMaxNumParticles];
  double NuWTruths[kMaxNumParticles];
  double NuXTruths[kMaxNumParticles];
  double NuYTruths[kMaxNumParticles];
  double NuQSqrTruths[kMaxNumParticles];
  double NuTransversePTruths[kMaxNumParticles];
  int NuPDGCodeTruths[kMaxNumParticles];  
  int LeptonPDGCodeTruths[kMaxNumParticles];  
  int NTrajectoryPointsTruths[kMaxNumParticles];
  double xTruths[kMaxNumParticles];
  double yTruths[kMaxNumParticles];
  double zTruths[kMaxNumParticles];
  double tTruths[kMaxNumParticles];
  double EndxTruths[kMaxNumParticles];
  double EndyTruths[kMaxNumParticles];
  double EndzTruths[kMaxNumParticles];
  double EndtTruths[kMaxNumParticles];
  double DeltaXTruths[kMaxNumParticles];
  double DeltaYTruths[kMaxNumParticles];
  double EndPxTruths[kMaxNumParticles];
  double EndPyTruths[kMaxNumParticles];
  double EndPzTruths[kMaxNumParticles];
  double EndETruths[kMaxNumParticles];
  double GvxTruths[kMaxNumParticles];
  double GvyTruths[kMaxNumParticles];
  double GvzTruths[kMaxNumParticles];
  double GvtTruths[kMaxNumParticles];
  int FirstDaughterTruths[kMaxNumParticles];
  int LastDaughterTruths[kMaxNumParticles]; 
  int RescatterTruths[kMaxNumParticles]; 
  
};



//......................................................
SupernovaAna::SupernovaAna(fhicl::ParameterSet const & p)
  :
  EDAnalyzer(p)
{
  this->reconfigure(p);
}



//......................................................
void SupernovaAna::reconfigure(fhicl::ParameterSet const & p)
{
  fTruthLabel = p.get<std::string> ("TruthLabel");
  fHitLabel = p.get<std::string> ("HitLabel");
}



//......................................................
void SupernovaAna::beginJob()
{

  art::ServiceHandle<art::TFileService> tfs;

  // Make nTuple
  fNTuple = tfs->make<TTree>("SupernovaAna","Supernonva analysis tree");

  // Add branches to nTuple
  fNTuple->Branch("EventNum",&EventNum);
  fNTuple->Branch("EventNumCut",&EventNumCut);
  fNTuple->Branch("NHits",&NHits);
  fNTuple->Branch("NCollectionHits",&NCollectionHits,"NCollectionHits/I");
  fNTuple->Branch("avgRMS",&avgRMS);
  fNTuple->Branch("SummedADC",&SummedADC);
  fNTuple->Branch("NMCTruths",&NMCTruths);
  fNTuple->Branch("NParticles",NParticles,"NParticles[NMCTruths]/I");
  fNTuple->Branch("ParticleNo",ParticleNo,"ParticleNo[NMCTruths]/I");
  fNTuple->Branch("MomentumXTruths",MomentumXTruths,"MomentumXTruths[NMCTruths]/D");
  fNTuple->Branch("MomentumYTruths",MomentumYTruths,"MomentumYTruths[NMCTruths]/D");
  fNTuple->Branch("MomentumZTruths",MomentumZTruths,"MomentumZTruths[NMCTruths]/D");
  fNTuple->Branch("NuEnergyTruths",NuEnergyTruths,"NuEnergyTruths[NMCTruths]/D");
  fNTuple->Branch("LeptonEnergyTruths",LeptonEnergyTruths,"LeptonEnergyTruths[NMCTruths]/D");
  fNTuple->Branch("ThetaTruths",ThetaTruths,"ThetaTruths[NMCTruths]/D");
  fNTuple->Branch("OriginTruths",OriginTruths,"OriginTruths[NMCTruths]/I");
  fNTuple->Branch("CCNCTruths",CCNCTruths,"CCNCTruths[NMCTruths]/I");
  fNTuple->Branch("InteractionTypeTruths",InteractionTypeTruths,"InteractionTypeTruths[NMCTruths]/I");
  fNTuple->Branch("TargetTruths",TargetTruths,"TargetTruths[NMCTruths]/I");
  fNTuple->Branch("HitNucTruths",HitNucTruths,"HitNucTruths[NMCTruths]/I");
  fNTuple->Branch("HitQuarkTruths",HitQuarkTruths,"HitQuarkTruths[NMCTruths]/I");
  fNTuple->Branch("NuWTruths",NuWTruths,"NuWTruths[NMCTruths]/D");
  fNTuple->Branch("NuXTruths",NuXTruths,"NuXTruths[NMCTruths]/D");
  fNTuple->Branch("NuYTruths",NuWTruths,"NuYTruths[NMCTruths]/D");
  fNTuple->Branch("NuQSqrTruths",NuQSqrTruths,"NuQSqrTruths[NMCTruths]/D");
  fNTuple->Branch("NuTransversePTruths",NuTransversePTruths,"NuTransversePTruths[NMCTruths]/D");
  fNTuple->Branch("NuPDGCodeTruths",NuPDGCodeTruths,"NuPDGCodeTruths[NMCTruths]/I");
  fNTuple->Branch("LeptonPDGCodeTruths",LeptonPDGCodeTruths,"LeptonPDGCodeTruths[NMCTruths]/I");
  fNTuple->Branch("NTrajectoryPointsTruths",NTrajectoryPointsTruths,"NTrajectoryPointsTruths[NMCTruths]/I");
  fNTuple->Branch("xTruths",xTruths,"xTruths[NMCTruths]/D");
  fNTuple->Branch("yTruths",yTruths,"yTruths[NMCTruths]/D");
  fNTuple->Branch("zTruths",zTruths,"zTruths[NMCTruths]/D");
  fNTuple->Branch("tTruths",tTruths,"tTruths[NMCTruths]/D");
  fNTuple->Branch("EndxTruths",EndxTruths,"EndxTruths[NMCTruths]/D");
  fNTuple->Branch("EndyTruths",EndyTruths,"EndyTruths[NMCTruths]/D");
  fNTuple->Branch("EndzTruths",EndzTruths,"EndzTruths[NMCTruths]/D");
  fNTuple->Branch("EndtTruths",EndtTruths,"EndtTruths[NMCTruths]/D");
  fNTuple->Branch("DeltaXTruths",DeltaXTruths,"DeltaXTruths[NMCTruths]/D");
  fNTuple->Branch("DeltaYTruths",DeltaYTruths,"DeltaYTruths[NMCTruths]/D");
  fNTuple->Branch("EndPxTruths",EndPxTruths,"EndPxTruths[NMCTruths]/D");
  fNTuple->Branch("DeltaYTruths",DeltaYTruths,"DeltaYTruths[NMCTruths]/D");
  fNTuple->Branch("DeltaYTruths",DeltaYTruths,"DeltaYTruths[NMCTruths]/D");
  fNTuple->Branch("DeltaYTruths",DeltaYTruths,"DeltaYTruths[NMCTruths]/D");
  fNTuple->Branch("DeltaYTruths",DeltaYTruths,"DeltaYTruths[NMCTruths]/D");
  fNTuple->Branch("HitX",HitX,"HitX[NCollectionHits]/D");
  fNTuple->Branch("HitY",HitY,"HitY[NCollectionHits]/D");
  fNTuple->Branch("HitZ",HitZ,"HitZ[NCollectionHits]/D");
  //fNTuple->Branch("HitZ",HitZ,TString::Format("HitZ[%i]/D",NCollectionHits));
  fNTuple->Branch("IdesperHit",IdesPerHit,"IdesPerHit[NCollectionHits]/D");
  fNTuple->Branch("HitTrueE",HitTrueE,"HitTrueE[NCollectionHits]/D");
  
  
  
 
}



//......................................................
void SupernovaAna::analyze(art::Event const & e)
{
  //  art::ServiceHandle<cheat::BackTracker> bt; 

  //==============================HITS================================

  // Loop through the truth arrays and sets the values of the arrays
  // to an arbitrary default (unfilled) value
  for(int i=0;i<kMaxNumHits;i++){
    HitX[i] = -1.0e9;
    HitY[i] = -1.0e9;
    HitZ[i] = -1.0e9;
    IdesPerHit[i] = -1.0e9;
    HitTrueE[i] = -1.0e9;
  }
    

  // example code on calling bt (this works)
  /*
    const sim::ParticleList& plist = bt->ParticleList();
    // --- Now loop through the particle list.
    for ( sim::ParticleList::const_iterator ipar = plist.begin(); ipar!=plist.end(); ++ipar) {
    // --- Grab this particle.
    simb::MCParticle *particle = ipar->second;
    //8 Let's just write out what our primary particles are...
    if (particle->Process() != "primary") continue; // Can also check that particle->Mother() != 0. 
    std::cout << "-- Particle with TrackID " << particle->TrackId() << ", which was a " << particle->PdgCode() << " was a primary and had initial energy " << particle->E() 
    << ", " << particle->NumberTrajectoryPoints() << " trajectory points, and " << particle->NumberDaughters() << " daughters. Process - " << particle->Process()
    << std::endl;
    }
  */

  // Get the Hits out of the event
  art::Handle< std::vector< recob::Hit > > hits_list;
  e.getByLabel(fHitLabel, hits_list);
  std::vector< art::Ptr<recob::Hit> > Hits;
  art::fill_ptr_vector(Hits, hits_list);


  // Gets the number of hits per event and fills into a histogram
  NHits = Hits.size();
  std::cout << "Number of Hits: " << NHits << std::endl;
 
  // Get Hit information
  SummedADC = 0.0;
  NCollectionHits = 0;
  for(size_t i = 0; i < Hits.size(); i++){ // changed from int i and NHits just to see if it works
    recob::Hit const& hit = *(Hits[i]); // Dereference Hits vector to be a pointer to the Hits location
    // If the signal type is not of the enum value corresponding to collection hits (geo::kCollection),
    // then do not perform the rest of the loop for the current i value and continue the loop from the
    // following i value and so only count NCollectionHits for when there is a collection hit

    //if( hit.SignalType() != geo::kCollection ) continue; 

    if( hit.SignalType() == geo::kCollection ){ 

      // Get summed ADC and average RMS of hit slope
      avgRMSloop[NCollectionHits] = hit.RMS();
      avgRMSloopsum += avgRMSloop[NCollectionHits];
      SummedADC += hit.SummedADC();

      // Get position
    
      std::vector< sim::IDE > ides; // Creates an empty vector called ides
      try{
	bt->HitToSimIDEs( hit, ides );
      }
      catch(...){};  
    

      if( (ides.size() > 0) && (NCollectionHits < kMaxNumHits) ){
	HitX[NCollectionHits] = ides[0].x;
	//std::cout << "x-position of collection hit" << HitX[i] << std::endl;
	HitY[NCollectionHits] = ides[0].y;
	HitZ[NCollectionHits] = ides[0].z;
	IdesPerHit[NCollectionHits] = ides.size();
	//HitTrueE[i] = 0.;
	for(size_t ide = 0; ide < ides.size(); ide++) 
	  HitTrueE[NCollectionHits] += ides[ide].energy;
    
	//XRange = std::max(ides.x) - std::min(ides.x);
	//YRange ...
	//ZRange ...
      
	//MaxRange = std::max(XRange, YRange, ZRange);
      
	avgRMS = avgRMSloopsum/(NHits);
      
      }

      if(HitTrueE[NCollectionHits] > -1e9){
	HitTrueE[NCollectionHits] += 1e9;
      }
    
      NCollectionHits++;
    }
    
  };
  
  //std::cout << "Number of Collection Hits: " << NCollectionHits << std::endl;

  // Detect if the number of hits per event is greater than 
  // or equal to the maximum number of particles per event else 
  // we'll fall off the end of the array and cause a seg fault
  if(NCollectionHits >= kMaxNumHits) { 
    std::cerr << "ERROR: NCollectionHits " << NCollectionHits << 
      " >= kMaxNumHits " << kMaxNumHits << 
      " , will cause a segmentation fault" << std::endl;}

  //============================MCTRUTHS==============================

  // Get the MCTruths out of the event
  art::Handle< std::vector< simb::MCTruth > > truths_list;
  e.getByLabel(fTruthLabel, truths_list);

  // Gets the number of MC truths per event and fills into a histogram
  NMCTruths = truths_list->size();
  
  // Loop through the truth arrays and sets the values of the arrays
  // to an arbitrary default (unfilled) value
  for(int i=0;i<kMaxNumParticles;i++){
    xTruths[i] = -1.0e9;
    yTruths[i] = -1.0e9;
    zTruths[i] = -1.0e9;
    tTruths[i] = -1.0e9;
    EndxTruths[i] = -1.0e9;
    EndyTruths[i] = -1.0e9;
    EndzTruths[i] = -1.0e9;
    EndtTruths[i] = -1.0e9;
    NParticles[i] = -999;
    ParticleNo[i] = -999;
    MomentumXTruths[i] = -1.0e9;
    MomentumYTruths[i] = -1.0e9;
    MomentumZTruths[i] = -1.0e9;
    NuEnergyTruths[i] = -999;
    LeptonEnergyTruths[i] = -999;
    ThetaTruths[i] = -999;
    OriginTruths[i] = -999;
    CCNCTruths[i] = -999;
    ModeTruths[i] = -999;
    NTrajectoryPointsTruths[i] = -999;
    InteractionTypeTruths[i] = -1.0e9; 
    TargetTruths[i] =  -1.0e9;
    HitNucTruths[i] = -1.0e9;
    HitQuarkTruths[i] = -1.0e9;
    NuWTruths[i] = -1.0e9;
    NuXTruths[i] =  -1.0e9;
    NuYTruths[i] = -1.0e9;
    NuQSqrTruths[i] =  -1.0e9;
    NuTransversePTruths[i] = -1.0e9;
    NuPDGCodeTruths[i] = 0;
    LeptonPDGCodeTruths[i] = 0;
    DeltaXTruths[i] = -1.0e9;
    DeltaYTruths[i] = -1.0e9;

  }
  
  // Detect if the number of MC truths per event is greater than 
  // or equal to the maximum number of particles per event else 
  // we'll fall off the end of the array and cause a seg fault
  if(NMCTruths >= kMaxNumParticles) { 
    std::cerr << "ERROR: NMCTruths " << NMCTruths << 
      " >= kMaxNumParticles " << kMaxNumParticles << 
      " , will cause a segmentation fault" << std::endl;}
  // Detect if the number of hits per event is greater than 
  // or equal to the maximum number of particles per event else 
  // we'll fall off the end of the array and cause a seg fault
  if(NHits >= kMaxNumHits) { 
    std::cerr << "ERROR: NHits " << NHits << 
      " >= kMaxNumHits " << kMaxNumHits << 
      " , will cause a segmentation fault" << std::endl;}
  
  // Create nTuple data for any number of truths 
  for(size_t i = 0; i < truths_list->size();i++){
    simb::MCTruth const& truth = truths_list->at(i);

    NParticles[i] = truth.NParticles();
    for(size_t j =0; j < NParticles[i]; j++)
      {
	std::cout << "j = " << j << std::endl;
	ParticleNo[j] = j;
	std::cout << "jth particle number = " << ParticleNo[j] << std::endl;
      }
    //for(int k = 0; k < kMaxNumParticles; k++) std::cout << "Intermediate particle number = " << ParticleNo[k] << std::endl;

    // Get the ith particle's Origin truths
    OriginTruths[i] = truth.Origin();
           
    // Only get neutrino truths if they exist to avoid a segmentation fault
    if (truth.NeutrinoSet()){
      simb::MCNeutrino const& mc_neutrino = truth.GetNeutrino();
      // should change notation such that mc_neutrino = truth.GetNeutrino().Nu();     // and then remove .Nu() when called
      simb::MCParticle const& mc_lepton = mc_neutrino.Lepton();

      // Get data to be filled into nTuple       
      xTruths[i] = mc_lepton.Vx();
      yTruths[i] = mc_lepton.Vy();
      zTruths[i] = mc_lepton.Vz();
      tTruths[i] = mc_lepton.T();
      EndxTruths[i] = mc_lepton.EndX();
      EndyTruths[i] = mc_lepton.EndY();
      EndzTruths[i] = mc_lepton.EndZ();
      EndtTruths[i] = mc_lepton.EndT();
      MomentumXTruths[i] = mc_lepton.Px();
      MomentumYTruths[i] = mc_lepton.Py();
      MomentumZTruths[i] = mc_lepton.Pz();
      NuEnergyTruths[i] = mc_neutrino.Nu().E();
      LeptonEnergyTruths[i] = mc_lepton.E();
      ThetaTruths[i] = mc_neutrino.Theta();
      CCNCTruths[i] = mc_neutrino.CCNC();
      ModeTruths[i] = mc_neutrino.Mode();
      NTrajectoryPointsTruths[i] = mc_lepton.NumberTrajectoryPoints();
      InteractionTypeTruths[i] = mc_neutrino.InteractionType();
      TargetTruths[i] = mc_neutrino.Target();
      HitNucTruths[i] = mc_neutrino.HitNuc();
      HitQuarkTruths[i] = mc_neutrino.HitQuark();
      NuWTruths[i] = mc_neutrino.W();
      NuXTruths[i] = mc_neutrino.X();
      NuYTruths[i] = mc_neutrino.Y();
      NuQSqrTruths[i] = mc_neutrino.QSqr();
      NuTransversePTruths[i] = mc_neutrino.Pt();
      NuPDGCodeTruths[i] = mc_neutrino.Nu().PdgCode();
      LeptonPDGCodeTruths[i] = mc_lepton.PdgCode();
      DeltaXTruths[i] = EndxTruths[i] - xTruths[i];
      DeltaYTruths[i] = EndyTruths[i] - yTruths[i];
    
    }
  }
  
  art::EventNumber_t event = e.id().event();
  EventNum = event;
  if (NHits<2) {
    EventNumCut = event;
  }


  // Now we should have NMCTruths = truths_list->size() and 
  // PDGCodeTruths [0 - (NMCTruths - 1)] should contain PdgCodes, 
  // [ NMCTruths - 500 ] should be equal to -999, signifying that 
  // we did not fill this part
  
  // Fill nTuple
  //for(int j = 0; j < NCollectionHits; j++) std::cout << "After: " << HitX[j] << std::endl;
  for(int l = 0; l < kMaxNumParticles; l++) std::cout << "End Particle number = " << ParticleNo[l] << std::endl;
  fNTuple->Fill();
}

/* void SupernovaAna::InitHitToWids( const std::vector< art::Ptr<recob::Hit> >& ChHits )
   {

   for(int i = 0; i < NHits; i++){
   recob::Hit const& hit = *(Hits[i]); // Dereference Hits vector to be a pointer to the Hits location                                         

   std::vector< sim::IDE > ides;
   try{
   bt->HitToSimIDEs(hit, ides );
   }
   catch(...){};


   if(ides.size()>0 && i<kMaxNumHits){
   HitX[i] = ides[0].x;
   IdesPerHit[i] = ides.size();
   }
*/


DEFINE_ART_MODULE(SupernovaAna)
