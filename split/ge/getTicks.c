//----- (10075020) --------------------------------------------------------
DWORD getTicks()
{
  DWORD result; // eax
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  if ( needToCheckSupportHRPC )
  {
    supportsHRPerformanceCounter = QueryPerformanceFrequency(&Frequency);
    QueryPerformanceCounter(&PerformanceCount);
    performanceSomething = (1000 * PerformanceCount.QuadPart + 500) / Frequency.QuadPart;
    needToCheckSupportHRPC = 0;
  }
  if ( supportsHRPerformanceCounter && QueryPerformanceCounter(&PerformanceCount) )
    result = (1000 * PerformanceCount.QuadPart + 500) / Frequency.QuadPart - performanceSomething;
  else
    result = timeGetTime();
  return result;
}
// 100BBAD4: using guessed type int needToCheckSupportHRPC;
// 118AB128: using guessed type int supportsHRPerformanceCounter;
// 118AB130: using guessed type int performanceSomething;
