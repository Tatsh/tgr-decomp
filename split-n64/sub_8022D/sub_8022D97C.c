#include "../../types-n64.h"
//----- (8022D97C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8022D97C()
{
  unsigned int v0; // $t4
  int v1; // $fp
  int v2; // $s7
  int v3; // $s4
  int *v4; // $s6
  int v5; // $t3
  int v6; // $t6
  int *v7; // $t0
  bool v8; // dc
  int v9; // $v1
  int *v10; // $t0
  int v11; // $s5
  unsigned int v12; // $t0
  unsigned int v13; // $a2
  int v14; // $t7
  int v15; // $fp
  int v16; // $s7
  int result; // $v0
  int v18; // $s4
  int *v19; // $s6
  int v20; // $t3
  int v21; // $t9
  int *v22; // $t0
  int *v23; // $t0

  dword_8028A858 = 8;
  MEMORY[0] = -419430400;
  MEMORY[4] = 0;
  sub_80219A78(0, 0, 320, 240);
  dword_8028A858 = 8;
  MEMORY[0] = -15728321;
  v0 = 0;
  MEMORY[4] = -977305704;
  v1 = 0;
  v2 = 0;
  do
  {
    v3 = dword_803519B0[v2 + 3];
    ++v2;
    v4 = &dword_803501B0[v1];
    v5 = 1;
    if ( v3 >= 2 )
    {
      v6 = (v3 - 1) & 3;
      if ( v6 )
      {
        v7 = v4 + 2;
        do
        {
          ++v5;
          if ( v0 < v7[1] )
            v0 = v7[1];
          v7 += 2;
        }
        while ( v6 + 1 != v5 );
        v8 = v5 == v3;
      }
      else
      {
        v8 = 0;
      }
      v9 = 2 * v5;
      if ( !v8 )
      {
        v10 = &v4[v9];
        do
        {
          v9 += 8;
          if ( v0 < v10[1] )
            v0 = v10[1];
          if ( v0 < v10[3] )
            v0 = v10[3];
          if ( v0 < v10[5] )
            v0 = v10[5];
          if ( v0 < v10[7] )
            v0 = v10[7];
          v10 += 8;
        }
        while ( v9 != 2 * v3 );
      }
    }
    v1 += 512;
  }
  while ( v2 < 3 );
  v11 = 0;
  if ( v0 >= 0x517C7DF )
  {
    dword_803519C8 = v0;
    dword_8028BDB0 = 30;
  }
  else
  {
    if ( v0 < 0x50BDC1D )
    {
      dword_803519C8 = 84655513;
      v0 = 84655513;
    }
    else
    {
      dword_803519C8 = v0;
    }
    dword_8028BDB0 = 30;
  }
  v12 = 0;
  dword_8028A858 = 8;
  MEMORY[4] = -1;
  MEMORY[0] = -150994944;
  v13 = 0;
  do
  {
    dword_8028A858 = 8;
    MEMORY[0] = (4 * (((unsigned __int16)(v13 / v0) + 16) & 0x3FF)) | 0xF6470000;
    v12 += 781250;
    v14 = 4 * ((v13 / v0 + 16) & 0x3FF);
    v13 += 162500000;
    MEMORY[4] = v14 | 0x46C000;
  }
  while ( v12 < v0 );
  v15 = 0;
  v16 = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -419430400;
  do
  {
    result = 1;
    v18 = *(_DWORD *)(v16 - 2144010228 + 6576);
    v19 = &dword_8034E9B0[v15 + 1536];
    v20 = 1;
    if ( v18 >= 2 )
    {
      v21 = (v18 - 1) & 3;
      if ( !v21 )
        goto LABEL_38;
      v22 = v19 + 2;
      do
      {
        ++v20;
        v22 += 2;
        result = 0;
        dword_8028A858 = 8;
        MEMORY[4] = 0;
        MEMORY[0] = -419430400;
      }
      while ( v21 + 1 != v20 );
      if ( v20 != v18 )
      {
LABEL_38:
        v23 = &v19[2 * v20];
        do
        {
          v20 += 4;
          v23 += 8;
          result = 0;
          dword_8028A858 = 8;
          MEMORY[4] = 0;
          MEMORY[0] = -419430400;
        }
        while ( v20 != v18 );
      }
    }
    ++v11;
    v15 += 512;
    v16 += 4;
  }
  while ( v11 != 3 );
  dword_8028A858 = 8;
  MEMORY[0] = -1191181539;
  MEMORY[4] = 0;
  return result;
}
// 8022DBF0: write access to const memory at 8028BDB0 has been detected
// 8022DC14: write access to const memory at 803519C8 has been detected
// 8022DC28: write access to const memory at 8028BDB0 has been detected
// 8022DC2C: write access to const memory at 803519C8 has been detected
// 8022DC40: write access to const memory at 8028BDB0 has been detected
// 8022DC44: write access to const memory at 803519C8 has been detected
// 8022DC54: write access to const memory at 8028BDB0 has been detected
// 8022D9B8: write access to const memory at 8028A858 has been detected
// 8022DA04: write access to const memory at 8028A858 has been detected
// 8022DA28: write access to const memory at 8028A858 has been detected
// 8022DA50: write access to const memory at 8028A858 has been detected
// 8022E46C: write access to const memory at 8028A858 has been detected
// 8022E488: write access to const memory at 8028A858 has been detected
// 8022E434: write access to const memory at 8028A858 has been detected
// 8022E324: write access to const memory at 8028A858 has been detected
// 8022E33C: write access to const memory at 8028A858 has been detected
// 8022E35C: write access to const memory at 8028A858 has been detected
// 8022E214: write access to const memory at 8028A858 has been detected
// 8022E22C: write access to const memory at 8028A858 has been detected
// 8022E24C: write access to const memory at 8028A858 has been detected
// 8022E104: write access to const memory at 8028A858 has been detected
// 8022E11C: write access to const memory at 8028A858 has been detected
// 8022E13C: write access to const memory at 8028A858 has been detected
// 8022E00C: write access to const memory at 8028A858 has been detected
// 8022E02C: write access to const memory at 8028A858 has been detected
// 8022DFD8: write access to const memory at 8028A858 has been detected
// 8022DEE0: write access to const memory at 8028A858 has been detected
// 8022DF00: write access to const memory at 8028A858 has been detected
// 8022DE50: write access to const memory at 8028A858 has been detected
// 8022DDAC: write access to const memory at 8028A858 has been detected
// 8022DCA4: write access to const memory at 8028A858 has been detected
// 8022DCD0: write access to const memory at 8028A858 has been detected
// 8022DD54: write access to const memory at 8028A858 has been detected
// 8022DD6C: write access to const memory at 8028A858 has been detected
// 8022DC64: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022DD74: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022DE24: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022DF70: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022DFC8: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E09C: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E0F4: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E1AC: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E204: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E2BC: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E314: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E3CC: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8022E424: conditional instruction was optimized away because of '$t4.4 in (==50BBD99|>=50BDC1Du)'
// 8028A850: using guessed type int dword_8028A850;
// 8028A858: using guessed type int dword_8028A858;
// 8028A85C: using guessed type int dword_8028A85C;
// 8028BDA0: using guessed type int dword_8028BDA0;
// 8028BDB0: using guessed type int dword_8028BDB0;
// 8031AA28: using guessed type int dword_8031AA28;
// 8034E9B0: using guessed type int dword_8034E9B0[512];
// 803501B0: using guessed type int[512];
// 803519B0: using guessed type int dword_803519B0[6];
// 803519C8: using guessed type int dword_803519C8;
