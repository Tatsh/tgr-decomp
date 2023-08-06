#include "../../types-n64.h"
//----- (802060DC) --------------------------------------------------------
int sub_802060DC()
{
  int *v0; // $s0
  int v1; // $s3
  int *v2; // $a3
  int *v3; // $a2
  float *v4; // $s2
  int *v5; // $s1
  int result; // $v0
  float *v7; // $a0
  int *v8; // $v1
  float v9; // $f6
  int v10; // $t1
  int v11; // $t3
  float v12; // $f8
  int v13; // $t7

  v0 = dword_8031B760;
  v1 = 0;
  v2 = dword_80315DA0;
  v3 = dword_80315DA8;
  v4 = (float *)dword_80315D68;
  v5 = dword_80315D60;
  do
  {
    result = 0;
    v7 = (float *)&dword_80315D78[5 * v1];
    v8 = &dword_8031B760[2084 * v1];
    do
    {
      v9 = *v7;
      ++result;
      ++v8;
      ++v7;
      *((float *)v8 + 992) = v9;
    }
    while ( result < 3 );
    v10 = *v3;
    v11 = *v2;
    v12 = *v4;
    v13 = *v5;
    ++v1;
    v0 += 2084;
    ++v5;
    ++v4;
    ++v3;
    ++v2;
    *(v0 - 1094) = v10;
    *(v0 - 1085) = v11;
    *((float *)v0 - 1084) = v12;
    *(v0 - 1081) = v13;
  }
  while ( v1 < 1 );
  return result;
}
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 80270790: using guessed type int dword_80270790;
// 80315D60: using guessed type int dword_80315D60[2];
// 80315D68: using guessed type int dword_80315D68[2];
// 80315D78: using guessed type int dword_80315D78[10];
// 80315DA0: using guessed type int dword_80315DA0[2];
// 80315DA8: using guessed type int dword_80315DA8[2];
// 8031B760: using guessed type int dword_8031B760[512];
