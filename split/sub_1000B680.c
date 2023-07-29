//----- (1000B680) --------------------------------------------------------
HANDLE __cdecl sub_1000B680(int a1, LPCSTR name, int a3, int cy, int a5)
{
  HMODULE v5; // eax
  HANDLE v6; // ebx
  HANDLE result; // eax
  int v8; // ecx
  int v9; // [esp-18h] [ebp-B0h]
  int v10; // [esp+10h] [ebp-88h] BYREF
  char pv[4]; // [esp+14h] [ebp-84h] BYREF
  int v12; // [esp+18h] [ebp-80h]
  int v13; // [esp+1Ch] [ebp-7Ch]
  int v14[27]; // [esp+2Ch] [ebp-6Ch] BYREF

  v5 = GetModuleHandleA(0);
  v6 = LoadImageA(v5, name, 0, a3, cy, 0x2000u);
  if ( v6 || (result = LoadImageA(0, name, 0, a3, cy, 0x2010u), (v6 = result) != 0) )
  {
    GetObjectA(v6, 24, pv);
    memset(v14, 0, sizeof(v14));
    v14[2] = v13;
    v14[3] = v12;
    v8 = *(_DWORD *)a1;
    v14[0] = 108;
    v14[1] = 7;
    v14[26] = 64;
    if ( (*(int (__stdcall **)(int, int *, int *, _DWORD))(v8 + 24))(a1, v14, &v10, 0) )
    {
      result = 0;
    }
    else
    {
      v9 = v10;
      qmemcpy((void *)a5, v14, 0x6Cu);
      sub_1000B820(v9, v6, 0, 0, 0, 0);
      DeleteObject(v6);
      result = (HANDLE)v10;
    }
  }
  return result;
}
