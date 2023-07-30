//----- (1000B680) --------------------------------------------------------
HANDLE __cdecl sub_1000B680(int a1, LPCSTR filepath, int cx_, int cy, int a5)
{
  HINSTANCE hInst; // eax
  HANDLE result_1; // ebx
  HANDLE result; // eax
  int v8; // ecx
  int v9; // [esp-18h] [ebp-B0h]
  int a1a; // [esp+10h] [ebp-88h] BYREF
  BITMAP bitmap; // [esp+14h] [ebp-84h] BYREF
  int v12[27]; // [esp+2Ch] [ebp-6Ch] BYREF

  hInst = GetModuleHandleA(0);
  result_1 = LoadImageA(hInst, filepath, 0, cx_, cy, LR_CREATEDIBSECTION);
  if ( result_1 || (result = LoadImageA(0, filepath, 0, cx_, cy, 0x2010u), (result_1 = result) != 0) )
  {
    GetObjectA(result_1, 24, &bitmap);
    memset(v12, 0, sizeof(v12));
    v12[2] = bitmap.bmHeight;
    v12[3] = bitmap.bmWidth;
    v8 = *(_DWORD *)a1;
    v12[0] = 108;
    v12[1] = 7;
    v12[26] = 64;
    if ( (*(int (__stdcall **)(int, int *, int *, _DWORD))(v8 + 24))(a1, v12, &a1a, 0) )
    {
      result = 0;
    }
    else
    {
      v9 = a1a;
      qmemcpy((void *)a5, v12, 0x6Cu);
      sub_1000B820(v9, result_1, 0, 0, 0, 0);
      DeleteObject(result_1);
      result = (HANDLE)a1a;
    }
  }
  return result;
}
