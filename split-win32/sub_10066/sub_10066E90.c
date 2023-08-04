#include "../../types-win32.h"
//----- (10066E90) --------------------------------------------------------
void __thiscall sub_10066E90(_DWORD *this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  char *v9; // ecx
  int v10; // edx
  void *v11; // ecx
  int v12; // edx
  #505 *v13; // ecx
  int v14; // edx
  LPCSTR v15; // eax
  double v16; // st7
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  const char *v22; // eax
  double v23; // st7
  double v24; // st7
  int v25; // edx
  int *v26; // eax
  int v27; // esi
  double v28; // st6
  int v29; // ebx
  __int16 v30; // cx
  #505 *v31; // ecx
  int v32; // eax
  int v33; // eax
  LPCSTR v34; // eax
  double v35; // st7
  const char *v36; // eax
  void *v37; // ecx
  int v38; // edi
  int v39; // eax
  int v40; // esi
  float v41; // [esp+4h] [ebp-28h]
  int v42; // [esp+4h] [ebp-28h]
  const char *v43; // [esp+4h] [ebp-28h]
  int v44; // [esp+4h] [ebp-28h]
  float v45; // [esp+18h] [ebp-14h]
  int *v46; // [esp+18h] [ebp-14h]
  LPCSTR v47; // [esp+1Ch] [ebp-10h]
  float v48; // [esp+1Ch] [ebp-10h]
  float v49; // [esp+20h] [ebp-Ch]
  int v50; // [esp+20h] [ebp-Ch]
  int v51; // [esp+24h] [ebp-8h]
  int v52; // [esp+28h] [ebp-4h]

  v2 = (int)dword_106C7DA8;
  if ( dword_106C7DA8 )
  {
    v3 = this[24];
    v52 = v3;
    if ( v3 )
    {
      *this = *(_DWORD *)(v3 + 48);
      this[1] = *(_DWORD *)(v3 + 52);
      this[2] = *(_DWORD *)(v3 + 56);
      this[3] = *(_DWORD *)(v3 + 3968);
      this[4] = *(_DWORD *)(v3 + 3972);
      this[5] = *(_DWORD *)(v3 + 3976);
      this[18] = *(_DWORD *)(v3 + 4000);
      this[19] = *(_DWORD *)(v3 + 4004);
      this[16] = *(_DWORD *)(v3 + 4008);
      this[17] = *(_DWORD *)(v3 + 4012);
      this[12] = *(_DWORD *)(v3 + 4016);
      this[13] = *(_DWORD *)(v3 + 4068);
      this[20] = *(_DWORD *)(v3 + 4084);
      v2 = (int)dword_106C7DA8;
    }
    v4 = this[19];
    if ( v4 >= 0 )
      v5 = this[19];
    else
      v5 = v2 - (-1 - v4) % v2 - 1;
    v41 = *((float *)this + 12) * 100.0;
    v6 = v5 % v2;
    v7 = (v5 % v2 + 1) % v2;
    v51 = v7;
    LODWORD(v49) = sub_1002B920(v41);
    v45 = (double)SLODWORD(v49) * 0.0099999998;
    if ( sub_1003BA70(
           (float *)&unk_106C7CE8 + 5 * v6,
           (float *)&unk_106C7CE0 + 5 * v6,
           (float *)this + 3,
           (float *)this) )
    {
      debugPrint((void *)(this[19] - 1));
      if ( !v6 )
        --this[17];
      debugPrint(dword_106C7DA8);
      if ( v6 == this[18] % (int)dword_106C7DA8 )
      {
        v8 = this[19];
        if ( v8 < 0 )
        {
          v9 = (char *)dword_106C7DA8 + v8;
          v10 = this[17] + 1;
          this[19] = (char *)dword_106C7DA8 + v8;
          this[17] = v10;
          if ( dword_106C7CB8 )
            *((float *)this + 20) = *(float *)(dword_106C7CB8 + 100) + *((float *)this + 20);
          debugPrint(v9);
        }
      }
      --this[19];
      goto LABEL_111;
    }
    if ( !sub_1003BA70(
            (float *)&unk_106C7CE8 + 5 * v7,
            (float *)&unk_106C7CE0 + 5 * v7,
            (float *)this + 3,
            (float *)this) )
      goto LABEL_111;
    debugPrint((void *)(this[19] + 1));
    v11 = (void *)this[18];
    v12 = this[19] + 1;
    this[19] = v12;
    if ( v12 > (int)v11 )
    {
      this[18] = v12;
      debugPrint(v11);
      if ( v7 )
        goto LABEL_52;
      v13 = (#505 *)this[16];
      if ( (int)v13 >= dword_100BD3E0 )
      {
LABEL_41:
        if ( this[16] == dword_100BD3E0 )
        {
          this[26] |= 2u;
          if ( v3 )
          {
            v23 = *(float *)(v3 + 4076);
            *(_DWORD *)(v3 + 10672) = 1063675494;
            *(float *)(v3 + 4076) = v23 - *((float *)this + 12);
            this[12] = 0;
            *(_DWORD *)(v3 + 4088) = dword_118AB470;
            *(_DWORD *)(v3 + 4092) = g_GameMode == 6 ? String2 : getCaptionString(dword_100B3960[dword_118AB470]);
            *(_DWORD *)(v3 + 4096) = 1084227584;
            if ( this[25] < dword_100B4050
              && dword_100BD3E0 == 3
              && (*((float *)dword_10ACED34 + g_chosenTrack + 67) == 0.0
               || *(float *)(v3 + 4076) < (double)*((float *)dword_10ACED34 + g_chosenTrack + 67)) )
            {
              *((_DWORD *)dword_10ACED34 + g_chosenTrack + 67) = *(_DWORD *)(v3 + 4076);
              *(_DWORD *)(v3 + 4096) = 1069547520;
              *(_DWORD *)(v3 + 4100) = getCaptionString(0x121u);
              *(_DWORD *)(v3 + 4104) = 1080033280;
            }
          }
          ++dword_118AB470;
          goto LABEL_111;
        }
LABEL_52:
        if ( (g_GameMode == 1 || g_GameMode == 6 || g_GameMode == 2) && this[25] < dword_100B4050 )
        {
          if ( !dword_106909E0 )
            sub_10067D80();
          if ( g_GameMode == 1 )
          {
            v24 = flt_10ACEE9C - flt_10AD1A04;
          }
          else
          {
            v25 = 255;
            if ( dword_100B36FC <= 1 )
            {
              v24 = v49;
            }
            else
            {
              v24 = v49;
              v26 = (int *)&unk_10AD1A08;
              v27 = dword_100B36FC - 1;
              do
              {
                if ( v25 > *v26 )
                {
                  v24 = flt_10ACEE9C - *((float *)v26 - 1);
                  v25 = *v26;
                }
                v26 += 2778;
                --v27;
              }
              while ( v27 );
            }
          }
          if ( v24 < 0.0 )
            v24 = -v24;
          v28 = *(float *)(this[24] + 4144) * 0.44642857;
          if ( v28 == 0.0 )
          {
            v48 = 1000.0;
          }
          else
          {
            if ( v28 < 25.0 )
              v28 = 25.0;
            v48 = v24 / v28;
          }
          v50 = 0;
          if ( dword_100B4050 > 0 )
          {
            v46 = &dword_10ACD4F8;
            do
            {
              v29 = *v46;
              if ( *(_DWORD *)(*v46 + 4092) == *v46 + 4108 )
              {
                strcpy((char *)(v29 + 10940), (const char *)(v29 + 4108));
                *(_DWORD *)(v29 + 4092) = v29 + 10940;
              }
              else
              {
                *(_DWORD *)(v29 + 4092) = getCaptionString(0x122u);
                *(_DWORD *)(v29 + 4096) = 1053609165;
              }
              v30 = dword_104BBE08 - 1;
              if ( (__int16)(dword_104BBE08 - 1) > 2 || v30 < 0 )
                v30 = 0;
              *(float *)(v29 + 4080) = *(float *)&(&(&stringOffsets[g_chosenTrack][21 * dword_10ACED0C])[7 * v30])[v51 + 11]
                                     + *(float *)(v29 + 4080);
              if ( *(float *)(v29 + 4076) != 0.0 && dword_100B36FC > 1 )
              {
                sprintf((char *const)(v29 + 4108), aRy);
                CreateMinuteSecondsString((char *)(v29 + 4111), v48);
                if ( *(_DWORD *)(v29 + 4088) )
                {
                  if ( v48 > 120.0 )
                    *(_DWORD *)(v29 + 4100) = getCaptionString(0x123u);
                  v43 = getCaptionString(0x124u);
                  sprintf((char *const)(strlen((const char *)(v29 + 4108)) + v29 + 4108), v43);
                }
                *(_DWORD *)(v29 + 4100) = v29 + 4108;
                *(_DWORD *)(v29 + 4104) = 1063675494;
              }
              *(_DWORD *)(v29 + 4000) = this[18];
              ++v50;
              v46 += 32;
            }
            while ( v50 < dword_100B4050 );
            v3 = v52;
          }
        }
        goto LABEL_111;
      }
      v47 = 0;
      if ( *((float *)this + 13) == 0.0 || v45 < (double)*((float *)this + 13) )
      {
        v14 = this[25];
        *((float *)this + 13) = v45;
        if ( v14 < dword_100B4050 )
        {
          *(_DWORD *)(this[24] + 4072) = v13;
          v13 = dword_10ACED34;
          if ( *((float *)dword_10ACED34 + g_chosenTrack + 44) == 0.0
            || *((float *)this + 13) < (double)*((float *)dword_10ACED34 + g_chosenTrack + 44) )
          {
            *((_DWORD *)dword_10ACED34 + g_chosenTrack + 44) = this[13];
            v15 = getCaptionString(0x109u);
            goto LABEL_28;
          }
          if ( this[16] )
          {
            v15 = getCaptionString(0x10Au);
LABEL_28:
            v7 = (int)v15;
            v47 = v15;
            goto LABEL_29;
          }
        }
      }
LABEL_29:
      if ( v3 )
      {
        debugPrint((void *)this[16]);
        *(float *)(v3 + 4 * this[16] + 4020) = v45;
      }
      v16 = *((float *)this + 12) - v45;
      v17 = this[16] + 1;
      this[16] = v17;
      this[17] = v17;
      *((float *)this + 12) = v16;
      if ( g_GameMode == 3 )
      {
        if ( v17 == 1 )
        {
          debugPrint(v13);
          v18 = this[18];
          v19 = this[17] - 1;
          v20 = this[19];
          --this[16];
          this[17] = v19;
          this[18] = v18 - (_DWORD)dword_106C7DA8;
          this[19] = v20 - (_DWORD)dword_106C7DA8;
          if ( dword_106C7CB8 )
            *((float *)this + 20) = *((float *)this + 20) - *(float *)(dword_106C7CB8 + 100);
        }
      }
      else if ( v3 )
      {
        debugPrint(v13);
        v21 = this[16];
        if ( v21 == dword_100BD3E0 - 1 )
        {
          strcpy((char *)(v3 + 4108), getCaptionString(0x10Bu));
          v7 = (int)v47;
        }
        else
        {
          v42 = v21 + 1;
          v22 = getCaptionString(0x10Cu);
          sprintf((char *const)(v3 + 4108), v22, v42);
        }
        *(_DWORD *)(v3 + 4092) = v3 + 4108;
        *(_DWORD *)(v3 + 4096) = 1065353216;
        if ( v7 )
        {
          *(_DWORD *)(v3 + 4100) = v7;
          *(_DWORD *)(v3 + 4104) = 1065353216;
        }
      }
      goto LABEL_41;
    }
    if ( v7 )
    {
LABEL_111:
      if ( v3 )
      {
        *(_DWORD *)(v3 + 4000) = this[18];
        *(_DWORD *)(v3 + 4004) = this[19];
        *(_DWORD *)(v3 + 4008) = this[16];
        *(_DWORD *)(v3 + 4012) = this[17];
        *(_DWORD *)(v3 + 4016) = this[12];
        *(_DWORD *)(v3 + 4068) = this[13];
        *(_DWORD *)(v3 + 4084) = this[20];
      }
      return;
    }
    v31 = (#505 *)this[16];
    v32 = this[17] + 1;
    this[17] = v32;
    if ( v32 <= (int)v31 )
    {
LABEL_107:
      debugPrint((void *)this[16]);
      if ( g_GameMode == 3 && this[16] == 1 )
      {
        debugPrint(v37);
        v38 = this[18];
        v39 = this[17] - 1;
        v40 = this[19];
        --this[16];
        this[17] = v39;
        this[18] = v38 - (_DWORD)dword_106C7DA8;
        this[19] = v40 - (_DWORD)dword_106C7DA8;
        if ( dword_106C7CB8 )
          *((float *)this + 20) = *((float *)this + 20) - *(float *)(dword_106C7CB8 + 100);
      }
      goto LABEL_111;
    }
    if ( *((float *)this + 13) == 0.0 || v45 < (double)*((float *)this + 13) )
    {
      v33 = this[25];
      *((float *)this + 13) = v45;
      if ( v33 < dword_100B4050 )
      {
        *(_DWORD *)(this[24] + 4072) = v31;
        v31 = dword_10ACED34;
        if ( *((float *)dword_10ACED34 + g_chosenTrack + 44) == 0.0
          || *((float *)this + 13) < (double)*((float *)dword_10ACED34 + g_chosenTrack + 44) )
        {
          *((float *)dword_10ACED34 + g_chosenTrack + 44) = v45;
          v34 = getCaptionString(0x109u);
          goto LABEL_101;
        }
        if ( this[16] )
        {
          v34 = getCaptionString(0x10Au);
LABEL_101:
          v7 = (int)v34;
          goto LABEL_102;
        }
      }
    }
LABEL_102:
    if ( v3 )
    {
      debugPrint(v31);
      v31 = (#505 *)this[16];
      *(float *)(v3 + 4 * (_DWORD)v31 + 4020) = v45;
    }
    v35 = *((float *)this + 12) - v45;
    this[16] = this[17];
    *((float *)this + 12) = v35;
    if ( v3 )
    {
      debugPrint(v31);
      v44 = this[16] + 1;
      v36 = getCaptionString(0x10Cu);
      sprintf((char *const)(v3 + 4108), v36, v44);
      *(_DWORD *)(v3 + 4092) = v3 + 4108;
      *(_DWORD *)(v3 + 4096) = 1065353216;
      if ( v7 )
      {
        *(_DWORD *)(v3 + 4100) = v7;
        *(_DWORD *)(v3 + 4104) = 1065353216;
      }
    }
    goto LABEL_107;
  }
}
// 100671DD: variable 'v13' is possibly undefined
// 1006773A: variable 'v31' is possibly undefined
// 100677E7: variable 'v37' is possibly undefined
// 100AA010: using guessed type int g_GameMode;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B380C: using guessed type int g_chosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 100BD2A8: using guessed type char **stringOffsets[16];
// 104BBE08: using guessed type int dword_104BBE08;
// 106909E0: using guessed type int dword_106909E0;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
// 10ACED0C: using guessed type int dword_10ACED0C;
// 10ACEE9C: using guessed type float flt_10ACEE9C;
// 10AD1A04: using guessed type float flt_10AD1A04;
// 118AB470: using guessed type int dword_118AB470;
