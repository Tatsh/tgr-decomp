#include "../../types-win32.h"
//----- (1000C5D0) --------------------------------------------------------
int __cdecl sub_1000C5D0(int a1, LPVOID lpParameter)
{
  HANDLE v2; // eax

  if ( !dword_10277B60 )
  {
    InitializeCriticalSection(&CriticalSection);
    dword_10277B60 = 1;
  }
  *(_DWORD *)lpParameter = 0;
  *((_DWORD *)lpParameter + 1) = 0;
  *((_DWORD *)lpParameter + 2) = 0;
  *((_DWORD *)lpParameter + 3) = 0;
  *((_DWORD *)lpParameter + 4) = 0;
  v2 = CreateEventA(0, 0, 0, 0);
  *((_DWORD *)lpParameter + 1) = v2;
  if ( v2 )
  {
    hEvent = CreateEventA(0, 0, 0, 0);
    if ( hEvent )
    {
      dword_10277B54 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)StartAddress, lpParameter, 0, &ThreadId);
      if ( dword_10277B54 )
        return 0;
    }
  }
  sub_1000C510((HANDLE *)lpParameter);
  return -2147024882;
}
// 10277B60: using guessed type int dword_10277B60;
