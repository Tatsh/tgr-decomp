#include "../../types-n64.h"
//----- (80208CF0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80208CF0()
{
  int v0; // $s5
  float i; // $f0
  int v2; // $s0
  char v3; // $s4
  int v4; // $s6
  int v5; // $s1
  int v6; // $v0
  char **v7; // $s3
  BOOL v8; // $at
  char **v9; // $s3
  int v10; // $fp
  int v11; // $s0
  int v12; // $s4
  char **v14; // [sp+70h] [-40h]
  int v15; // [sp+84h] [-2Ch]

  v0 = 95;
  flt_80271D5C = 0.0 + 0.0;
  if ( (float)(0.0 + 0.0) > 0.75 )
  {
    for ( i = (float)(0.0 + 0.0) - 0.75; i > 0.75; i = i - 0.75 )
      ;
    flt_80271D5C = i;
  }
  v15 = MEMORY[0xC74C1D3D];
  v2 = MEMORY[0xC74C1D3C];
  v3 = MEMORY[0xC74C1D3B];
  sub_8022F4F8();
  sub_8022F504();
  sub_8022F5D0(20);
  v14 = &off_8028B944[7 * v2];
  sub_80260DD4((int)dword_80315F38, "%%ry%s:", v14[1]);
  formatter((const char *)dword_80315F38, 160, 75);
  v4 = 0;
  v5 = 0;
  v6 = (int)v14[2];
  if ( v6 > 0 )
  {
    v7 = &off_8028B944[7 * v2];
    do
    {
      ++v5;
      if ( *((unsigned __int8 *)v7 + 20) >= 5u )
      {
        if ( (v3 & 1) == 0 )
        {
          v5 = 0;
          v4 = 15;
          goto LABEL_17;
        }
        v8 = v5 < v6;
      }
      else
      {
        if ( (v3 & 1) != 0 )
        {
          v5 = 0;
          v4 = 15;
          goto LABEL_17;
        }
        v8 = v5 < v6;
      }
      v7 = (char **)((char *)v7 + 2);
    }
    while ( v8 );
    v5 = 0;
  }
LABEL_17:
  sub_8022F5D0(8);
  sub_8022F520();
  formatter("Race Record", v4 + 230, 86);
  formatter("Lap Record", v4 + 282, 86);
  sub_8022F5D0(10);
  if ( (int)v14[2] > 0 )
  {
    v9 = &off_8028B944[7 * v2];
    v10 = v3 & 1;
    do
    {
      v11 = *((unsigned __int8 *)v9 + 20);
      if ( v10 )
      {
        if ( *((unsigned __int8 *)v9 + 20) < 5u )
          v11 += 5;
        else
          v11 -= 5;
      }
      sub_8022F514();
      if ( v5 == v15 && 0.0 < 0.40000001 )
        sub_8022F530(255, 240, 80, 255, 240, 80);
      else
        sub_8022F530(255, 255, 255, 255, 255, 255);
      v12 = v5 + 1;
      sub_80260DD4((int)dword_80315F38, "Race %d", v5 + 1);
      formatter((const char *)dword_80315F38, 40 - v4, v0);
      sub_80260DD4(
        (int)dword_80315F38,
        "%s/%s",
        **(const char ***)(4 * v11 - 2144927744 + 7452),
        **(const char ***)(4 * *((unsigned __int8 *)v9 + 21) - 2144927744 + 8868));
      formatter((const char *)dword_80315F38, 80 - v4 + 4, v0);
      sub_8022F520();
      if ( 0.0 == *(float *)(4 * v11 - 951313096 + 232) )
        sub_80260DD4((int)dword_80315F38, "--    ");
      else
        sub_8020CF44((int)dword_80315F38);
      formatter((const char *)dword_80315F38, v4 + 229, v0);
      if ( 0.0 == *(float *)(4 * v11 - 951313096 + 140) )
        sub_80260DD4((int)dword_80315F38, "--    ");
      else
        sub_8020CF44((int)dword_80315F38);
      formatter((const char *)dword_80315F38, v4 + 280, v0);
      ++v5;
      v9 = (char **)((char *)v9 + 2);
      v0 += 10;
    }
    while ( v12 < (int)v14[2] );
  }
  sub_8022F530(255, 255, 255, 255, 255, 255);
  sub_8022F504();
  formatter("Cars For", 160, 148);
  formatter("This Season:", 160, 158);
  dword_8028AA78 = 0;
  dword_8028AA80 = 0;
  dword_8028AA8C = 0;
  dword_8028AA84 = 0;
  sub_802182A8();
  sub_80218D5C();
  dword_8031B2D8 = 0;
  dword_8031B2EC = 1;
  sub_8020C6D0(0, 0, 0, 0.0, 105, 200, 150, 0.0, COERCE_FLOAT(1), 0, 0, 0.0, 1.5707964);
  sub_8020C6D0(0, 0, 1, COERCE_FLOAT(120), 105, 200, 150, 0.0, COERCE_FLOAT(1), 1, 1, 0.0, 0.0);
  return sub_80219A78(0, 0, 320, 240);
}
// 80208D4C: write access to const memory at 80271D5C has been detected
// 80208D64: write access to const memory at 80271D5C has been detected
// 80209254: write access to const memory at 8028AA78 has been detected
// 8020925C: write access to const memory at 8028AA80 has been detected
// 80209264: write access to const memory at 8028AA8C has been detected
// 80209274: write access to const memory at 8028AA84 has been detected
// 8020928C: write access to const memory at 8031B2D8 has been detected
// 80209290: write access to const memory at 8031B2EC has been detected
// 80271D5C: using guessed type float flt_80271D5C;
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028B944: using guessed type char *off_8028B944[2];
// 80315F38: using guessed type int dword_80315F38[20];
// 8031B2D8: using guessed type int dword_8031B2D8;
// 8031B2EC: using guessed type int dword_8031B2EC;
