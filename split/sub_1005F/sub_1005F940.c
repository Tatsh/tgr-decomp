//----- (1005F940) --------------------------------------------------------
int sub_1005F940()
{
  int v0; // eax
  int v1; // esi
  __int16 v2; // cx
  int v3; // edx
  __int16 *v4; // eax
  int v5; // ecx
  int v6; // edx
  unsigned __int16 v7; // si
  unsigned __int8 v8; // cl
  int v9; // eax
  #505 *v10; // esi
  int v11; // edx
  int result; // eax

  if ( !dword_10220B20 )
    qmemcpy(&unk_10AA25D0, &dword_10220B20, 0x118u);
  g_ChosenWeather = dword_10220B34;
  LOBYTE(dword_10AA28B8) = dword_10220B24;
  v0 = dword_10220B28;
  dword_10AA28A0 = dword_10220B2C;
  g_chosenTrack = dword_10220B30;
  v1 = dword_10220B2C + 1;
  dword_10AA28C0 = dword_10220B38;
  v2 = word_10220B40;
  *((_BYTE *)&dword_10AA26E8 + dword_10220B28) = byte_10220B3C + 1;
  v3 = dword_10220B44;
  dword_10AA28A4 = v0;
  *((_WORD *)&dword_10A9D068 + v0) = v2;
  dword_10AA28C8 = v3;
  sprintf(byte_10AA2518, "%d", v1);
  sprintf(byte_10A9D618, "%d", dword_10AA28A4 + 1);
  qmemcpy(flt_10AA25A0, &unk_10220B48, sizeof(flt_10AA25A0));
  v4 = &word_10AA270E[4 * (char)dword_10AA28B8];
  v5 = 0;
  v6 = 4;
  do
  {
    v7 = *v4++;
    v5 += v7;
    --v6;
  }
  while ( v6 );
  dword_10AA28C4 = v5;
  v8 = dword_10AA26F4[0];
  if ( BYTE1(dword_10AA26F4[0]) || g_GameMode == 5 || dword_10220B20 )
    return 1;
  if ( LOBYTE(dword_10AA26F4[0]) > (unsigned __int8)byte_10A9DBDC || !LOBYTE(dword_10AA26F4[0]) && byte_10A9DBDC )
  {
    g_GameMode = 5;
    if ( LOBYTE(dword_10AA26F4[0]) || !byte_10A9DBDC )
    {
      sub_1005FBC0(1);
    }
    else
    {
      if ( dword_10220B2C < 5 )
        dword_10AA28B0 = 1;
      sub_1005FBC0(0);
    }
    if ( dword_10220B24 < 4 && dword_10220B2C < 1 )
      dword_10AA28B0 = 1;
    *((_DWORD *)dword_10AA2904 + 26) = 0;
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)dword_10AA2904 + 24))(dword_10AA2904, 0);
    result = 0;
  }
  else
  {
    g_GameMode = 0;
    dword_10AA28B4 = 1;
    v9 = 0;
    while ( 1 )
    {
      v10 = dword_10ACED34;
      *((_BYTE *)&dword_10AA26F4[v8] + v9 + 2) = 0;
      word_10AA270E[4 * LOBYTE(dword_10AA26F4[0]) + v9] = 0;
      dword_10AA2740[4 * LOBYTE(dword_10AA26F4[0]) + v9] = 0;
      *((_BYTE *)v10 + 4 * *((unsigned __int8 *)v10 + 4) + v9 + 6) = 0;
      *(_BYTE *)(v9 + 4 * *(unsigned __int8 *)(dword_10AD189C + 4) + dword_10AD189C + 6) = 0;
      *((_WORD *)dword_10ACED34 + 4 * *((unsigned __int8 *)dword_10ACED34 + 4) + v9 + 15) = 0;
      *(_WORD *)(dword_10AD189C + 2 * (v9 + 4 * *(unsigned __int8 *)(dword_10AD189C + 4)) + 30) = 0;
      *((_DWORD *)dword_10ACED34 + 4 * *((unsigned __int8 *)dword_10ACED34 + 4) + v9 + 20) = 0;
      v11 = v9 + 4 * *(unsigned __int8 *)(dword_10AD189C + 4) + 20;
      ++v9;
      *(_DWORD *)(dword_10AD189C + 4 * v11) = 0;
      if ( v9 >= 4 )
        break;
      v8 = dword_10AA26F4[0];
    }
    result = 1;
  }
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B380C: using guessed type int g_chosenTrack;
// 10220B20: using guessed type int dword_10220B20;
// 10220B24: using guessed type int dword_10220B24;
// 10220B28: using guessed type int dword_10220B28;
// 10220B2C: using guessed type int dword_10220B2C;
// 10220B30: using guessed type int dword_10220B30;
// 10220B34: using guessed type int dword_10220B34;
// 10220B38: using guessed type int dword_10220B38;
// 10220B3C: using guessed type char byte_10220B3C;
// 10220B40: using guessed type __int16 word_10220B40;
// 10220B44: using guessed type int dword_10220B44;
// 1022B350: using guessed type int g_ChosenWeather;
// 10A9D068: using guessed type int dword_10A9D068;
// 10A9DBDC: using guessed type char byte_10A9DBDC;
// 10AA26E8: using guessed type int dword_10AA26E8;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA270E: using guessed type __int16 word_10AA270E[];
// 10AA28A0: using guessed type int dword_10AA28A0;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28B0: using guessed type int dword_10AA28B0;
// 10AA28B4: using guessed type int dword_10AA28B4;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA28C0: using guessed type int dword_10AA28C0;
// 10AA28C8: using guessed type int dword_10AA28C8;
// 10AD189C: using guessed type int dword_10AD189C;
