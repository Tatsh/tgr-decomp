#include "../../types-win32.h"
//----- (10072170) --------------------------------------------------------
int __cdecl sub_10072170(_DWORD *a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int v5; // [esp-Ch] [ebp-28h]
  int v6; // [esp-4h] [ebp-20h]
  int v7; // [esp+10h] [ebp-Ch]
  HANDLE Handles[2]; // [esp+14h] [ebp-8h] BYREF

  v1 = 0;
  v7 = 0;
  do
  {
    Handles[0] = dword_11826B00;
    Handles[1] = *(&dword_11786828 + 603 * v1);
    if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
      ExitThread(0);
    if ( (dword_11786854[603 * v1] & 0x3F) != 0 && sub_10073F40(&dword_11826BD0[133 * v1]) > 3 )
    {
      if ( v1 )
      {
        v6 = sub_10073F40(&dword_11826BD0[133 * v1]);
        v3 = sub_10073F50(&dword_11826BD0[133 * v1]);
        if ( sub_1000C4D0(*a1, 1, dword_1178682C[603 * v1], 0, v3, v6) )
          v7 = -1;
      }
      else
      {
        v5 = sub_10073F40(dword_11826BD0);
        v2 = sub_10073F50(dword_11826BD0);
        np_sub_10003580((int)a1, v2, v5, 1);
      }
    }
    ReleaseMutex(*(&dword_11786828 + 603 * v1++));
  }
  while ( v1 < 16 );
  return v7;
}
// 1178682C: using guessed type int dword_1178682C[];
// 11786854: using guessed type int dword_11786854[];
