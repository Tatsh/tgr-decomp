//----- (10037B10) --------------------------------------------------------
int __cdecl sub_10037B10(int arg0)
{
  CHK_File *v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // esi
  double v6; // st7
  double v7; // st7
  int v8; // ecx
  int v10[3]; // [esp+Ch] [ebp-40Ch] BYREF
  char a1[1024]; // [esp+18h] [ebp-400h] BYREF

  sub_10037A90(arg0);
  dword_10A9977C = -2147329024 - (_DWORD)&unk_106C8E78;
  sub_1002B9A0(-2147329024, (int)&unk_106C8E78);
  sub_1002B9D0(1);
  strcpy(a1, aTracks);
  strcat(a1, off_100B80B8[arg0]);
  v1 = CHK_FReadOpen(a1);
  v2 = getFileSize(&v1->pfil);
  sub_10038510(&dword_106C7C48, (int)v1);
  if ( v2 > 4000000 )
  {
    printf("Track %d is too big (%d vs. %d)\n", arg0, v2, 4000000);
    exit(1);
  }
  CHK_FReadReportError(&unk_106C90A8, 1u, v2 - 560, v1);
  CHK_FClose(v1);
  sub_10038B20(&dword_106C7C48);
  ReadFilenameToBuffer(&unk_118AA0D8, (&off_100BBB04)[95 * arg0], 0x20u);
  ReadFilenameToBuffer(&unk_118AA8F8, (&off_100BBB04)[95 * arg0] + 32, 0xFFFFFFFF);
  ReadFilenameToBuffer(&unk_118AB0F8, (&off_100BBB0C)[95 * arg0], 0x20u);
  ReadFilenameToBuffer(&unk_118AA0F8, (&off_100BBB0C)[95 * arg0] + 32, 0xFFFFFFFF);
  sub_10073AC0();
  sub_10073B00();
  dword_106C56EC = (int)&unk_106C8E78 - dword_106C7C4C;
  dword_10690BEC = (int)&unk_106C8E78 + dword_106C7C48;
  sub_10037E10(&dword_106C7C48);
  v3 = dword_106C7CAC;
  v4 = 0;
  dword_100AA89C = -1;
  dword_100AA8A0 = -1;
  if ( dword_106C7CAC > 0 )
  {
    v5 = 0;
    do
    {
      v10[0] = 1065353216;
      v10[1] = 0;
      v10[2] = 0;
      sub_1003B3F0((float *)v10, (float *)v10, (float *)(v5 + dword_106C7CA8));
      v6 = sub_1003B170((float *)v10);
      if ( v6 != 0.0 )
      {
        v7 = 1.0 / v6;
        v8 = dword_106C7CA8;
        if ( v7 * *(float *)(dword_106C7CA8 + v5) == 1.0
          && *(float *)(dword_106C7CA8 + v5 + 20) * v7 == 1.0
          && *(float *)(dword_106C7CA8 + v5 + 40) * v7 == 1.0 )
        {
          *(_BYTE *)(dword_106C7CA8 + v5 + 77) |= 0x20u;
          v8 = dword_106C7CA8;
        }
        *(float *)(v8 + v5 + 64) = v7;
      }
      v3 = dword_106C7CAC;
      ++v4;
      v5 += 84;
    }
    while ( v4 < dword_106C7CAC );
  }
  if ( v3 > 2048 )
  {
    printf("ERROR: instances (%d) > MAX_INSTANCES (%d)\n", v3, 2048);
    exit(1);
  }
  if ( dword_106C7C4C != 560 )
  {
    printf("Error: Track header size mismatch(%d != %d)\n", dword_106C7C4C, 560);
    exit(1);
  }
  sub_10061700();
  return sub_10070580(arg0);
}
// 100AA89C: using guessed type int dword_100AA89C;
// 100AA8A0: using guessed type int dword_100AA8A0;
// 100B80B8: using guessed type char *off_100B80B8[15];
// 100BBB04: using guessed type char *off_100BBB04;
// 100BBB0C: using guessed type char *off_100BBB0C;
// 10690BEC: using guessed type int dword_10690BEC;
// 106C56EC: using guessed type int dword_106C56EC;
// 106C7C48: using guessed type int dword_106C7C48;
// 106C7C4C: using guessed type int dword_106C7C4C;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 106C7CAC: using guessed type int dword_106C7CAC;
// 10A9977C: using guessed type int dword_10A9977C;
