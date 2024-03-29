#ifndef __EVENT_H__
#define __EVENT_H__

/****************************************************************
 * event definition
 * author: psavina
 * date: 19/12/2019
 * version: 1.0
 ****************************************************************/

#include <TObject.h>
#include <vector>

namespace myEvt{
  class event : public TObject
  {
  public:

    event();
    ~event();

    void clear();
    double getSb();
    
    double         fEnergy; // eV
    double         fZenith; // grad
    double         fXmax;   // gr/cm^2
    double         fNmu; 
    unsigned int   fStationNumber;
    std::vector<double> fStationSignal; // VEM
    std::vector<double> fStationDistance; // m
    std::vector<double> fStationRisetime; // ns

  private:
    ClassDef( event, 1 )
    
  };
}

#endif //__EVENT_H__
