//----- (10005E70) --------------------------------------------------------
char *__cdecl sub_10005E70(int a1)
{
  WaitForSingleObject(*(&dword_10221328 + 606 * a1), 0xFFFFFFFF);
  strcpy(byte_1022AAF8, &byte_10221898[2424 * a1]);
  ReleaseMutex(*(&dword_10221328 + 606 * a1));
  return byte_1022AAF8;
}
