#include "../../types-n64.h"
//----- (80265D90) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int osInitialize()
{
  int v0; // $v0
  unsigned int v1; // $t9
  __int64 v2; // $v1
  __int64 v3; // $v1
  int v5; // [sp+30h] [-8h] BYREF
  int v6; // [sp+34h] [-4h] BYREF

  v5 = 0;
  dword_8037F480 = 1;
  v0 = sub_8026BA00();
  sub_8026B9F0(v0 | 0x20000000);
  sub_8026BA10(16779264);
  while ( sub_8026BA20(532678652, &v6) )
    ;
  while ( sub_8026BA70(532678652, v6 | 8) )
    ;
  MEMORY[0x80000000] = *(_DWORD *)sub_8026ACC0;
  MEMORY[0x80000004] = loc_8026ACC4;
  MEMORY[0x80000008] = loc_8026ACC8;
  MEMORY[0x8000000C] = loc_8026ACCC;
  MEMORY[0x80000080] = *(_DWORD *)sub_8026ACC0;
  MEMORY[0x80000084] = loc_8026ACC4;
  MEMORY[0x80000088] = loc_8026ACC8;
  MEMORY[0x8000008C] = loc_8026ACCC;
  MEMORY[0x80000100] = *(_DWORD *)sub_8026ACC0;
  MEMORY[0x80000104] = loc_8026ACC4;
  MEMORY[0x80000108] = loc_8026ACC8;
  MEMORY[0x8000010C] = loc_8026ACCC;
  MEMORY[0x80000180] = *(_DWORD *)sub_8026ACC0;
  MEMORY[0x80000184] = loc_8026ACC4;
  MEMORY[0x80000188] = loc_8026ACC8;
  MEMORY[0x8000018C] = loc_8026ACCC;
  sub_8026B7D0(0x80000000, 400);
  sub_8026BAC0(0x80000000, 400);
  sub_8026BB40();
  sub_802663A0(4, &v5);
  v1 = v5 & 0xFFFFFFF0;
  v5 &= 0xFFFFFFF0;
  if ( v5 )
  {
    HIDWORD(qword_802A6140) = 0;
    LODWORD(qword_802A6140) = v1;
  }
  HIDWORD(v2) = sub_80266188();
  HIDWORD(v3) = sub_80266088(v2, 4LL);
  qword_802A6140 = v3;
  if ( !MEMORY[0x8000030C] )
    v3 = sub_8026BBA0(-2147482852, 64);
  if ( MEMORY[0x80000300] )
  {
    if ( MEMORY[0x80000300] == 2 )
      dword_802A6148 = 48628316;
    else
      dword_802A6148 = 48681812;
  }
  else
  {
    dword_802A6148 = 49656530;
  }
  return HIDWORD(v3);
}
// 80265DAC: write access to const memory at 8037F480 has been detected
// 80265F44: write access to const memory at 802A6140 has been detected
// 80265F48: write access to const memory at 802A6144 has been detected
// 80265F8C: write access to const memory at 802A6140 has been detected
// 80265F98: write access to const memory at 802A6144 has been detected
// 80265FCC: write access to const memory at 802A6148 has been detected
// 80265FF4: write access to const memory at 802A6148 has been detected
// 80266000: write access to const memory at 802A6148 has been detected
// 80265F7C: variable 'v2' is possibly undefined
// 80265F8C: variable 'v3' is possibly undefined
// 802A6140: using guessed type __int64 qword_802A6140;
// 802A6148: using guessed type int dword_802A6148;
// 8037F480: using guessed type int dword_8037F480;
