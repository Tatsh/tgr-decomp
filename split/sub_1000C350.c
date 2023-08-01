//----- (1000C350) --------------------------------------------------------
int __cdecl sub_1000C350(int a1)
{
  SIZE_T *v1; // ebx
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // edi
  HGLOBAL v6; // eax
  HGLOBAL v7; // eax
  HGLOBAL v8; // eax
  HGLOBAL v9; // eax
  HGLOBAL v10; // eax
  SIZE_T dwBytes; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  v1 = (SIZE_T *)a1;
  v2 = 0;
  dwBytes = 0;
  while ( 1 )
  {
    do
    {
      v3 = (_DWORD *)*v1;
      v4 = *(_DWORD *)*v1;
      v13 = 0;
      a1 = 0;
      v5 = (*(int (__stdcall **)(_DWORD *, int *, int *, int, _DWORD *, SIZE_T *))(v4 + 100))(
             v3,
             &v13,
             &a1,
             1,
             v2,
             &dwBytes);
      if ( v5 != -2005467106 )
        break;
      if ( v2 )
      {
        v6 = GlobalHandle(v2);
        GlobalUnlock(v6);
        v7 = GlobalHandle(v2);
        GlobalFree(v7);
      }
      v8 = GlobalAlloc(GHND, dwBytes);
      v2 = GlobalLock(v8);
      if ( !v2 )
        v5 = -2147024882;
    }
    while ( v5 == -2005467106 );
    if ( v5 < 0 )
      break;
    if ( dwBytes >= 4 )
    {
      if ( v13 )
        sub_1000BAF0(v1, (int)v2, dwBytes, v13);
      else
        sub_1000C170((int)v1, v2);
    }
  }
  if ( v2 )
  {
    v9 = GlobalHandle(v2);
    GlobalUnlock(v9);
    v10 = GlobalHandle(v2);
    GlobalFree(v10);
  }
  return 0;
}
// 1000C40E: conditional instruction was optimized away because of 'edi.4>=0'
