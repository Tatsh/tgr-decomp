//----- (1000C170) --------------------------------------------------------
void __cdecl sub_1000C170(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  CHAR *v5; // esi
  const CHAR *v6; // edi
  int v7; // ebp
  int v8; // eax
  HGLOBAL v9; // eax
  CHAR *v10; // eax
  int v11; // ecx
  int *v12; // eax
  int v13; // eax
  const CHAR *v14; // edi
  int v15; // ebx
  int v16; // eax
  HGLOBAL v17; // eax
  CHAR *v18; // eax
  HGLOBAL v19; // eax
  HGLOBAL v20; // eax
  CHAR OutputString[260]; // [esp+10h] [ebp-104h] BYREF

  if ( *(_DWORD *)(a1 + 12) )
    sub_1000C000(a1, a2, a3, a4, a5);
  else
    sub_1000BEA0(a1, a2);
  if ( !dword_100AC300 )
    return;
  v5 = 0;
  if ( *a2 == 3 )
  {
    v14 = (const CHAR *)a2[8];
    if ( !v14 )
      v14 = aUnknown;
    v15 = lstrlenA(aSJoinedTheGame);
    v16 = lstrlenA(v14);
    v17 = GlobalAlloc(0x42u, v15 + v16 + 1);
    v18 = (CHAR *)GlobalLock(v17);
    v5 = v18;
    if ( v18 )
    {
      wsprintfA(v18, "%s joined the game.\r\n", v14);
LABEL_21:
      if ( v5 )
      {
        if ( g_HWND )
        {
          PostMessageA(g_HWND, 0x501u, 0, (LPARAM)v5);
        }
        else
        {
          v19 = GlobalHandle(v5);
          GlobalUnlock(v19);
          v20 = GlobalHandle(v5);
          GlobalFree(v20);
        }
      }
      return;
    }
  }
  else
  {
    if ( *a2 != 5 )
    {
      if ( *a2 == 260 )
        sub_1003CE80();
      goto LABEL_21;
    }
    v6 = (const CHAR *)a2[9];
    if ( !v6 )
      v6 = aUnknown;
    v7 = lstrlenA(String);
    v8 = lstrlenA(v6);
    v9 = GlobalAlloc(0x42u, v7 + v8 + 1);
    v10 = (CHAR *)GlobalLock(v9);
    v5 = v10;
    if ( v10 )
    {
      wsprintfA(v10, "%s left the game.\r\n", v6);
      v11 = 0;
      v12 = dword_10AA2538;
      while ( *v12 != a2[2] )
      {
        v12 += 3;
        ++v11;
        if ( (int)v12 >= (int)&dword_10AA2598 )
          goto LABEL_21;
      }
      v13 = 3 * v11;
      dword_10AA2538[v13] = -1;
      dword_10AA253C[v13] = 0;
      sprintf(OutputString, "Destroy Player message received, ID: %d\n", a2[2]);
      OutputDebugStringA(OutputString);
      goto LABEL_21;
    }
  }
}
// 100AC300: using guessed type int dword_100AC300;
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA2598: using guessed type int dword_10AA2598;
