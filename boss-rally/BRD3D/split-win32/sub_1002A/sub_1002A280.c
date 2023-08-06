#include "../../types-win32.h"
//----- (1002A280) --------------------------------------------------------
void __cdecl sub_1002A280(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // edx
  char v5; // al
  int v6; // [esp-30h] [ebp-34h]
  int v7; // [esp-2Ch] [ebp-30h]
  int v8; // [esp-28h] [ebp-2Ch]
  unsigned int v9; // [esp-24h] [ebp-28h]
  int v10; // [esp-20h] [ebp-24h]
  int v11; // [esp-1Ch] [ebp-20h]
  int v12; // [esp-18h] [ebp-1Ch]

  if ( *(_DWORD *)a1 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    if ( (v2 & 0x100000) == 0 )
    {
      if ( (v2 & 0xF000000) == 0x1000000 )
      {
        v3 = 0;
        v4 = 2;
      }
      else if ( (v2 & 0xF000000) == 0x4000000 )
      {
        v3 = 1;
        v4 = 4;
      }
      else
      {
        v3 = 2;
        v4 = 0;
      }
      v12 = (v2 >> 28) & 1;
      v11 = (v2 >> 29) & 1;
      v10 = (v2 >> 30) & 1;
      v9 = v2 >> 31;
      v8 = v4;
      v7 = v3;
      v6 = 1 << sub_10027C00(*(unsigned __int16 *)(a1 + 14));
      v5 = sub_10027C00(*(unsigned __int16 *)(a1 + 12));
      *(_DWORD *)a1 = dword_118AA0B0(
                        *(_DWORD *)a1,
                        *(_DWORD *)(a1 + 4),
                        1 << v5,
                        v6,
                        v7,
                        v8,
                        v9,
                        v10,
                        v11,
                        v12,
                        0,
                        0,
                        1,
                        a2);
    }
  }
}
// 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
