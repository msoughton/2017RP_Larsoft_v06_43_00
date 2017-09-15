// AdcChannelData.h
//
// David Adams
// June 2016
//
// Struct to hold the prepared time samples for a single TPC channel.
//
//     channel - Offline channel number
//    pedestal - Pedestal subtracted from the raw count
//         raw - Uncompressed array holding the raw ADC count for each tick
//     samples - Array holding the prepared signal value for each tick
//       flags - Array holding the status flag for each tick
//      signal - Array holding bools indicating which ticks have signals
//        rois - Array of ROIs indicating which ticks have signals
//       digit - Corresponding raw digit
//        wire - Corresponding wire
//  digitIndex - Index for the digit in the event digit container
//   wireIndex - Index for the wire in the event wire container
//
// User can compare values against the defaults below to know if a value has been set.
// For arrays, check if the size in nonzero.

#ifndef AdcChannelData_H
#define AdcChannelData_H

#include <map>
#include "dune/DuneInterface/AdcTypes.h"

namespace raw {
  class RawDigit;
}
namespace recob {
  class Wire;
}

class AdcChannelData {

public:

  static const AdcIndex badIndex =-1;
  static const AdcChannel badChannel =-1;
  static const size_t badSignal =-99999;

  AdcChannel channel =badIndex;
  AdcSignal pedestal =badSignal;
  AdcCountVector raw;
  AdcSignalVector samples;
  AdcFlagVector flags;
  AdcFilterVector signal;
  AdcRoiVector rois;
  const raw::RawDigit* digit =nullptr;
  const recob::Wire* wire =nullptr;
  AdcIndex digitIndex =badIndex;
  AdcIndex wireIndex =badIndex;

  // Fill rois from signal.
  void roisFromSignal();

  // Hide copy and assignment but allow move.
  AdcChannelData() =default;
  AdcChannelData(AdcChannelData&&) =default;
  AdcChannelData(const AdcChannelData&) =delete;
  AdcChannelData& operator=(AdcChannelData&&) =default;
  AdcChannelData& operator=(const AdcChannelData&) =delete;

};

//**********************************************************************

typedef std::map<AdcChannel, AdcChannelData> AdcChannelDataMap;

//**********************************************************************

inline void AdcChannelData::roisFromSignal() {
  rois.clear();
  bool inRoi = false;
  for ( unsigned int isig=0; isig<signal.size(); ++isig ) {
    if ( inRoi ) {
      AdcRoi& roi = rois.back();
      if ( signal[isig] ) roi.second = isig;
      else inRoi = false;
    } else {
      if ( signal[isig] ) {
        rois.push_back(AdcRoi(isig, isig));
        inRoi = true;
      }
    }
  }
}

//**********************************************************************
#endif
