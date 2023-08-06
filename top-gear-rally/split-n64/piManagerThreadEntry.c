#include "../types-n64.h"
//----- (8026C990) --------------------------------------------------------
void __fastcall __noreturn piManagerThreadEntry(void *a1)
{
  int v1; // $t9
  int v2; // $t1
  int v3; // $t3
  int v4; // $t0
  int v5; // [sp+24h] [-24h] BYREF
  int v6; // [sp+28h] [-20h]
  _DWORD *v7; // [sp+2Ch] [-1Ch]
  BOOL v8; // [sp+30h] [-18h]
  OSMesgQueue **v9; // [sp+34h] [-14h]
  int v10; // [sp+38h] [-10h]
  int v11; // [sp+3Ch] [-Ch] BYREF
  int v12; // [sp+40h] [-8h] BYREF
  int v13; // [sp+44h] [-4h] BYREF

  v8 = 0;
  v13 = 0;
  v10 = 0;
  v9 = (OSMesgQueue **)a1;
  while ( 1 )
  {
    while ( 1 )
    {
      sub_802642E0(v9[2], &v13, 1);
      v1 = *(_DWORD *)(v13 + 20);
      if ( !v1 )
        break;
      if ( *(_BYTE *)(v1 + 4) != 2 )
        break;
      v2 = *(_DWORD *)(v1 + 20);
      if ( v2 )
      {
        if ( v2 != 1 )
          break;
      }
      v3 = *(_DWORD *)(v13 + 20);
      v6 = v3 + 20;
      v7 = (_DWORD *)(v3 + 20 + 36 * *(unsigned __int16 *)(v3 + 26) + 24);
      *(_DWORD *)(v3 + 28) = -1;
      if ( *(_WORD *)(v6 + 4) != 3 )
        v7[1] -= v7[3];
      v8 = *(_WORD *)(v6 + 4) == 2 && !*(_DWORD *)(*(_DWORD *)(v13 + 20) + 20);
      sub_802642E0(v9[4], &v11, 1);
      sub_8026E6D0(1049601);
      sub_8026E730(*(_DWORD *)(v13 + 20), 83887376, *(_DWORD *)(v6 + 16) | 0x80000000);
      while ( 1 )
      {
        sub_802642E0(v9[3], &v12, 1);
        v4 = *(_DWORD *)(v13 + 20);
        v6 = v4 + 20;
        v7 = (_DWORD *)(v4 + 20 + 36 * *(unsigned __int16 *)(v4 + 26) + 24);
        if ( *v7 == 29 )
        {
          sub_8026E730(*(_DWORD *)(v13 + 20), 83887376, *(_DWORD *)(v4 + 36) | 0x10000000);
          sub_8026E730(*(_DWORD *)(v13 + 20), 83887376, *(_DWORD *)(v6 + 16));
          sub_8026E780(*(_DWORD *)(v13 + 20), 83887368, &v5);
          if ( (v5 & 0x2000000) != 0 )
            sub_8026E730(*(_DWORD *)(v13 + 20), 83887376, *(_DWORD *)(v6 + 16) | 0x1000000);
          *v7 = 4;
          MEMORY[0xA4600010] = 2;
          sub_8026E7D0(1051649);
        }
        sub_802654B0(*(void **)(v13 + 4), v13, 0);
        if ( !v8 || *(_DWORD *)(*(_DWORD *)(v13 + 20) + 44) )
          break;
        v8 = 0;
      }
      sub_802654B0(v9[4], 0, 0);
      if ( *(_WORD *)(*(_DWORD *)(v13 + 20) + 26) == 1 )
        sub_8026E820();
    }
    switch ( *(_WORD *)v13 )
    {
      case 0xA:
        sub_802654B0(*(void **)(v13 + 4), v13, 0);
        v10 = -1;
        break;
      case 0xB:
        sub_802642E0(v9[4], &v11, 1);
        v10 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v9[5])(
                0,
                *(_DWORD *)(v13 + 12),
                *(_DWORD *)(v13 + 8),
                *(_DWORD *)(v13 + 16));
        break;
      case 0xC:
        sub_802642E0(v9[4], &v11, 1);
        v10 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))v9[5])(
                1,
                *(_DWORD *)(v13 + 12),
                *(_DWORD *)(v13 + 8),
                *(_DWORD *)(v13 + 16));
        break;
      case 0xF:
        sub_802642E0(v9[4], &v11, 1);
        v10 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v9[6])(
                *(_DWORD *)(v13 + 20),
                0,
                *(_DWORD *)(v13 + 12),
                *(_DWORD *)(v13 + 8),
                *(_DWORD *)(v13 + 16));
        break;
      case 0x10:
        sub_802642E0(v9[4], &v11, 1);
        v10 = ((int (__fastcall *)(_DWORD, int, _DWORD, _DWORD, _DWORD))v9[6])(
                *(_DWORD *)(v13 + 20),
                1,
                *(_DWORD *)(v13 + 12),
                *(_DWORD *)(v13 + 8),
                *(_DWORD *)(v13 + 16));
        break;
      default:
        v10 = -1;
        break;
    }
    if ( !v10 )
    {
      sub_802642E0(v9[3], &v12, 1);
      sub_802654B0(*(void **)(v13 + 4), v13, 0);
      sub_802654B0(v9[4], 0, 0);
    }
  }
}
