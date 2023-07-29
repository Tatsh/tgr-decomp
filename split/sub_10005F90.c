//----- (10005F90) --------------------------------------------------------
int __cdecl sub_10005F90(int a1)
{
  int v1; // edi

  WaitForSingleObject(*(&dword_10221328 + 606 * a1), 0xFFFFFFFF);
  v1 = dword_10221C9C[606 * a1];
  ReleaseMutex(*(&dword_10221328 + 606 * a1));
  if ( v1 < 0 )
    v1 = 0;
  return v1;
}
