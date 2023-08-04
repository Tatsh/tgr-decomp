#include "../../types-n64.h"
//----- (8022D49C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8022D49C()
{
  int *v0; // $v1
  int *v1; // $a2
  int *v2; // $a1
  int *v3; // $a0
  int v4; // $a0
  int *v5; // $t0
  int *v6; // $t1
  int v7; // $v0
  int *v8; // $v1
  int v9; // $a1
  int v10; // $a2
  int result; // $v0
  int i; // $t7
  int *v13; // $v1
  int j; // $t9

  dword_8028BD98 = 0;
  dword_8028BD9C = 0;
  dword_8028BD90 = 63;
  dword_8028BD94 = 0;
  v0 = dword_8034E8B0;
  v1 = dword_8034E7B0;
  v2 = dword_8034E6B0;
  v3 = dword_8034E5B0;
  do
  {
    v0 += 4;
    v3[1] = 64;
    v2[1] = 0;
    v1[1] = 64;
    *(v0 - 3) = 0;
    v3[2] = 64;
    v2[2] = 0;
    v1[2] = 64;
    *(v0 - 2) = 0;
    v3[3] = 64;
    v2[3] = 0;
    v1[3] = 64;
    *(v0 - 1) = 0;
    v3 += 4;
    v2 += 4;
    v1 += 4;
    *(v3 - 4) = 64;
    *(v2 - 4) = 0;
    *(v1 - 4) = 64;
    *(v0 - 4) = 0;
  }
  while ( v0 != dword_8034E9B0 );
  sub_8022D104(-16090009.0, 0.00000022007212, 8.0585378e32, -0.00021185493);
  sub_8022D104(-16090009.0, 0.00000022007212, 6.9167659e-23, 0.0015283953);
  sub_8022D104(-16090009.0, 0.00000022007212, 8.6349621e-26, 7.4041362e-32);
  sub_8022D104(-16090009.0, 0.00000022007212, -0.0055145882, -4.0488996e30);
  sub_8022D104(2.4941138e-27, -6.4128118e-26, 8.0585378e32, -0.00021185493);
  sub_8022D104(2.4941138e-27, -6.4128118e-26, 6.9167659e-23, 0.0015283953);
  sub_8022D104(2.4941138e-27, -6.4128118e-26, 8.6349621e-26, 7.4041362e-32);
  sub_8022D104(2.4941138e-27, -6.4128118e-26, -0.0055145882, -4.0488996e30);
  sub_8022D104(8.0585378e32, -0.00021185493, 6.9167659e-23, 0.0015283953);
  sub_8022D104(6.9167659e-23, 0.0015283953, 8.6349621e-26, 7.4041362e-32);
  sub_8022D104(8.6349621e-26, 7.4041362e-32, -0.0055145882, -4.0488996e30);
  sub_8022D104(-0.0055145882, -4.0488996e30, 8.0585378e32, -0.00021185493);
  v4 = 0;
  v5 = dword_8034E7B0;
  v6 = dword_8034E8B0;
  do
  {
    v7 = 0;
    v8 = dword_8034E5B0;
    v9 = 0;
    v10 = 0;
    if ( v4 < -603418746 )
    {
LABEL_6:
      for ( i = v8[1]; ; i = v8[1] )
      {
        ++v9;
        ++v7;
        ++v8;
        if ( v4 < i )
          goto LABEL_6;
        if ( dword_8034E6B0[v7] >= v4 )
          break;
      }
      result = 0;
    }
    else
    {
      result = 0;
    }
    v13 = dword_8034E5B0;
    if ( v4 >= -603418746 )
    {
      ++v4;
    }
    else
    {
      for ( j = 1803999643; ; j = *(v13 - 1) )
      {
        while ( 1 )
        {
          --v10;
          --result;
          --v13;
          if ( v4 >= j )
            break;
          j = *(v13 - 1);
        }
        if ( dword_8034E6B0[result] >= v4 )
          break;
      }
      ++v4;
    }
    ++v5;
    ++v6;
    *(v5 - 1) = v9;
    *(v6 - 1) = v10;
  }
  while ( v4 <= 0 );
  return result * 4;
}
// 8022D49C: write access to const memory at 8028BD98 has been detected
// 8022D4A4: write access to const memory at 8028BD9C has been detected
// 8022D4B8: write access to const memory at 8028BD90 has been detected
// 8022D4DC: write access to const memory at 8028BD94 has been detected
// 8022D71C: conditional instruction was optimized away because of '$a0.4 in (==0|>=DC088F86u)'
// 8022D774: conditional instruction was optimized away because of '$a0.4 in (==0|>=DC088F86u)'
// 8028BD90: using guessed type int dword_8028BD90;
// 8028BD94: using guessed type int dword_8028BD94;
// 8028BD98: using guessed type int dword_8028BD98;
// 8028BD9C: using guessed type int dword_8028BD9C;
// 8031B1F0: using guessed type float flt_8031B1F0;
// 8031B1F4: using guessed type float flt_8031B1F4;
// 8031B1FC: using guessed type int dword_8031B1FC;
// 8031B208: using guessed type int dword_8031B208;
// 8031B214: using guessed type int dword_8031B214;
// 8031B220: using guessed type int dword_8031B220;
// 8031B22C: using guessed type float flt_8031B22C;
// 8031B230: using guessed type float flt_8031B230;
// 8034E570: using guessed type int dword_8034E570[16];
// 8034E5B0: using guessed type int dword_8034E5B0[64];
// 8034E6B0: using guessed type int dword_8034E6B0[64];
// 8034E7B0: using guessed type int dword_8034E7B0[64];
// 8034E8B0: using guessed type int dword_8034E8B0[64];
// 8034E9B0: using guessed type int dword_8034E9B0[512];
