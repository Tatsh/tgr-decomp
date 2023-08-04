#include "../../types-win32.h"
//----- (100664C0) --------------------------------------------------------
void __thiscall sub_100664C0(_DWORD *this)
{
  int i; // edi

  for ( i = 0; i < this[31]; ++i )
  {
    free(*(void **)(this[30] + 4 * i));
    *(_DWORD *)(this[30] + 4 * i) = 0;
  }
  free((void *)this[30]);
  this[30] = 0;
  this[31] = 0;
}
