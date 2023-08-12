#include "types-win32.h"
//----- (100716E0) --------------------------------------------------------
BOOL sub_100716E0() {
  HANDLE *v0;     // esi
  HANDLE v1;      // ecx
  bool v2;        // bl
  BOOL result;    // eax
  int *v4;        // edi
  HANDLE *v5;     // esi
  HANDLE v6;      // edx
  bool v7;        // bl
  HANDLE v8;      // ecx
  bool v9;        // bl
  HANDLE *v10;    // esi
  HANDLE v11;     // eax
  int v12;        // eax
  HANDLE Handles; // [esp+10h] [ebp-10h] BYREF
  HANDLE v14;     // [esp+14h] [ebp-Ch]
  HANDLE v15;     // [esp+18h] [ebp-8h] BYREF
  HANDLE v16;     // [esp+1Ch] [ebp-4h]

  v0 = &dword_11786828;
  while (1) {
    v1 = *v0;
    Handles = dword_11826B00;
    v14 = v1;
    if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
      ExitThread(0);
    v2 = ((unsigned int)v0[11] & 0x3F) >= 2 && ((unsigned int)v0[11] & 0x3F) != 3;
    result = ReleaseMutex(*v0);
    if (v2)
      break;
    v0 += 603;
    if ((int)v0 >= (int)&dword_1178FEE8) {
      v4 = dword_1178FEF8;
      v5 = &dword_11786828;
      while (1) {
        v6 = *v5;
        Handles = dword_11826B00;
        v14 = v6;
        if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
          ExitThread(0);
        v7 = ((_BYTE)v5[11] & 0x3F) == 3;
        ReleaseMutex(*v5);
        if (v7) {
          v8 = (HANDLE)*v4;
          v15 = dword_11826B00;
          v16 = v8;
          if (!WaitForMultipleObjects(2u, &v15, 0, 0xFFFFFFFF))
              ExitThread(0);
          v9 = (v4[11] & 0x3F) != 3;
          result = ReleaseMutex((HANDLE)*v4);
          if (v9)
              break;
        }
        v5 += 603;
        v4 += 10251;
        if ((int)v5 >= (int)&dword_1178FEE8) {
          v10 = &dword_11786828;
          do {
              v11 = *v10;
              v15 = dword_11826B00;
              v16 = v11;
              if (!WaitForMultipleObjects(2u, &v15, 0, 0xFFFFFFFF))
                  ExitThread(0);
              if (((_BYTE)v10[11] & 0x3F) == 3) {
                  v12 = dword_11828D10;
                  v10[11] = (HANDLE)4;
                  dword_1178FEF0 = 1;
                  dword_11828D14 = v12 + 3000;
              }
              result = ReleaseMutex(*v10);
              v10 += 603;
          } while ((int)v10 < (int)&dword_1178FEE8);
          return result;
        }
      }
      return result;
    }
  }
  return result;
}
// 1178FEE8: using guessed type int dword_1178FEE8;
// 1178FEF0: using guessed type int dword_1178FEF0;
// 1178FEF8: using guessed type int dword_1178FEF8[];
// 11828D10: using guessed type int dword_11828D10;
// 11828D14: using guessed type int dword_11828D14;
