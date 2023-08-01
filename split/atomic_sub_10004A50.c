//----- (10004A50) --------------------------------------------------------
BOOL __cdecl atomic_sub_10004A50(int a1, int a2)
{
  WaitForSingleObject((HANDLE)dword_10221328[606 * a1], INFINITE);
  dword_10221354[606 * a1] = a2;
  return ReleaseMutex((HANDLE)dword_10221328[606 * a1]);
}
// 10221328: using guessed type int dword_10221328[];
// 10221354: using guessed type int dword_10221354[];
