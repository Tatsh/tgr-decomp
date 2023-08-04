#include "../../types-win32.h"
//----- (1006EC80) --------------------------------------------------------
int __cdecl sub_1006EC80(int a1, int a2)
{
  void *v2; // ecx
  void *v4; // ecx
  const void *v5; // ebp
  void *v6; // ecx
  double v7; // st7
  void *v8; // ecx
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // rtt
  int result; // eax
  float v15; // [esp+10h] [ebp-4Ch] BYREF
  float v16; // [esp+14h] [ebp-48h]
  float v17; // [esp+18h] [ebp-44h]
  float v18[14]; // [esp+1Ch] [ebp-40h] BYREF
  float v19; // [esp+54h] [ebp-8h]
  float v20; // [esp+64h] [ebp+8h]
  float v21; // [esp+64h] [ebp+8h]
  float v22; // [esp+64h] [ebp+8h]

  dword_11754E38 = 0;
  dword_117554E4 = (int)&unk_11754E50;
  dword_11755490 = 0;
  dword_11755494 = 0;
  dword_11755498 = 0;
  dword_11754E40 = 0;
  dword_11754E44 = 0;
  dword_11754E48 = 0;
  dword_1175549C = 0;
  dword_11754E3C = 0;
  debugPrint(v2);
  v17 = 0.1;
  v16 = 0.1;
  v15 = 0.1;
  sub_10074B70((float *)(a2 + 188), (int)v18, (int)&v15);
  sub_1006DB20(a2, v18);
  debugPrint(v4);
  v20 = 0.033333335;
  v5 = (const void *)(a2 + 344);
  v15 = 1.0 / *(float *)(a2 + 476);
  v16 = 1.0 / *(float *)(a2 + 480);
  v17 = 1.0 / *(float *)(a2 + 484);
  do
  {
    if ( sub_1006DDC0(a2) )
      debugPrint(v6);
    sub_1006FFD0();
    sub_100745F0(a2 + 344, a2 + 276, 0.0083333338);
    sub_10074450((float *)(a2 + 188), (float *)(a2 + 344));
    sub_10074B70((float *)(a2 + 188), (int)v18, (int)&v15);
    v19 = v19 - *(float *)(a2 + 488);
    if ( sub_1006E760(a2, v18) )
    {
      sub_100742D0((float *)(a2 + 344));
      sub_10074450((float *)(a2 + 188), (float *)(a2 + 344));
    }
    v7 = v20 - 0.0083333338;
    qmemcpy((void *)(a2 + 276), v5, 0x44u);
    v20 = v7;
  }
  while ( v7 > 0.0020000001 );
  sub_10074450((float *)(a2 + 188), (float *)(a2 + 344));
  debugPrint(v8);
  v9 = *(float *)(a2 + 228);
  qmemcpy((void *)(a2 + 276), v5, 0x44u);
  if ( *(void (__cdecl **)(int))(a1 + 3848) == sub_10065620 )
  {
    if ( v9 >= 0.5 )
    {
      *(_DWORD *)(a2 + 504) = 35;
      goto LABEL_18;
    }
    if ( *(int *)(a2 + 504) < 0 )
    {
      *(_DWORD *)(a2 + 504) = -1;
      --*(_DWORD *)(a2 + 504);
      goto LABEL_18;
    }
LABEL_16:
    --*(_DWORD *)(a2 + 504);
    goto LABEL_18;
  }
  if ( v9 >= 0.5 )
  {
    *(_DWORD *)(a2 + 504) = 120;
    goto LABEL_18;
  }
  if ( *(int *)(a2 + 504) < 0 )
    *(_DWORD *)(a2 + 504) = -1;
  v10 = *(float *)(a2 + 240) - *(float *)(a1 + 10932);
  v11 = *(float *)(a2 + 236) - *(float *)(a1 + 10928);
  v12 = *(float *)(a2 + 244) - *(float *)(a1 + 10936);
  v21 = v11;
  v13 = v11 * v21;
  v22 = v12;
  if ( v13 + v10 * v10 + v12 * v22 < 1.0 )
    goto LABEL_16;
LABEL_18:
  *(_DWORD *)(a1 + 10928) = *(_DWORD *)(a2 + 236);
  result = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 10932) = result;
  *(_DWORD *)(a1 + 10936) = *(_DWORD *)(a2 + 244);
  return result;
}
// 1006ECDE: variable 'v2' is possibly undefined
// 1006ED3A: variable 'v4' is possibly undefined
// 1006ED92: variable 'v6' is possibly undefined
// 1006EE55: variable 'v8' is possibly undefined
// 11754E38: using guessed type int dword_11754E38;
// 11754E40: using guessed type int dword_11754E40;
// 11754E44: using guessed type int dword_11754E44;
// 11754E48: using guessed type int dword_11754E48;
// 11755490: using guessed type int dword_11755490;
// 11755494: using guessed type int dword_11755494;
// 11755498: using guessed type int dword_11755498;
// 1175549C: using guessed type int dword_1175549C;
// 117554E4: using guessed type int dword_117554E4;
