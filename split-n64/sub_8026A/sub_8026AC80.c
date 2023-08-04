#include "../../types-n64.h"
//----- (8026AC80) --------------------------------------------------------
void __fastcall sub_8026AC80(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // $a2
  _DWORD *v3; // $a3

  v2 = a1;
  v3 = *a1;
  if ( *a1 )
  {
    while ( v3 != a2 )
    {
      v2 = v3;
      v3 = (_DWORD *)*v3;
      if ( !v3 )
        return;
    }
    *v2 = *a2;
  }
}
