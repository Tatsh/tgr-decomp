#include "../../types-win32.h"
//----- (10028A10) --------------------------------------------------------
int __cdecl sub_10028A10(int a1, int *a2)
{
  int v2; // esi
  int *v3; // edi
  int result; // eax
  int v5; // ebp
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]
  _DWORD *v8; // [esp+1Ch] [ebp+8h]

  v2 = a1;
  v3 = a2;
  sub_10025350(
    (int)&unk_104D51D0,
    *(_DWORD *)(a1 + 676),
    *(_DWORD *)(a1 + 680),
    COERCE_FLOAT(&a2[*(_DWORD *)(a1 + 680) * *(_DWORD *)(a1 + 676)]),
    *(_DWORD *)(a1 + 676) / 2,
    *(_DWORD *)(a1 + 680) / 2);
  result = *(_DWORD *)(a1 + 680);
  v8 = &unk_104D51D0;
  v6 = 0;
  if ( result > 0 )
  {
    do
    {
      v5 = 0;
      if ( *(int *)(v2 + 676) > 0 )
      {
        do
        {
          v7 = *v3++;
          v2 = a1;
          *(v3 - 1) = v7 & 0xFF000000 | (*v8 * (unsigned int)(unsigned __int8)v7 / 0xF) | (((*v8
                                                                                           * (unsigned int)BYTE1(v7)
                                                                                           / 0xF) | ((*v8 * (unsigned int)BYTE2(v7) / 0xF) << 8)) << 8);
          ++v5;
          ++v8;
        }
        while ( v5 < *(_DWORD *)(a1 + 676) );
      }
      result = ++v6;
    }
    while ( v6 < *(_DWORD *)(v2 + 680) );
  }
  return result;
}
