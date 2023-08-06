#include "../../types-win32.h"
//----- (10006BD0) --------------------------------------------------------
char __cdecl sub_10006BD0(int a1, float *a2)
{
  _BOOL2 v3; // di
  _BOOL2 v4; // bx
  _BOOL2 v5; // bx
  _BOOL2 v6; // bx
  BOOL v7; // ebp
  BOOL v8; // ebx
  BOOL v9; // ebp
  int v10; // ebx
  char v11; // bl
  char v12; // cl
  char v13; // al
  char v14; // bl
  char v15; // cl
  char v16; // al
  char v17; // bl
  char result; // al
  int v19; // [esp+18h] [ebp+8h]

  v3 = a2[35] != 0.0;
  *(_WORD *)a1 = v3 | sub_100065E0(*a2) & 0xFFFE;
  v4 = a2[36] != 0.0;
  *(_WORD *)(a1 + 2) = v4 | sub_100065E0(a2[1]) & 0xFFFE;
  v5 = a2[37] != 0.0;
  *(_WORD *)(a1 + 4) = v5 | sub_100065E0(a2[2]) & 0xFFFE;
  v19 = 1;
  v6 = a2[38] != 0.0;
  *(_WORD *)(a1 + 6) = v6 | sub_100065E0(a2[3]) & 0xFFFE;
  if ( a2[27] == 0.0 )
    v19 = 0;
  v8 = a2[39] != 0.0;
  v7 = a2[34] != 0.0;
  *(_DWORD *)(a1 + 8) = v19 | (2 * (v7 | (2 * v8))) | sub_100066E0(a2[4]) & 0xFFFFF8;
  v10 = a2[29] != 0.0;
  v9 = a2[28] != 0.0;
  *(_DWORD *)(a1 + 12) = v10 | (2 * v9) | sub_100066E0(a2[5]) & 0xFFFFFC;
  *(_WORD *)(a1 + 16) = sub_10006770(a2[6]);
  *(_BYTE *)(a1 + 18) = sub_100067F0(a2[13]);
  LOBYTE(v10) = sub_100065A0(a2[14]) & 0x3F;
  *(_BYTE *)(a1 + 19) = (sub_100066A0(a2[32]) << 6) | v10;
  *(_BYTE *)(a1 + 11) = sub_10006620(a2[15]);
  if ( a2[19] == 0.0 )
    v11 = 0;
  else
    v11 = 0x80;
  *(_BYTE *)(a1 + 20) = v11;
  v12 = v11 | (16 * ((__int64)a2[23] & 7));
  *(_BYTE *)(a1 + 20) = v12;
  if ( a2[20] == 0.0 )
    v13 = 0;
  else
    v13 = 8;
  *(_BYTE *)(a1 + 20) = v13 | v12;
  *(_BYTE *)(a1 + 20) = v13 | v12 | (__int64)a2[24] & 7;
  if ( a2[21] == 0.0 )
    v14 = 0;
  else
    v14 = 0x80;
  *(_BYTE *)(a1 + 21) = v14;
  v15 = v14 | (16 * ((__int64)a2[25] & 7));
  *(_BYTE *)(a1 + 21) = v15;
  if ( a2[22] == 0.0 )
    v16 = 0;
  else
    v16 = 8;
  *(_BYTE *)(a1 + 21) = v16 | v15;
  *(_BYTE *)(a1 + 21) = v16 | v15 | (__int64)a2[26] & 7;
  v17 = sub_10006660(a2[31]) & 0x3F;
  result = sub_100066A0(a2[33]) << 6;
  *(_BYTE *)(a1 + 15) = result | v17;
  return result;
}
