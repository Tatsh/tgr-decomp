#include "../../types-win32.h"
//----- (10079550) --------------------------------------------------------
int sub_10079550()
{
  int result; // eax

  result = --dword_118ABE00;
  if ( dword_118ABE00 >= 0 )
  {
    result = dword_118ABE00;
    if ( !dword_118ABE00 )
    {
      if ( g_DirectInputEffect )
      {
        g_DirectInputEffect->lpVtbl->Release(g_DirectInputEffect);
        g_DirectInputEffect = 0;
      }
      if ( g_DirectInputEffect_0 )
      {
        g_DirectInputEffect_0->lpVtbl->Release(g_DirectInputEffect_0);
        g_DirectInputEffect_0 = 0;
      }
      result = (int)g_DirectInputDevice2A;
      if ( g_DirectInputDevice2A )
      {
        g_DirectInputDevice2A->lpVtbl->Unacquire(g_DirectInputDevice2A);
        result = g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
        g_DirectInputDevice2A = 0;
      }
    }
  }
  else
  {
    dword_118ABE00 = 0;
  }
  return result;
}
// 118ABE00: using guessed type int dword_118ABE00;
