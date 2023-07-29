//----- (10005960) --------------------------------------------------------
int sub_10005960()
{
  int *v0; // esi
  int *v1; // eax

  v0 = dword_10221334;
  do
  {
    WaitForSingleObject((HANDLE)*(v0 - 3), 0xFFFFFFFF);
    *(v0 - 1) = 0;
    memset(v0, 0, 0x20u);
    v0[8] = 0;
    memset(v0 + 11, 0, 0x20u);
    v0[339] = 0;
    v0[340] = 0;
    v0[341] = -1;
    v0[343] = 0;
    v0[344] = 0;
    v0[342] = 0;
    v0[602] = 0;
    ReleaseMutex((HANDLE)*(v0 - 3));
    v0 += 606;
  }
  while ( (int)v0 < (int)dword_1022AAB4 );
  WaitForSingleObject(hMutex, 0xFFFFFFFF);
  dword_1022AEF8 = -1;
  dword_1022AF08 = 0;
  byte_10220E80 = 0;
  ReleaseMutex(hMutex);
  WaitForSingleObject(hMutex_0, 0xFFFFFFFF);
  memset(&dword_102212D0, 0, 0x40u);
  ReleaseMutex(hMutex_0);
  WaitForSingleObject(hMutex_1, 0xFFFFFFFF);
  dword_10220DD4 = -1;
  ReleaseMutex(hMutex_1);
  WaitForSingleObject(hMutex_2, 0xFFFFFFFF);
  dword_10221318 = -1;
  ReleaseMutex(hMutex_2);
  WaitForSingleObject(hMutex_4, 0xFFFFFFFF);
  dword_1022AAA8 = 0;
  ReleaseMutex(hMutex_4);
  WaitForSingleObject(hMutex_5, 0xFFFFFFFF);
  dword_1022AAF4 = 0;
  ReleaseMutex(hMutex_5);
  WaitForSingleObject(hMutex_6, 0xFFFFFFFF);
  dword_10221314 = 0;
  ReleaseMutex(hMutex_6);
  WaitForSingleObject(hMutex_7, 0xFFFFFFFF);
  dword_10220DD0 = 0;
  ReleaseMutex(hMutex_7);
  WaitForSingleObject(hMutex_8, 0xFFFFFFFF);
  dword_1022AF00 = -1;
  ReleaseMutex(hMutex_8);
  dword_10220DD8 = 0;
  dword_1022AF3C = -1;
  v1 = dword_1022AAB4;
  do
  {
    *(v1 - 1) = 0;
    *v1 = 0;
    v1 += 2;
  }
  while ( (int)v1 < (int)&dword_1022AAF4 );
  dword_1022AF20 = 0;
  dword_106909D8 = 0;
  return 1;
}
// 10220DD0: using guessed type int dword_10220DD0;
// 10220DD4: using guessed type int dword_10220DD4;
// 10220DD8: using guessed type int dword_10220DD8;
// 10220E80: using guessed type char byte_10220E80;
// 102212D0: using guessed type int dword_102212D0;
// 10221314: using guessed type int dword_10221314;
// 10221318: using guessed type int dword_10221318;
// 1022AAA8: using guessed type int dword_1022AAA8;
// 1022AAF4: using guessed type int dword_1022AAF4;
// 1022AEF8: using guessed type int dword_1022AEF8;
// 1022AF00: using guessed type int dword_1022AF00;
// 1022AF08: using guessed type int dword_1022AF08;
// 1022AF20: using guessed type int dword_1022AF20;
// 1022AF3C: using guessed type int dword_1022AF3C;
// 106909D8: using guessed type int dword_106909D8;
