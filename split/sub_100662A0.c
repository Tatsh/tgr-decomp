//----- (100662A0) --------------------------------------------------------
int __thiscall sub_100662A0(size_t Size)
{
  int v2; // ecx
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  double v6; // st7
  __int16 v7; // cx
  int result; // eax

  if ( g_GameMode )
  {
    if ( g_GameMode == 1 )
    {
      v2 = 2;
    }
    else if ( g_GameMode == 6 )
    {
      v2 = 9999;
    }
    else
    {
      v2 = dword_100B36FC;
    }
  }
  else
  {
    v2 = dword_100B4050;
  }
  v3 = (int)(Size - (_DWORD)&unk_10ACD498) >> 7;
  *(_DWORD *)(Size + 100) = v3;
  *(_BYTE *)(Size + 92) = byte_100B37D0[3 * v3];
  *(_BYTE *)(Size + 93) = byte_100B37D1[3 * v3];
  *(_BYTE *)(Size + 94) = byte_100B37D2[3 * v3];
  *(_DWORD *)(Size + 104) = 0;
  *(_DWORD *)(Size + 116) = v3 >= dword_100B4050 + 13;
  if ( v3 >= v2 )
  {
    v5 = *(_DWORD *)(Size + 116);
    *(_DWORD *)(Size + 96) = 0;
    if ( v5 == 1 )
    {
      v6 = (double)(600 * (v3 - dword_100B4050) - 7760);
    }
    else if ( g_chosenTrack == 2 || g_chosenTrack == 8 )
    {
      v6 = (double)(520 * v3);
    }
    else
    {
      v6 = (double)(550 * v3);
    }
    *(float *)(Size + 80) = v6;
    sub_10065B20(dword_106C7CB8, *(float *)(Size + 80));
    *(_DWORD *)Size = dword_10AF9B38;
    *(_DWORD *)(Size + 4) = dword_10AF9B3C;
    *(_DWORD *)(Size + 8) = dword_10AF9B40;
    *(_DWORD *)(Size + 40) = dword_10AF988C;
    *(_DWORD *)(Size + 44) = dword_10ACD490;
    *(_DWORD *)(Size + 76) = dword_10AF96C0;
    *(_DWORD *)(Size + 72) = dword_10AF96C0;
    *(_DWORD *)(Size + 68) = dword_10AF9B44;
    *(_DWORD *)(Size + 64) = dword_10AF9B44;
    debugPrint(*(void **)(Size + 100));
    *(_DWORD *)(Size + 12) = *(_DWORD *)Size;
    *(_DWORD *)(Size + 16) = *(_DWORD *)(Size + 4);
    *(_DWORD *)(Size + 20) = *(_DWORD *)(Size + 8);
    *(_DWORD *)(Size + 48) = 0;
    *(_DWORD *)(Size + 56) = 0;
    *(_DWORD *)(Size + 52) = 0;
    v7 = dword_104BBE08 - 1;
    if ( (__int16)(dword_104BBE08 - 1) > 2 || v7 < 0 )
      v7 = 0;
    *(_DWORD *)(Size + 60) = (&stringOffsets[g_chosenTrack][21 * dword_10ACED0C])[7 * v7 + 17];
    *(_DWORD *)(Size + 84) = dword_100B36F8 - *(_DWORD *)(Size + 100) - 1;
  }
  else
  {
    v4 = &dword_10ACDEA8[2778 * v3];
    *(_DWORD *)(Size + 96) = v4;
    v4[960] = Size;
  }
  result = dword_100B4050;
  if ( *(_DWORD *)(Size + 100) >= dword_100B4050 )
    return sub_10065D50(Size);
  *(_DWORD *)(Size + 120) = 0;
  *(_DWORD *)(Size + 124) = 0;
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B380C: using guessed type int g_chosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 100BD2A8: using guessed type char **stringOffsets[16];
// 104BBE08: using guessed type int dword_104BBE08;
// 10ACD490: using guessed type int dword_10ACD490;
// 10ACED0C: using guessed type int dword_10ACED0C;
// 10AF96C0: using guessed type int dword_10AF96C0;
// 10AF988C: using guessed type int dword_10AF988C;
// 10AF9B38: using guessed type int dword_10AF9B38;
// 10AF9B3C: using guessed type int dword_10AF9B3C;
// 10AF9B40: using guessed type int dword_10AF9B40;
// 10AF9B44: using guessed type int dword_10AF9B44;
