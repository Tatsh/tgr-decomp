#include "../../types-win32.h"
//----- (10010DC0) --------------------------------------------------------
int __cdecl sub_10010DC0(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ebx
  signed int v5; // edi
  int v6; // ecx
  int v7; // esi
  char *v8; // eax
  float *v9; // esi
  int v10; // ebp
  __int64 v11; // rax
  unsigned __int8 *v12; // esi
  int v13; // edx
  int v14; // ebx
  int v15; // ecx
  int v16; // esi
  int v17; // ebp
  int v18; // edi
  __int16 *v19; // ebx
  __int16 v20; // ax
  int v21; // esi
  int v22; // ecx
  void *v23; // eax
  unsigned __int16 i; // ax
  int v25; // edx
  int v26; // eax
  int v27; // esi
  int *v28; // ebx
  int v29; // edi
  double v30; // st7
  int v31; // ecx
  int *v32; // edx
  int v33; // eax
  int *v34; // ebp
  int v35; // ecx
  int v36; // edi
  int v37; // edx
  unsigned __int16 *v38; // esi
  unsigned __int16 v39; // ax
  int v40; // edi
  __int16 v41; // si
  unsigned __int16 *v42; // edx
  unsigned __int16 v43; // cx
  double v44; // st7
  float v45; // ecx
  double v46; // st7
  int v47; // ebx
  __int64 v48; // rax
  double v49; // st7
  __int64 v50; // rax
  double v51; // st7
  int result; // eax
  int v53; // esi
  int v54; // edx
  int v55; // eax
  __int16 *v56; // ebp
  __int16 *v57; // ebx
  int v58; // eax
  __int16 *v59; // ecx
  _WORD *v60; // ecx
  _WORD *v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ebp
  int v65; // eax
  bool v66; // cc
  float v67; // [esp+0h] [ebp-48h]
  float v68; // [esp+4h] [ebp-44h]
  int v69; // [esp+34h] [ebp-14h] BYREF
  int v70; // [esp+38h] [ebp-10h]
  int v71[3]; // [esp+3Ch] [ebp-Ch] BYREF
  float v72; // [esp+54h] [ebp+Ch]
  int *v73; // [esp+54h] [ebp+Ch]

  v3 = dword_10A9BBCC;
  v4 = dword_10A9BBC4;
  v5 = 0;
  dword_102E5ED0 = 0;
  if ( dword_10A9BBCC <= dword_10A9BBC4 )
  {
    while ( 1 )
    {
      v6 = dword_10A9BBD0[v3];
      v7 = dword_10A9BCD0[v3];
      if ( v6 <= v7 )
        break;
LABEL_6:
      if ( ++v3 > v4 )
        goto LABEL_9;
    }
    v8 = (char *)&dword_10364000[v5] + 1;
    while ( v8 != (char *)&unk_10364301 )
    {
      *(v8 - 1) = v6;
      *v8 = v3;
      ++v5;
      v8 += 4;
      if ( ++v6 > v7 )
        goto LABEL_6;
    }
    dword_102E5ED0 = 1;
  }
LABEL_9:
  v9 = (float *)dword_106C6490;
  LOBYTE(dword_10364000[v5]) = -1;
  BYTE1(dword_10364000[v5]) = -1;
  v10 = (__int64)(v9[12] * 0.03125);
  if ( v10 == 64 )
    v10 = 63;
  v11 = (__int64)(v9[13] * 0.03125);
  if ( (_DWORD)v11 == 64 )
    LODWORD(v11) = 63;
  if ( v5 > 0 )
  {
    v12 = (unsigned __int8 *)dword_10364000 + 1;
    v69 = v5;
    do
    {
      v13 = *v12 - (_DWORD)v11;
      v14 = *(v12 - 1) - v10;
      v12 += 4;
      v4 = v13 * v13 + v14 * v14;
      v15 = v69;
      *(_WORD *)(v12 - 3) = v4;
      v69 = v15 - 1;
    }
    while ( v15 != 1 );
  }
  qsort(dword_10364000, v5, 4u, CompareFunction);
  sub_10060780(v4, byte_1038B4C0, g_TrackInstances, -1);
  v16 = 0;
  dword_103643A4 = 0;
  dword_10363FEC = -1;
  dword_102E5F24 = -1;
  dword_102E5EC0 = -1;
  v17 = (-3 - (__int64)(flt_106C0210 * -0.03125)) * (-3 - (__int64)(flt_106C0210 * -0.03125));
  if ( !dword_106909E0 || (v70 = 9, dword_106C6490 != (void *)(dword_106C2CF8 + 10248)) )
    v70 = 1;
  v18 = LOBYTE(dword_10364000[0]);
  if ( LOBYTE(dword_10364000[0]) != 255 )
  {
    v19 = (__int16 *)dword_10364000 + 1;
    while ( 1 )
    {
      v20 = *v19;
      if ( *v19 > 8 && dword_10363FEC == -1 )
        dword_10363FEC = v16;
      if ( v20 > v70 && dword_102E5EC0 == -1 )
        dword_102E5EC0 = v16;
      if ( v20 > v17 && dword_102E5F24 == -1 )
        dword_102E5F24 = v16;
      v21 = *((unsigned __int8 *)v19 - 1);
      if ( dword_10680618
        && byte_1038B4C0[(_DWORD)dword_10680618]
        && sub_1003A950(
             *(float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 48),
             *(float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 52)) )
      {
        v22 = dword_103643A4;
        v23 = dword_10680618;
        word_10362F28[dword_103643A4] = (__int16)dword_10680618;
        dword_103643A4 = v22 + 1;
        byte_1038B4C0[(_DWORD)v23] = 0;
      }
      v69 = sub_10002E90(v18, v21);
      if ( v69 )
      {
        for ( i = sub_10002F40((unsigned __int16 *)&v69); i; i = sub_10002F40((unsigned __int16 *)&v69) )
        {
          if ( byte_1038B4C0[i] && (void *)i != dword_10680618 )
          {
            v25 = dword_103643A4;
            byte_1038B4C0[i] = 0;
            word_10362F28[v25] = i;
            dword_103643A4 = v25 + 1;
          }
        }
      }
      v19 += 2;
      v18 = *((unsigned __int8 *)v19 - 2);
      if ( v18 == 255 )
        break;
      v16 = dword_103643A4;
    }
  }
  v26 = 0;
  v27 = 0;
  dword_102E5ED8 = 0;
  if ( dword_100B36FC > 0 )
  {
    v28 = dword_10277E60;
    v29 = a3 + 48;
    do
    {
      if ( *(_DWORD *)(v29 + 3800) )
      {
        if ( *v28 )
        {
          sub_1003AEE0(flt_102E54A8, (float *)v29, (float *)dword_106C6490 + 12);
          v30 = sub_1003AC90((float *)dword_106C6490, flt_102E54A8);
          if ( v30 >= 2.0 )
          {
            v31 = dword_102E5ED8 - 1;
            if ( dword_102E5ED8 - 1 >= 0 )
            {
              v32 = &dword_102E5EE4[v31];
              do
              {
                if ( v30 >= flt_10363F28[v31] )
                  break;
                --v32;
                dword_10363F2C[v31] = flt_10363F28[v31];
                v32[1] = dword_102E5EE0[v31--];
              }
              while ( v31 >= 0 );
            }
            v33 = dword_102E5ED8;
            dword_102E5EE4[v31] = v27;
            dword_10363F2C[v31] = v30;
            dword_102E5ED8 = v33 + 1;
          }
        }
      }
      ++v27;
      ++v28;
      v29 += 11112;
    }
    while ( v27 < dword_100B36FC );
    v26 = dword_102E5ED8;
  }
  if ( v26 > 4 )
  {
    v26 = 4;
    dword_102E5ED8 = 4;
  }
  if ( v26 > 0 )
  {
    v34 = dword_102E5EE0;
    v70 = dword_102E5ED8;
    do
    {
      v35 = *v34;
      v36 = 0;
      v37 = a3 + 11112 * *v34;
      if ( *(int *)(v37 + 10640) > 0 )
      {
        v38 = (unsigned __int16 *)(v37 + 10576);
        do
        {
          v39 = *v38++;
          ++v36;
          byte_1038B4C0[v39] |= 1 << v35;
        }
        while ( v36 < *(_DWORD *)(v37 + 10640) );
      }
      ++v34;
      --v70;
    }
    while ( *(float *)&v70 != 0.0 );
  }
  v40 = dword_106C1988;
  v41 = 0;
  LOWORD(dword_1039B6CC) = 0;
  if ( dword_106C1988 > 0 )
  {
    v42 = (unsigned __int16 *)&unk_106C6498;
    do
    {
      v43 = *v42++;
      v41 |= *(_WORD *)(dword_106C7CA8 + 84 * v43 + 74);
      --v40;
      LOWORD(dword_1039B6CC) = v41;
    }
    while ( v40 );
  }
  v44 = *(float *)dword_106C6490;
  v45 = *((float *)dword_106C6490 + 1);
  v70 = *(int *)dword_106C6490;
  v72 = v45;
  if ( v44 == 0.0 && v45 == 0.0 )
    *(float *)&v70 = 0.000099999997;
  dword_103643B8 = (int)sub_10069530();
  v68 = v72 * 50.0;
  v67 = *(float *)&v70 * 50.0;
  sub_10030E20((int)&flt_106C0860, dword_103643B8, v67, v68, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
  if ( dword_106C661C )
  {
    flt_103643A8 = *(float *)(dword_106C2CF8 + 32) - *(float *)dword_106C2CF8 * 4.0;
    flt_103643AC = *(float *)(dword_106C2CF8 + 36) - *(float *)(dword_106C2CF8 + 4) * 4.0;
    flt_103643B0 = *(float *)(dword_106C2CF8 + 40) - *(float *)(dword_106C2CF8 + 8) * 4.0;
  }
  else
  {
    LODWORD(flt_103643A8) = dword_106C0670;
    LODWORD(flt_103643AC) = dword_106C0674;
    LODWORD(flt_103643B0) = dword_106C0678;
  }
  sub_1003AE50(&flt_103643A8);
  sub_1003AD10((int)&flt_103643A8, 120.0);
  v46 = flt_103643A8;
  dword_10364388 = (dword_10364388 + 1) % 4;
  v47 = 24 * dword_10364388;
  qmemcpy((char *)&unk_100A64E8 + 24 * dword_10364388, &unk_100AA860, 0x18u);
  v48 = (__int64)v46;
  v49 = flt_103643AC;
  byte_100A64F8[v47] = v48;
  v50 = (__int64)v49;
  v51 = flt_103643B0;
  byte_100A64F9[v47] = v50;
  byte_100A64FA[v47] = (__int64)v51;
  result = dword_100B36F8;
  *(float *)&v70 = 0.0;
  if ( dword_100B36F8 > 0 )
  {
    v73 = (int *)(a2 + 96);
    do
    {
      v53 = *v73;
      if ( *v73 )
      {
        v54 = *(_DWORD *)(v53 + 48);
        v55 = *(_DWORD *)(v53 + 52);
        v56 = (__int16 *)(v53 + 10656);
        v57 = (__int16 *)(v53 + 10652);
        *(float *)&v71[2] = *(float *)(v53 + 56) - *(float *)(v53 + 10644);
        v71[0] = v54;
        v71[1] = v55;
        sub_1000F480(a1, (int)v71, 8, (_WORD *)(v53 + 10652), (_WORD *)(v53 + 10656));
        v58 = dword_106C5708;
        if ( *(__int16 *)(v53 + 10652) < *(_DWORD *)(a1 + 88 * dword_106C5708) )
        {
          *v57 = *(_WORD *)(a1 + 88 * dword_106C5708);
          v58 = dword_106C5708;
        }
        v59 = (__int16 *)(a1 + 88 * v58);
        if ( *v56 < *(_DWORD *)v59 )
        {
          *v56 = *v59;
          v58 = dword_106C5708;
        }
        if ( *(__int16 *)(v53 + 10654) < *(_DWORD *)(a1 + 88 * v58 + 4) )
        {
          *(_WORD *)(v53 + 10654) = *(_WORD *)(a1 + 88 * v58 + 4);
          v58 = dword_106C5708;
        }
        if ( *(__int16 *)(v53 + 10658) < *(_DWORD *)(a1 + 88 * v58 + 4) )
        {
          *(_WORD *)(v53 + 10658) = *(_WORD *)(a1 + 88 * v58 + 4);
          v58 = dword_106C5708;
        }
        v60 = (_WORD *)(a1 + 88 * v58);
        if ( *v57 > *((_DWORD *)v60 + 2) + *(_DWORD *)v60 )
        {
          *v57 = v60[4] + *v60;
          v58 = dword_106C5708;
        }
        v61 = (_WORD *)(a1 + 88 * v58);
        if ( *(__int16 *)(v53 + 10656) > *((_DWORD *)v61 + 2) + *(_DWORD *)v61 )
        {
          *(_WORD *)(v53 + 10656) = v61[4] + *v61;
          v58 = dword_106C5708;
        }
        v62 = a1 + 88 * v58;
        if ( *(__int16 *)(v53 + 10654) > *(_DWORD *)(v62 + 4) + *(_DWORD *)(v62 + 12) )
        {
          *(_WORD *)(v53 + 10654) = *(_WORD *)(v62 + 4) + *(_WORD *)(v62 + 12);
          v58 = dword_106C5708;
        }
        v63 = *(_DWORD *)(a1 + 88 * v58 + 12);
        v64 = *(_DWORD *)(a1 + 88 * v58 + 4);
        v65 = a1 + 88 * v58;
        if ( *(__int16 *)(v53 + 10658) > v64 + v63 )
          *(_WORD *)(v53 + 10658) = *(_WORD *)(v65 + 4) + *(_WORD *)(v65 + 12);
      }
      result = v70 + 1;
      v66 = ++v70 < dword_100B36F8;
      v73 += 32;
    }
    while ( v66 );
  }
  return result;
}
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 102E5EC0: using guessed type int dword_102E5EC0;
// 102E5ED0: using guessed type int dword_102E5ED0;
// 102E5ED8: using guessed type int dword_102E5ED8;
// 102E5EE0: using guessed type int dword_102E5EE0[];
// 102E5F24: using guessed type int dword_102E5F24;
// 10363F28: using guessed type float flt_10363F28[];
// 10363FEC: using guessed type int dword_10363FEC;
// 10364000: using guessed type int dword_10364000[];
// 10364388: using guessed type int dword_10364388;
// 103643A4: using guessed type int dword_103643A4;
// 103643A8: using guessed type float flt_103643A8;
// 103643AC: using guessed type float flt_103643AC;
// 103643B0: using guessed type float flt_103643B0;
// 103643B8: using guessed type int dword_103643B8;
// 1039B6CC: using guessed type int dword_1039B6CC;
// 106909E0: using guessed type int dword_106909E0;
// 106C0210: using guessed type float flt_106C0210;
// 106C0670: using guessed type int dword_106C0670;
// 106C0674: using guessed type int dword_106C0674;
// 106C0678: using guessed type int dword_106C0678;
// 106C0860: using guessed type float flt_106C0860;
// 106C1988: using guessed type int dword_106C1988;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 106C5708: using guessed type int dword_106C5708;
// 106C661C: using guessed type int dword_106C661C;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 106C7CAC: using guessed type int dword_106C7CAC;
// 10A9BBC4: using guessed type int dword_10A9BBC4;
// 10A9BBCC: using guessed type int dword_10A9BBCC;
// 10A9BBD0: using guessed type int dword_10A9BBD0[];
