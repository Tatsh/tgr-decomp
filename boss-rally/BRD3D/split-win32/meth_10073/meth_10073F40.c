#include "../../types-win32.h"
//----- (10073F40) --------------------------------------------------------
int __thiscall meth_10073F40(_DWORD *this)
{
  int result; // eax

  result = this[3];
  if ( this[2] )
    ++result;
  return result;
}
