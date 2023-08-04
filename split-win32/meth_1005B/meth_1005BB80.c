#include "../../types-win32.h"
//----- (1005BB80) --------------------------------------------------------
int __thiscall meth_1005BB80(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  char v6; // al
  int v7; // ecx
  void (__cdecl *v8)(_DWORD *, int); // eax

  v3 = &this[270 * a2];
  v4 = v3[11];
  (*(void (__thiscall **)(_DWORD *))(v4 + 4))(v3 + 11);
  if ( !v3[275] )
    return 0;
  v6 = (*(int (__thiscall **)(_DWORD *))(v4 + 20))(v3 + 11);
  v7 = v6;
  if ( v6 <= 0 )
  {
    dword_10AA28D8 = 0;
    v3[275] = 0;
    v8 = (void (__cdecl *)(_DWORD *, int))this[5];
    if ( v8 )
    {
      if ( v7 >= 0 )
      {
        v8(this, a2);
        return 1;
      }
      v8(this, -1);
    }
  }
  return 1;
}
// 10AA28D8: using guessed type int dword_10AA28D8;
