//----- (1000B390) --------------------------------------------------------
HRESULT __thiscall sub_1000B390(LPARAM lParam, int a2, int a3, int a4)
{
  gameSpecificUnk1 *v5; // edi
  HRESULT result; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  int v11; // edx
  int v12; // eax
  HRESULT v13; // edi
  int v14; // ecx
  int v15; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h] BYREF
  int v17; // [esp+18h] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8h] BYREF
  int v19; // [esp+20h] [ebp-4h] BYREF

  v5 = sub_1001A550((gameSpecificUnk1 *)a2);
  if ( !v5 )
    return -2005522670;
  if ( a3 )
  {
    v7 = a3 + 4;
  }
  else
  {
    v8 = *(_DWORD *)(lParam + 52);
    if ( v8 )
      v7 = v8 + 4;
    else
      v7 = 0;
  }
  if ( a4 )
  {
    sub_1001AC80((unk0 *)a4, &v17, &v16, &v15, &a2);
  }
  else
  {
    v17 = 640;
    v16 = 480;
    v15 = 16;
    a2 = 0;
  }
  if ( !sub_1001A6E0((int)v5, v7, v17, v16, v15, a2, &v18, &v19) )
    return -2005522671;
  v9 = *(_DWORD *)(lParam + 44);
  v10 = *(_DWORD *)(lParam + 48);
  a3 = *(_DWORD *)(lParam + 52);
  sub_1000A350((gameSpecificUnk0 *)lParam);
  v11 = v18;
  v12 = v19;
  *(_DWORD *)(lParam + 44) = v5;
  *(_DWORD *)(lParam + 48) = v11;
  *(_DWORD *)(lParam + 52) = v12;
  v13 = sub_1000A2C0((gameSpecificUnk0 *)lParam);
  if ( v13 >= 0 )
  {
    SendMessageA(*(HWND *)(lParam + 32), 0xBD2u, 0, 0);
    result = 0;
  }
  else
  {
    sub_1000A350((gameSpecificUnk0 *)lParam);
    v14 = a3;
    *(_DWORD *)(lParam + 44) = v9;
    *(_DWORD *)(lParam + 52) = v14;
    *(_DWORD *)(lParam + 48) = v10;
    sub_1000A2C0((gameSpecificUnk0 *)lParam);
    result = v13;
  }
  return result;
}
