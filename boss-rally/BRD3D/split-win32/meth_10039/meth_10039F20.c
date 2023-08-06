#include "../../types-win32.h"
//----- (10039F20) --------------------------------------------------------
void __thiscall meth_10039F20(int this)
{
  int v2; // ebx
  unsigned __int8 v4; // c0
  unsigned __int8 v5; // c3
  int v6; // ecx
  char v7; // al
  int v8; // eax
  unsigned int v9; // edi
  __int16 v10; // cx
  __int16 v11; // dx
  float v12; // [esp+0h] [ebp-48h]
  int v13; // [esp+14h] [ebp-34h]
  int v14; // [esp+18h] [ebp-30h]
  float v15; // [esp+1Ch] [ebp-2Ch]
  float *v16; // [esp+20h] [ebp-28h]
  float v17; // [esp+24h] [ebp-24h]
  int v18; // [esp+28h] [ebp-20h]
  float v19; // [esp+2Ch] [ebp-1Ch]
  float v20; // [esp+30h] [ebp-18h]
  float v21; // [esp+34h] [ebp-14h]
  int v22[4]; // [esp+38h] [ebp-10h]

  if ( *(_BYTE *)(this + 877) && *(float *)(this + 4144) > 40.0 )
  {
    v2 = 0;
    v17 = *(float *)&dword_106C2CFC * 0.5 - *(float *)(this + 4144) * -0.00066006603;
    do
    {
      *(float *)(this + 4 * v2 + 4204) = (double)*(unsigned __int8 *)(this + 877) * 0.029999999 * v17
                                       + *(float *)(this + 4 * v2 + 4204);
      if ( !(v4 | v5) )
      {
        v22[0] = this + 2452;
        v22[1] = this + 1404;
        v22[2] = this + 880;
        v22[3] = this + 1928;
        v6 = v22[v2];
        *(_DWORD *)(this + 4 * v2 + 4204) = 0;
        if ( *(_DWORD *)(v6 + 436) )
        {
          v7 = *(_BYTE *)(v6 + 416);
          if ( v7 > 0 && v7 <= 3 )
          {
            v8 = (unsigned __int16)dword_10A99BA8;
            if ( (_WORD)dword_10A99BA8 )
            {
              v9 = 32 * (unsigned __int16)dword_10A99BA8;
              LOWORD(dword_10A99BA8) = word_10A99BD4[v9 / 2];
              if ( *(_BYTE *)(v6 + 416) == 3 )
              {
                v11 = dword_10A99BB4;
                LOWORD(dword_10A99BB4) = v8;
                word_10A99BD4[16 * v8] = v11;
              }
              else
              {
                v10 = dword_10A99BAC;
                LOWORD(dword_10A99BAC) = v8;
                word_10A99BD4[16 * v8] = v10;
              }
              sub_1003ACE0((int)&flt_10A99BC4[v9 / 4], this + 4132, 0.2);
              v13 = 1048576000;
              if ( v2 >= 2 )
                v13 = 0x40000000;
              sub_1003B020((int)&flt_10A99BC4[v9 / 4], this + 32, *(float *)&v13);
              if ( v2 < 2 )
              {
                v14 = -1090519040;
                if ( !v2 )
                  v14 = 1056964608;
                sub_1003B020((int)&flt_10A99BC4[v9 / 4], this + 16, *(float *)&v14);
              }
              sub_1003AF10(&flt_10A99BC4[v9 / 4], (float *)this);
              v15 = 1.0 - 50.0 / (*(float *)(this + 4144) - -50.0);
              sub_1003AD10((int)&flt_10A99BC4[v9 / 4], v15);
              sub_1003AEE0(&flt_10A99BB8[v9 / 4], (float *)((v2 << 6) + this + 112), (float *)this);
              flt_10A99BC0[v9 / 4] = flt_10A99BC0[v9 / 4] - *(float *)(this + 10644) * -0.5;
              v19 = flt_10A99BB8[v9 / 4];
              v20 = flt_10A99BB8[v9 / 4 + 1];
              v21 = flt_10A99BB8[v9 / 4 + 2];
              v16 = (float *)(this + 12 * v2 + 4220);
              if ( sub_1003B130(&flt_10A99BB8[v9 / 4], v16) < 256.0 )
              {
                v18 = (unsigned __int16)sub_1003BD50();
                v12 = (double)v18 * 0.000015259022 * ((double)v18 * 0.000015259022);
                sub_1003AFA0((int)&flt_10A99BB8[v9 / 4], (int)v16, (int)&flt_10A99BB8[v9 / 4], v12);
              }
              *v16 = v19;
              *(float *)(this + 12 * v2 + 4224) = v20;
              *(float *)(this + 12 * v2 + 4228) = v21;
              flt_10A99BD0[v9 / 4] = 0.40000001;
              byte_10A99BD6[v9] = 25;
              byte_10A99BD7[v9] = (__int64)(16.0 - v15 * -167.3);
            }
          }
        }
      }
      ++v2;
    }
    while ( v2 < 4 );
  }
}
// 10039FA0: variable 'v4' is possibly undefined
// 10039FA0: variable 'v5' is possibly undefined
// 106C2CFC: using guessed type int dword_106C2CFC;
// 10A99BA8: using guessed type int dword_10A99BA8;
// 10A99BAC: using guessed type int dword_10A99BAC;
// 10A99BB4: using guessed type int dword_10A99BB4;
// 10A99BB8: using guessed type float flt_10A99BB8[];
// 10A99BC0: using guessed type float flt_10A99BC0[];
// 10A99BC4: using guessed type float flt_10A99BC4[];
// 10A99BD0: using guessed type float flt_10A99BD0[];
// 10A99BD4: using guessed type __int16 word_10A99BD4[];
