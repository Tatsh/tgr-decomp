#include "../types-n64.h"
//----- (80242640) --------------------------------------------------------
int __fastcall CalculateChecksum(int seed, unsigned __int8 *buff, unsigned int elementSize)
{
  unsigned int sum2; // $v1
  unsigned int sum1; // $a3
  BOOL i; // $at
  signed int v7; // $v0
  int v8; // $v1
  int v9; // $a3
  int v10; // $v1
  int v11; // $a3
  int v12; // $v1
  int v13; // $a3
  int v14; // $v1
  int v15; // $a3
  int v16; // $v1
  int v17; // $a3
  int v18; // $v1
  int v19; // $a3
  int v20; // $v1
  int v21; // $a3
  int v22; // $v1
  int v23; // $a3
  int v24; // $v1
  int v25; // $a3
  int v26; // $v1
  int v27; // $a3
  int v28; // $v1
  int v29; // $a3
  int v30; // $v1
  int v31; // $a3
  int v32; // $v1
  int v33; // $a3
  int v34; // $v1
  int v35; // $a3
  int v36; // $v1
  int v37; // $a3
  int v38; // $a0
  int v39; // $t7
  int v40; // $v1
  int v41; // $a3
  int v42; // $v1
  int v43; // $a3
  int v44; // $v1
  int v45; // $a3

  sum2 = (unsigned __int16)seed;
  sum1 = HIWORD(seed);
  if ( !buff )
    return 1;
  if ( elementSize )
  {
    for ( i = elementSize < 0x15B0; ; i = elementSize < 0x15B0 )
    {
      v7 = 0x15B0;
      if ( i )
        v7 = elementSize;
      for ( elementSize -= v7; v7 >= 16; buff += 16 )
      {
        v8 = sum2 + *buff;
        v9 = sum1 + v8;
        v10 = v8 + buff[1];
        v11 = v9 + v10;
        v12 = v10 + buff[2];
        v13 = v11 + v12;
        v14 = v12 + buff[3];
        v15 = v13 + v14;
        v16 = v14 + buff[4];
        v17 = v15 + v16;
        v18 = v16 + buff[5];
        v19 = v17 + v18;
        v20 = v18 + buff[6];
        v21 = v19 + v20;
        v22 = v20 + buff[7];
        v23 = v21 + v22;
        v24 = v22 + buff[8];
        v25 = v23 + v24;
        v26 = v24 + buff[9];
        v27 = v25 + v26;
        v28 = v26 + buff[10];
        v29 = v27 + v28;
        v30 = v28 + buff[11];
        v31 = v29 + v30;
        v32 = v30 + buff[12];
        v33 = v31 + v32;
        v34 = v32 + buff[13];
        v35 = v33 + v34;
        v36 = v34 + buff[14];
        v37 = v35 + v36;
        v7 -= 16;
        sum2 = v36 + buff[15];
        sum1 = v37 + sum2;
      }
      if ( v7 )
      {
        if ( (v7 & 3) == 0 )
          goto LABEL_20;
        v38 = v7 - (v7 & 3);
        do
        {
          v39 = *buff;
          --v7;
          ++buff;
          sum2 += v39;
          sum1 += sum2;
        }
        while ( v38 != v7 );
        if ( v7 )
        {
LABEL_20:
          do
          {
            v40 = sum2 + *buff;
            v41 = sum1 + v40;
            v42 = v40 + buff[1];
            v43 = v41 + v42;
            v44 = v42 + buff[2];
            v45 = v43 + v44;
            v7 -= 4;
            sum2 = v44 + buff[3];
            sum1 = v45 + sum2;
            buff += 4;
          }
          while ( v7 );
        }
      }
      sum2 %= 0xFFF1u;
      sum1 %= 0xFFF1u;
      if ( !elementSize )
        break;
    }
  }
  return (sum1 << 16) | sum2;
}
