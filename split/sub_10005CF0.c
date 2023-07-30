//----- (10005CF0) --------------------------------------------------------
int __cdecl sub_10005CF0(int a1)
{
  int v1; // edi

  WaitForSingleObject(*(&dword_10221328 + 606 * a1), INFINITE);
  v1 = dword_1022132C[606 * a1];
  ReleaseMutex(*(&dword_10221328 + 606 * a1));
  return v1;
}
// 1022132C: using guessed type int dword_1022132C[];
