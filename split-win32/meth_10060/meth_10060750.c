#include "../../types-win32.h"
//----- (10060750) --------------------------------------------------------
LPDIRECTINPUTDEVICEA __thiscall meth_10060750(unk1 *this, int a2)
{
  LPDIRECTINPUTDEVICEA result; // eax

  result = this->lpDIDeviceA;
  if ( result && *((_DWORD *)dword_10AA2904 + 3) )
  {
    if ( dword_10AA33E0 )
      result = (LPDIRECTINPUTDEVICEA)result->lpVtbl->Unacquire(result);
    else
      result = (LPDIRECTINPUTDEVICEA)result->lpVtbl->Acquire(result);
  }
  return result;
}
// 10AA33E0: using guessed type int dword_10AA33E0;
