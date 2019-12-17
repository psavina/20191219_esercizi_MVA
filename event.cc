#include "event.h"

#include <iostream>

ClassImp( myEvt::event )

namespace myEvt
{
  event::event()
  {
    clear();
  }

  event::~event()
  { }

  void
  event::clear()
  {
    fEnergy        = 0.0;
    fZenith        = 0.0;
    fXmax          = 0.0;
    fNmu           = 0.0;
    fStationNumber = 0;
    
    fStationSignal.clear();
    fStationDistance.clear();
    fStationRisetime.clear();
  }

  double
  event::getSb()
  {
    double sb = 0.0;
    double rRef = 1000; //m
    double b = 4.0;
    for(unsigned int iStat=0; iStat<fStationNumber; iStat++)
    {
      double weight = pow( fStationDistance[iStat]/rRef, b );
      sb += fStationSignal[iStat]*( weight );
    }
    
    return sb;
  }
  
}
