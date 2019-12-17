#include <iostream>

#include "event.h"

int main()
{
  myEvt::event* ev = new myEvt::event();
  std::cout << ev->fStationNumber << std::endl;

  return 0;
}
