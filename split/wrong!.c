//----- (10073F60) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
HMODULE loadBrstringDll()
{
  HMODULE result; // eax
  CHK_File *v1; // esi
  HINSTANCE v2; // ebx
  void *v3; // edx
  int v4; // eax
  UINT v5; // edi
  _DWORD *v6; // esi
  int v7; // eax
  DWORD *v8; // [esp-8h] [ebp-14h]

  memset(&unk_11829374, 0, 0x4B8u);
  result = (HMODULE)g_brstring;
  if ( !g_brstring )
  {
    v1 = CHK_FReadOpen(filename);
    Size = CHK_GetFileSize(v1, v8);
    CHK_FClose(v1);
    result = LoadLibraryA(filename);
    v2 = result;
    if ( result )
    {
      v3 = malloc(Size);
      g_brstring = v3;
      if ( v3 )
      {
        v4 = dword_11829830;
        v5 = 1;
        v6 = &unk_11829374;
        do
        {
          v7 = LoadStringA(v2, v5, (LPSTR)v3 + v4, Size - v4);
          v3 = g_brstring;
          if ( v7 )
          {
            v4 = dword_11829830 + v7 + 1;
            *v6 = (char *)g_brstring + dword_11829830;
            dword_11829830 = v4;
          }
          else
          {
            v4 = dword_11829830;
          }
          ++v6;
          ++v5;
        }
        while ( (int)v6 < (int)&g_brstring );
      }
      result = (HMODULE)FreeLibrary(v2);
    }
  }
  return result;
}
// 1007402F: positive sp value 8 has been found
// 10073F8E: variable 'v8' is possibly undefined
// 11829830: using guessed type int dword_11829830;
