//----- (1005F690) --------------------------------------------------------
int DDraw_DoInit()
{
  int v0; // ebp
  int v1; // eax
  HANDLE v2; // eax
  char **v3; // ebx
  char *v4; // eax
  int v6[27]; // [esp+10h] [ebp-16Ch] BYREF
  char Buffer[256]; // [esp+7Ch] [ebp-100h] BYREF

  v0 = 0;
  v1 = *(_DWORD *)(*(_DWORD *)dword_118ABE08 + 60);
  dword_10A9D070 = v1;
  if ( dword_10AA2A6C )
  {
    v2 = sub_1000B680(v1, name, 0, 0, (int)v6);
    dword_10A9E360[0] = (int)v2;
    if ( g_aImagesWork1aBmFilepath && !v2 )
    {
      sprintf(Buffer, aDdrawDoinitLoa);
      sub_1005F580();
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)dword_10AA2904 + 32))(dword_10AA2904);
    sub_1005F5A0(0, 0, 0, dword_100AB56C, dword_100AB57C);
    (*(void (__thiscall **)(void *))(*(_DWORD *)dword_10AA2904 + 20))(dword_10AA2904);
    if ( dword_10A9E360[0] )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_10A9E360[0] + 8))(dword_10A9E360[0]);
      dword_10A9E360[0] = 0;
    }
  }
  v3 = &g_aImagesWork1aBmFilepath;
  ++dword_10AA2A6C;
  do
  {
    if ( *v3 )
    {
      v4 = (char *)sub_1000B680(dword_10A9D070, *v3, 0, 0, (int)v6);
      *(v3 - 28) = v4;
      if ( *v3 && !v4 )
      {
        sprintf(Buffer, "DDraw_DoInit: Bitmap %d failed to load!", v0);
        sub_1005F580();
      }
      LOWORD(dword_10AA28D4) = dword_10AA28D4 + 1;
      qmemcpy(v3 - 27, v6, 0x6Cu);
      sub_1000BA40((int)*(v3 - 28), 0xFF00u);
    }
    v3 += 29;
    ++v0;
  }
  while ( (int)v3 < (int)&unk_10AA2584 );
  return 1;
}
// 100AB57C: using guessed type int dword_100AB57C;
// 10A9E360: using guessed type int dword_10A9E360[];
// 10AA28D4: using guessed type int dword_10AA28D4;
// 10AA2A6C: using guessed type int dword_10AA2A6C;
// 118ABE08: using guessed type int dword_118ABE08;
