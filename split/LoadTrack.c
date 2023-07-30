//----- (10037B10) --------------------------------------------------------
int __cdecl LoadTrack(int trackIndex)
{
  CHK_File *cFile; // esi
  signed int filesize; // edi
  int v3; // eax
  int v4; // edi
  int v5; // esi
  double v6; // st7
  double v7; // st7
  int v8; // ecx
  DWORD *_; // [esp+0h] [ebp-418h]
  int v11; // [esp+14h] [ebp-404h] BYREF
  char *trackFilepath; // [esp+18h] [ebp-400h] BYREF
  int v13; // [esp+1Ch] [ebp-3FCh]

  ParseHNDFileFromIndex(trackIndex);
  dword_10A9977C = -2147329024 - (_DWORD)&unk_106C8E78;
  sub_1002B9A0(-2147329024, (int)&unk_106C8E78);
  sub_1002B9D0(1);
  strcpy((char *)&trackFilepath, aTracks);
  strcat((char *)&trackFilepath, off_100B80B8[trackIndex]);
  cFile = CHK_FReadOpen((const char *)&trackFilepath);
  filesize = CHK_GetFileSize(cFile, _);
  ParseTrackHeader((int)&g_TrackHeader, cFile);
  if ( filesize > 0x3D0900 )                    // ~3.81 MiB
  {
    printf("Track %d is too big (%d vs. %d)\n", trackIndex, filesize, 0x3D0900);
    exit(1);
  }
  CHK_FReadReportError(&g_TrackBuffer, 1u, filesize - 560, cFile);
  CHK_FClose(cFile);
  sub_10038B20(&g_TrackHeader);
  ReadFilenameToBuffer(&lutBuffer, (&pLutsArray)[95 * trackIndex], 32);
  ReadFilenameToBuffer(&lutBuffer_0, (&pLutsArray)[95 * trackIndex] + 32, -1);
  ReadFilenameToBuffer(&ciBuffer, (&ciArray)[95 * trackIndex], 32);
  ReadFilenameToBuffer(&ciBuffer_0, (&ciArray)[95 * trackIndex] + 32, -1);
  sub_10073AC0();
  sub_10073B00();
  dword_106C56EC = (int)&unk_106C8E78 - g_TrackHeaderSize;
  dword_10690BEC = (int)&unk_106C8E78 + g_TrackHeader;
  sub_10037E10(&g_TrackHeader);
  v3 = g_TrackInstances;
  v4 = 0;
  dword_100AA89C = -1;
  dword_100AA8A0 = -1;
  if ( g_TrackInstances > 0 )
  {
    v5 = 0;
    do
    {
      v11 = 1065353216;
      trackFilepath = 0;
      v13 = 0;
      sub_1003B3F0((float *)&v11, (float *)&v11, (float *)(v5 + dword_106C7CA8));
      v6 = sub_1003B170((float *)&v11);
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
      v3 = g_TrackInstances;
      ++v4;
      v5 += 84;
    }
    while ( v4 < g_TrackInstances );
  }
  if ( v3 > 2048 )
  {
    printf("ERROR: instances (%d) > MAX_INSTANCES (%d)\n", v3, 2048);
    exit(1);
  }
  if ( g_TrackHeaderSize != 560 )
  {
    printf("Error: Track header size mismatch(%d != %d)\n", g_TrackHeaderSize, 560);
    exit(1);
  }
  sub_10061700();
  return sub_10070580(trackIndex);
}
// 10037BBA: variable '_' is possibly undefined
// 100AA89C: using guessed type int dword_100AA89C;
// 100AA8A0: using guessed type int dword_100AA8A0;
// 100B80B8: using guessed type char *off_100B80B8[15];
// 100BBB04: using guessed type char *pLutsArray;
// 100BBB0C: using guessed type char *ciArray;
// 10690BEC: using guessed type int dword_10690BEC;
// 106C56EC: using guessed type int dword_106C56EC;
// 106C7C48: using guessed type int g_TrackHeader;
// 106C7C4C: using guessed type int g_TrackHeaderSize;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 106C7CAC: using guessed type int dword_106C7CAC;
// 10A9977C: using guessed type int dword_10A9977C;
