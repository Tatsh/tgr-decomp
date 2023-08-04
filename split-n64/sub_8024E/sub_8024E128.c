#include "../../types-n64.h"
//----- (8024E128) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8024E128()
{
  int v0; // $s1
  int *v1; // $s0
  int result; // $v0
  int v3; // [sp+1A0h] [-58h] BYREF
  int v4; // [sp+1A4h] [-54h]
  int v5; // [sp+1A8h] [-50h]
  int v6; // [sp+1ACh] [-4Ch]
  int v7; // [sp+1B0h] [-48h]
  int v8; // [sp+1B4h] [-44h]
  int v9; // [sp+1B8h] [-40h]
  int v10; // [sp+1BCh] [-3Ch]
  int v11; // [sp+1E0h] [-18h]

  sub_80246F90(180, 130, 280, 208, 3, 0, 0);
  sub_8022F5D0(16);
  sub_8022F504();
  sub_8022F4F8();
  formatter("%rySELECT OPTION", 159, 83);
  v3 = 240;
  v7 = 336;
  v4 = 184;
  v8 = 184;
  v5 = 64;
  v6 = 64;
  v10 = 64;
  v9 = 64;
  v0 = 0;
  v1 = &v3;
  do
  {
    sub_80246BCC();
    if ( v0 )
      ++v0;
    else
      v0 = 1;
    v1 += 4;
  }
  while ( v0 < 2 );
  sub_802465F0((int)&dword_8028D2C0, 160, 0, 16, 16, v3 + 7, v4 + 10, 48, 48);
  sub_802465F0((int)&dword_8028D2C0, 160, 0, 16, 16, v7 + 9, v8 + 12, 48, 48);
  sub_802465F0((int)&dword_8028D2C0, 160, 0, 16, 16, v7 + 5, v8 + 8, 48, 48);
  sub_80246F90(198, v6 + v4 + 17, 244, 30, 1, 1, 1);
  sub_8022F5D0(11);
  sub_8022F530(255, 255, 255, 255, 245, 0);
  formatter("NORMAL TEXT", 158, (v10 + v4 + 38) >> 1);
  sub_8022F5D0(10);
  sub_8022F514();
  v11 = 328;
  formatter("%wwSELECT", 122, 162);
  formatter("%wwCANCEL", (unsigned int)(v11 + 30) >> 1, 162);
  sub_80245604((int)&dword_8028D0B0, 214, 306);
  sub_80245604((int)&dword_8028D0E0, v11, 306);
  sub_80255ADC((int)dword_8036A8E0);
  result = sub_80255910(dword_8036A8E0, 32);
  byte_8028DBE0 = 0;
  byte_8028DBE4 = 0;
  return result;
}
// 8024E1F4: write access to const memory at 8028DB54 has been detected
// 8024E200: write access to const memory at 8028DBE4 has been detected
// 8024E650: write access to const memory at 8028DBB8 has been detected
// 8024E954: write access to const memory at 8028DB5C has been detected
// 8024E96C: write access to const memory at 8028DB5C has been detected
// 8024E970: write access to const memory at 8028DB5C has been detected
// 8024E9E4: write access to const memory at 8028DB5C has been detected
// 8024EA00: write access to const memory at 8028DB5C has been detected
// 8024EA04: write access to const memory at 8028DB5C has been detected
// 8024EA9C: write access to const memory at 8028DB5C has been detected
// 8024EADC: write access to const memory at 8028DB5C has been detected
// 8024EB08: write access to const memory at 8028CF2C has been detected
// 8024EB14: write access to const memory at 8028DBE4 has been detected
// 8024EB9C: write access to const memory at 8028DB5C has been detected
// 8024EBB0: write access to const memory at 8028DBE4 has been detected
// 8024EBF0: write access to const memory at 8028DBE4 has been detected
// 8024EC14: write access to const memory at 8028DBE4 has been detected
// 8024E1EC: write access to const memory at 8028DBB8 has been detected
// 8024EB18: write access to const memory at 8028DBE0 has been detected
// 8024EBF8: write access to const memory at 8028DBE0 has been detected
// 8024EC10: write access to const memory at 8028DBE0 has been detected
// 8028CF2C: using guessed type char byte_8028CF2C;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028D2C0: using guessed type int dword_8028D2C0;
// 8028DB54: using guessed type char byte_8028DB54;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB5C: using guessed type char byte_8028DB5C;
// 8028DBB8: using guessed type char byte_8028DBB8;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBE0: using guessed type char byte_8028DBE0;
// 8028DBE4: using guessed type char byte_8028DBE4;
// 80369BE4: using guessed type int dword_80369BE4;
// 80369BE8: using guessed type int dword_80369BE8[60];
// 8036A8E0: using guessed type int dword_8036A8E0[];
