//----- (10007BA0) --------------------------------------------------------
void setupMemoryStatus()
{
  struct _MEMORYSTATUS g_memoryStatus; // [esp+0h] [ebp-20h] BYREF

  g_memoryStatus.dwLength = 32;
  GlobalMemoryStatus(&g_memoryStatus);
  g_dwTotalPhys = g_memoryStatus.dwTotalPhys;
}
// 1022B348: using guessed type int g_dwTotalPhys;
