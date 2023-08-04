#include "../../types-win32.h"
//----- (10068400) --------------------------------------------------------
int __thiscall sub_10068400(_DWORD *this)
{
  int v2; // edi
  float *v3; // ebx
  double v5; // st7
  unsigned __int8 v6; // c0
  unsigned __int8 v7; // c3
  double v8; // st7
  double v9; // st7
  __int64 v10; // rax
  double v11; // st7
  double v12; // st6
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  unsigned int v16; // edi
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  unsigned int v19; // edi
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  signed int v23; // eax
  unsigned __int8 v24; // al
  signed int v25; // eax
  unsigned __int8 v26; // al
  signed int v27; // eax
  unsigned __int8 v28; // al
  signed int v29; // eax
  unsigned __int8 v30; // al
  double v31; // st7
  unsigned int v32; // ecx
  void *v33; // ecx
  int v34; // eax
  int v35; // ebx
  unsigned int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int16 v40; // ax
  int v41; // eax
  __int64 v42; // rax
  int v43; // ecx
  double v44; // st7
  _DWORD *v45; // ecx
  _DWORD *v46; // eax
  int result; // eax
  _DWORD *v48; // esi
  float v49; // [esp+4h] [ebp-40h]
  int v50; // [esp+18h] [ebp-2Ch]
  signed int v51; // [esp+1Ch] [ebp-28h] BYREF
  int v52; // [esp+20h] [ebp-24h]
  int v53; // [esp+24h] [ebp-20h]
  int v54; // [esp+28h] [ebp-1Ch] BYREF
  float v55; // [esp+2Ch] [ebp-18h] BYREF
  float v56; // [esp+30h] [ebp-14h] BYREF
  _DWORD *v57; // [esp+34h] [ebp-10h]
  float v58; // [esp+38h] [ebp-Ch] BYREF
  int v59; // [esp+3Ch] [ebp-8h] BYREF
  unsigned int v60; // [esp+40h] [ebp-4h]

  v2 = 2 * this[80];
  v50 = v2;
  v60 = 11112 * dword_106C1638;
  if ( dword_106909B4 || !this[960] )
  {
    result = 24 * v2;
    *(int *)((char *)dword_118AC734 + result) = 0;
    *(int *)((char *)dword_118AC728 + result) = 0;
    *(int *)((char *)dword_118AC72C + result) = 0;
    return result;
  }
  v52 = 0;
  if ( dword_100AA8B4 == 1 )
  {
    v3 = (float *)dword_10AD05DC[2778 * dword_106C1638];
    if ( !this[990] && !dword_10ACEE20[2778 * dword_106C1638] )
      goto LABEL_11;
  }
  else
  {
    v3 = (float *)this[2509];
    if ( !this[990] && !dword_10ACEE20[2778 * dword_106C1638] && !dword_10ACEE20[2778 * dword_106C1690] )
      goto LABEL_11;
  }
  v52 = 1;
LABEL_11:
  v57 = this + 983;
  *((float *)this + 989) = sub_10067AE0((int)(this + 12), (int)(this + 992), COERCE_FLOAT(v3 + 12), (int)(this + 983));
  sub_10067BC0((float *)this + 12, v3, &v55, &v56, &v54, 0);
  v5 = *((float *)this + 905);
  if ( v6 | v7 )
    v8 = v5 * -0.5;
  else
    v8 = v5 * 0.5;
  v9 = v8 * 15.714286 * *((float *)this + 989);
  if ( v9 > 100000.0 || v9 < 0.0 )
    v9 = 0.0;
  if ( !this[80] )
    dword_118290F4 = (*(_BYTE *)(dword_106C7CA8 + 84 * *((unsigned __int16 *)this + 5254) + 76) & 0x10) != 0 ? 0x2AF8 : 0;
  if ( !v52 )
  {
    v53 = 24 * v2;
    v10 = (__int64)(v9 * 0.000090909089 * 4294967296.0);
    v11 = (double)v54;
    v12 = v56;
    dword_118AC728[6 * v2] = v10;
    dword_118AC72C[6 * v2] = HIDWORD(v10);
    *(int *)((char *)dword_118AC734 + v53) = ((unsigned int)(__int64)(v55 * v11) << 16) + (__int64)(v12 * v11);
  }
  v13 = this[986];
  v14 = 3 * v2;
  v15 = HIDWORD(qword_118AC740[3 * v2]);
  v53 = v13;
  if ( !(v15 | LODWORD(qword_118AC740[v14])) || !*((_BYTE *)this + 877) && v13 >= 4 && v13 <= 7 )
  {
    this[986] = 0;
    this[987] = 0;
    this[988] = 0;
  }
  if ( *((_BYTE *)this + 866) > 0x7Fu )
  {
    sub_10067BC0((float *)this + 12, v3, (float *)&v59, &v58, &v51, 0);
    v16 = ((unsigned int)(__int64)(*(float *)&v59 * (double)v51) << 16) + (__int64)(v58 * (double)v51);
    v17 = *((_BYTE *)this + 866);
    v51 = v16;
    if ( v17 >= 0xABu )
    {
      if ( v17 >= 0xD5u )
        sub_10072AF0(1, v16);
      else
        sub_10072AF0(16, v16);
    }
    else
    {
      sub_10072AF0(17, v16);
    }
    sub_10078E90();
    sub_10078ED0();
  }
  v18 = *((_BYTE *)this + 867);
  *((_BYTE *)this + 866) = 0;
  if ( v18 > 0x7Fu )
  {
    sub_10067BC0((float *)this + 12, v3, &v58, (float *)&v59, &v51, 0);
    v19 = ((unsigned int)(__int64)(v58 * (double)v51) << 16) + (__int64)(*(float *)&v59 * (double)v51);
    v20 = *((_BYTE *)this + 867);
    v51 = v19;
    if ( v20 >= 0xABu )
    {
      if ( v20 >= 0xD5u )
        sub_10072AF0(2, v19);
      else
        sub_10072AF0(18, v19);
    }
    else
    {
      sub_10072AF0(19, v19);
    }
    sub_10078ED0();
    sub_10078E90();
  }
  v21 = *((_BYTE *)this + 876);
  *((_BYTE *)this + 867) = 0;
  if ( v21 > 0x7Fu )
  {
    sub_10067BC0((float *)this + 12, v3, &v58, (float *)&v59, &v51, 0);
    v51 = ((unsigned int)(__int64)(v58 * (double)v51) << 16) + (__int64)(*(float *)&v59 * (double)v51);
    sub_10072AF0(3, v51);
  }
  v22 = *((_BYTE *)this + 870);
  *((_BYTE *)this + 876) = 0;
  if ( v22 > 0x7Fu )
  {
    sub_10067BC0((float *)this + 12, v3, &v58, (float *)&v59, &v51, 0);
    v23 = v51;
    if ( v51 > 2 )
      v23 = 32;
    v51 = 65537 * v23;
    sub_10072AF0(20, 65537 * v23);
  }
  v24 = *((_BYTE *)this + 871);
  *((_BYTE *)this + 870) = 0;
  if ( v24 > 0x7Fu )
  {
    sub_10067BC0((float *)this + 12, v3, &v58, (float *)&v59, &v51, 0);
    v25 = v51;
    if ( v51 > 2 )
      v25 = 32;
    v51 = 65537 * v25;
    sub_10072AF0(21, 65537 * v25);
  }
  v26 = *((_BYTE *)this + 872);
  *((_BYTE *)this + 871) = 0;
  if ( v26 > 0x7Fu )
  {
    sub_10067BC0((float *)this + 12, v3, &v58, (float *)&v59, &v51, 0);
    v27 = v51;
    if ( v51 > 2 )
      v27 = 32;
    v51 = 65537 * v27;
    sub_10072AF0(22, 65537 * v27);
  }
  v28 = *((_BYTE *)this + 873);
  *((_BYTE *)this + 872) = 0;
  if ( v28 > 0x7Fu )
  {
    sub_10067BC0((float *)this + 12, v3, &v58, (float *)&v59, &v51, 0);
    v29 = v51;
    if ( v51 > 2 )
      v29 = 32;
    v51 = 65537 * v29;
    sub_10072AF0(23, 65537 * v29);
  }
  v30 = *((_BYTE *)this + 874);
  *((_BYTE *)this + 873) = 0;
  if ( v30 <= 0x7Fu )
  {
    if ( *((_BYTE *)this + 875) > 0x7Fu )
      sub_10072BA0(24, this[80]);
  }
  else
  {
    sub_10067BC0((float *)this + 12, v3, &v58, (float *)&v59, &v51, 0);
    v31 = *((float *)this + 989);
    v32 = 65537 * v51;
    v51 *= 65537;
    if ( v31 >= 0.0 )
    {
      v49 = *((float *)this + 989) * 22050.0;
      sub_10072750(24, this[80], v49);
      debugPrint(v33);
      v32 = v51;
    }
    if ( *((_BYTE *)this + 875) > 0x7Fu )
      sub_10072B80(24, this[80], v32);
    else
      sub_10072B10(24, this[80], v32);
  }
  v34 = this[986];
  *((_BYTE *)this + 875) = *((_BYTE *)this + 874);
  *((_BYTE *)this + 874) = 0;
  if ( v34 && (v34 < 4 || v34 > 7) && (v34 < 8 || v34 > 12) )
    goto LABEL_122;
  v35 = -1;
  if ( this[460] )
    v35 = *((char *)this + 1820);
  v36 = *((unsigned __int8 *)this + 877);
  if ( (signed int)v36 <= this[987]
    && (!*((_BYTE *)this + 877) || (int)this[988] >= 40 && (this[988] != 40 || v53 < 4 || v53 > 7)) )
  {
    *((_WORD *)this + 177) = 0;
    goto LABEL_105;
  }
  this[987] = v36;
  if ( dword_104BBE08 != 3 )
  {
    switch ( v35 )
    {
      case 0:
      case 3:
        v37 = this[80];
        if ( v37 < dword_100B4050 && !word_11782BA8[v37] )
        {
          word_11782BB8[v37] = 0;
          word_11782BAC[this[80]] = 0;
          word_11782BB0[this[80]] = 1;
          word_11782BB4[this[80]] = 9;
          word_11782BBC[this[80]] = 10;
          word_11782BA8[this[80]] = 1;
        }
        this[986] = 7;
        break;
      case 1:
        v38 = this[80];
        if ( v38 < dword_100B4050 && !word_11782BA8[v38] )
        {
          word_11782BB8[v38] = 0;
          word_11782BAC[this[80]] = 0;
          word_11782BB0[this[80]] = 1;
          word_11782BB4[this[80]] = 14;
          word_11782BBC[this[80]] = 15;
          word_11782BA8[this[80]] = 1;
        }
        this[986] = 5;
        break;
      case 2:
        v39 = this[80];
        if ( v39 < dword_100B4050 && !word_11782BA8[v39] )
        {
          word_11782BB8[v39] = 0;
          word_11782BAC[this[80]] = 0;
          word_11782BB0[this[80]] = 1;
          word_11782BB4[this[80]] = 12;
          word_11782BBC[this[80]] = 13;
          word_11782BA8[this[80]] = 1;
        }
        this[986] = 4;
        break;
      case 4:
        this[986] = 12;
        break;
      default:
        break;
    }
    v36 = *((unsigned __int8 *)this + 877);
LABEL_101:
    this[987] = v36 >> 1;
    goto LABEL_102;
  }
  if ( v35 >= 0 )
  {
    if ( v35 > 3 )
    {
      if ( v35 == 4 )
      {
        this[986] = 7;
        this[987] = 0;
      }
      goto LABEL_102;
    }
    this[986] = 7;
    goto LABEL_101;
  }
LABEL_102:
  v40 = *((_WORD *)this + 177);
  this[988] = 40;
  *((_WORD *)this + 177) = v40 + 1;
  if ( v40 > 16 )
    *((_WORD *)this + 177) = 16;
  this[987] = this[987] * *((__int16 *)this + 177) / 12;
LABEL_105:
  v41 = this[986];
  if ( !v41 || v41 >= 8 && v41 <= 12 )
  {
    if ( dword_104BBE08 != 3 )
    {
      switch ( v35 )
      {
        case 0:
        case 3:
          this[986] = 10;
          break;
        case 1:
          this[986] = 8;
          break;
        case 2:
          this[986] = 9;
          break;
        case 4:
          this[986] = 12;
          break;
        default:
          goto LABEL_119;
      }
      goto LABEL_120;
    }
    if ( v35 >= 0 )
    {
      if ( v35 <= 3 )
      {
        this[986] = 11;
        goto LABEL_120;
      }
      if ( v35 == 4 )
      {
        this[986] = 10;
        goto LABEL_120;
      }
    }
LABEL_119:
    this[986] = 0;
LABEL_120:
    this[988] = 1;
    v42 = (__int64)(sub_1003B170((float *)this + 1033) * 2.3703704);
    this[987] = v42;
    if ( (int)v42 > 64 )
      this[987] = 64;
  }
LABEL_122:
  v43 = this[986];
  if ( v43 )
  {
    v44 = *((float *)this + 989) * 11000.0;
    *(float *)&v51 = v44;
    if ( v44 > 20000.0 || *(float *)&v51 < 0.0 )
      *(float *)&v51 = 0.0;
    if ( v43 != v53 && !v50 )
      strftime((char *)1, *(&SizeInBytes + 6 * v43), (&Format)[6 * v43], *(&Tm + 6 * v43));
    if ( !v52 && !v50 )
    {
      v59 = (v54 * this[987]) >> 7;
      qword_118AC740[0] = (__int64)(*(float *)&v51 * 0.000090909089 * 4294967296.0);
      dword_118AC74C = (__int64)(v56 * (double)v59) + ((unsigned int)(__int64)(v55 * (double)v59) << 16);
    }
  }
  else if ( !v50 )
  {
    dword_118AC74C = 0;
    qword_118AC740[0] = 0i64;
  }
  if ( dword_100AA8B4 == 1 )
  {
    v45 = v57;
    v46 = (_DWORD *)(dword_10AD05DC[v60 / 4] + 48);
    *v57 = *v46;
    v45[1] = v46[1];
    result = v46[2];
    v45[2] = result;
  }
  else
  {
    result = (int)v57;
    v48 = (_DWORD *)(this[2509] + 48);
    *v57 = *v48;
    *(_DWORD *)(result + 4) = v48[1];
    *(_DWORD *)(result + 8) = v48[2];
  }
  return result;
}
// 10068A2D: conditional instruction was optimized away because of 'cl.1!=0'
// 10068511: variable 'v6' is possibly undefined
// 10068511: variable 'v7' is possibly undefined
// 10068957: variable 'v33' is possibly undefined
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100B4050: using guessed type int dword_100B4050;
// 104BBE08: using guessed type int dword_104BBE08;
// 106909B4: using guessed type int dword_106909B4;
// 106C1638: using guessed type int dword_106C1638;
// 106C1690: using guessed type int dword_106C1690;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 10ACEE20: using guessed type int dword_10ACEE20[];
// 10AD05DC: using guessed type int dword_10AD05DC[];
// 11782BA8: using guessed type __int16 word_11782BA8[];
// 11782BAC: using guessed type __int16 word_11782BAC[];
// 11782BB0: using guessed type __int16 word_11782BB0[];
// 11782BB4: using guessed type __int16 word_11782BB4[];
// 11782BB8: using guessed type __int16 word_11782BB8[];
// 11782BBC: using guessed type __int16 word_11782BBC[];
// 118290F4: using guessed type int dword_118290F4;
// 118AC728: using guessed type int dword_118AC728[];
// 118AC72C: using guessed type int dword_118AC72C[];
// 118AC734: using guessed type int dword_118AC734[];
// 118AC740: using guessed type __int64 qword_118AC740[];
// 118AC74C: using guessed type int dword_118AC74C;
