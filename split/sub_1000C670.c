//----- (1000C670) --------------------------------------------------------
int sub_1000C670()
{
  int v1; // esi
  HGLOBAL v2; // eax
  HGLOBAL v3; // eax
  LPCVOID pMem; // [esp+0h] [ebp-4h] BYREF

  pMem = 0;
  if ( sub_1003D0B0(unk, (LPDWORD)&pMem) < 0 )
    return 0xFFFF;
  v1 = *((_DWORD *)pMem + 11);
  v2 = GlobalHandle(pMem);
  GlobalUnlock(v2);
  v3 = GlobalHandle(pMem);
  GlobalFree(v3);
  return v1;
}
