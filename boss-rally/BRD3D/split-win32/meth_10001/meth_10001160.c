#include "../../types-win32.h"
//----- (10001160) --------------------------------------------------------
int __thiscall meth_10001160(int *this)
{
  int result; // eax
  int this_field0; // eax

  if ( !*this || (*(_BYTE *)(*this + 28) & 0x1F) != 31 )
    return -2005522669;
  this_field0 = *this;
  if ( *this
    && (*(_BYTE *)(this_field0 + 28) & 0x1F) == 31
    && *(_DWORD *)(this_field0 + 64)
    && *(_DWORD *)(this_field0 + 96)
    && *(_DWORD *)(this_field0 + 100) )
  {
    result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}
