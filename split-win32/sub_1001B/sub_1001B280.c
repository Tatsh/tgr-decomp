#include "../../types-win32.h"
//----- (1001B280) --------------------------------------------------------
char __thiscall sub_1001B280(void **this)
{
  void *v2; // eax

  sub_1001B5A0((int *)this);
  sub_1001B3B0((int *)this);
  if ( this[6] )
  {
    free(this[6]);
    this[6] = 0;
  }
  if ( this[5] )
  {
    free(this[5]);
    this[5] = 0;
  }
  v2 = *this;
  this[203] = 0;
  LOBYTE(v2) = (unsigned __int8)v2 & 0xFE;
  this[204] = 0;
  *this = v2;
  return (char)v2;
}
