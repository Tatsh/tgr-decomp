//----- (10065740) --------------------------------------------------------
int __thiscall sub_10065740(int this)
{
  int v2; // eax
  long double v3; // st4
  double v4; // st7
  __int16 v5; // cx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // [esp+0h] [ebp-28h]
  int v10; // [esp+4h] [ebp-24h]
  float v11; // [esp+8h] [ebp-20h]
  float v12; // [esp+8h] [ebp-20h]
  int v13; // [esp+8h] [ebp-20h]
  float v14; // [esp+14h] [ebp-14h]
  float v15; // [esp+18h] [ebp-10h]
  float v16; // [esp+18h] [ebp-10h]
  float v17; // [esp+18h] [ebp-10h]
  float v18; // [esp+1Ch] [ebp-Ch]
  float v19; // [esp+20h] [ebp-8h]
  float v20; // [esp+24h] [ebp-4h]

  sub_10076B20((_DWORD *)this);
  if ( g_GameMode == 2 || g_GameMode == 4 || g_GameMode == 3 && dword_100B4050 == 1 || !g_GameMode )
  {
    sub_10076A40((_DWORD *)this, *(_DWORD *)(this + 320));
    v14 = 0.0;
    v15 = 0.5;
  }
  else
  {
    sub_10076A40((_DWORD *)this, *(_DWORD *)(this + 320));
    if ( g_NetworkPlay )
      v2 = *(_DWORD *)(this + 324);
    else
      v2 = *(_DWORD *)(this + 320);
    v14 = (float)(v2 >> 1);
    v15 = (float)((v2 & 1) == 0);
  }
  v20 = cos_(dword_106C7C94);
  v18 = sin_(dword_106C7C94);
  v11 = dword_106C7C94 - -1.5707964;
  v19 = cos_(v11);
  v12 = dword_106C7C94 - -1.5707964;
  v16 = v15 - 0.5;
  v3 = sin_(v12) * v16;
  v4 = v19 * v16;
  v17 = v14 - -1.0;
  *(float *)&v13 = flt_106C7C90 - -0.1;
  *(float *)&v10 = flt_106C7C8C - v3 * 3.0 - v18 * v17 * 8.0;
  *(float *)&v9 = flt_106C7C88 - v4 * 3.0 - v20 * v17 * 8.0;
  sub_10076420((float *)this, v9, v10, v13);
  *(float *)(this + 4084) = (v14 - -0.5) * -8.0;
  sub_100764C0((float *)this, dword_106C7C94);
  *(_DWORD *)(this + 3968) = *(_DWORD *)(this + 48);
  *(_DWORD *)(this + 3972) = *(_DWORD *)(this + 52);
  *(_DWORD *)(this + 3976) = *(_DWORD *)(this + 56);
  *(_DWORD *)(this + 3932) = *(_DWORD *)(this + 48);
  *(_DWORD *)(this + 3936) = *(_DWORD *)(this + 52);
  *(_DWORD *)(this + 3940) = *(_DWORD *)(this + 56);
  sub_10001FF0((#482 *)this);
  *(_DWORD *)(this + 3744) = 0;
  *(_DWORD *)(this + 3748) = 0;
  *(_DWORD *)(this + 3752) = 0;
  *(_DWORD *)(this + 3756) = -180;
  sub_100767A0((_DWORD *)this, 0, 0, 0);
  if ( dword_106C7CB8 )
  {
    *(_DWORD *)(this + 4016) = 0;
    *(_DWORD *)(this + 4076) = 0;
    *(_DWORD *)(this + 4068) = 0;
    v5 = dword_104BBE08 - 1;
    if ( (__int16)(dword_104BBE08 - 1) > 2 || v5 < 0 )
      v5 = 0;
    *(_DWORD *)(this + 4080) = (&stringOffsets[g_chosenTrack][21 * *(_DWORD *)(this + 3684)])[7 * v5 + 17];
    *(_DWORD *)(this + 3980) = dword_106C7CB8;
    *(_DWORD *)(this + 3984) = 0;
    sub_1003ADA0((float *)(this + 3988), (float *)(dword_106C7CB8 + 76), (float *)(dword_106C7CB8 + 116));
  }
  else
  {
    *(_DWORD *)(this + 3988) = 1065353216;
    *(_DWORD *)(this + 3992) = 0;
    *(_DWORD *)(this + 3996) = 0;
  }
  v6 = *(_DWORD *)(this + 320);
  v7 = dword_100B36F8 - v6;
  *(_DWORD *)(this + 4008) = 0;
  *(_DWORD *)(this + 4072) = 0;
  *(_DWORD *)(this + 4088) = v7 - 1;
  *(_DWORD *)(this + 4000) = 0;
  if ( v6 < dword_100B4050 || g_GameMode == 1 || g_GameMode == 2 || g_GameMode == 4 || g_GameMode == 6 )
  {
    *(_DWORD *)(this + 4012) = -1;
    *(_DWORD *)(this + 4004) = -1;
  }
  else
  {
    *(_DWORD *)(this + 4012) = 0;
    *(_DWORD *)(this + 4004) = 0;
  }
  *(_DWORD *)(this + 10572) = 0;
  *(_DWORD *)(this + 10640) = 0;
  *(_DWORD *)(this + 10008) = 0;
  *(_DWORD *)(this + 4148) = 0;
  *(_DWORD *)(this + 4144) = 0;
  *(_DWORD *)(this + 4152) = 0;
  *(_DWORD *)(this + 4156) = 0;
  *(_DWORD *)(this + 4160) = 0;
  *(_DWORD *)(this + 4164) = 0;
  *(_DWORD *)(this + 4168) = 0;
  *(_DWORD *)(this + 4172) = 0;
  *(_DWORD *)(this + 4176) = 0;
  *(_DWORD *)(this + 4180) = 0;
  *(_DWORD *)(this + 4184) = 0;
  *(_DWORD *)(this + 4128) = 0;
  *(_DWORD *)(this + 3844) = 0;
  sub_10065630(this);
  result = sub_10065710(this);
  *(_DWORD *)(this + 3960) = 0;
  *(_DWORD *)(this + 3944) = 0;
  *(_DWORD *)(this + 3948) = 0;
  *(_DWORD *)(this + 3952) = 0;
  *(_DWORD *)(this + 3956) = 1065353216;
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B380C: using guessed type int g_chosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 100BD2A8: using guessed type char **stringOffsets[16];
// 1022AF18: using guessed type int g_NetworkPlay;
// 104BBE08: using guessed type int dword_104BBE08;
// 106C7C88: using guessed type float flt_106C7C88;
// 106C7C8C: using guessed type float flt_106C7C8C;
// 106C7C90: using guessed type float flt_106C7C90;
