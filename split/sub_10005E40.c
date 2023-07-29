//----- (10005E40) --------------------------------------------------------
int __cdecl sub_10005E40(int a1)
{
  int v1; // esi

  WaitForSingleObject(hMutex_0, 0xFFFFFFFF);
  v1 = dword_102212D0[a1];
  ReleaseMutex(hMutex_0);
  return v1;
}
