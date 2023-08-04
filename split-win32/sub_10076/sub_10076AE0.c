#include "../../types-win32.h"
//----- (10076AE0) --------------------------------------------------------
int __thiscall sub_10076AE0(_DWORD *this, int chosenCar)
{
  int result; // eax

  result = chosenCar;
  if ( chosenCar < 16 )
  {
    this[2669] = 0;
  }
  else
  {
    result = chosenCar - 16;
    this[2669] = 1;
  }
  this[2666] = result;
  return result;
}
