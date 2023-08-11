#include "types-win32.h"
//----- (10071870) --------------------------------------------------------
int *sub_10071870() {
  _DWORD ebp1;          // ebp
  _DWORD ebx1;          // ebx
  _DWORD edi1;          // edi
  _DWORD esi1;          // esi
  _DWORD ecx2;          // ecx
  _DWORD eax6;          // eax
  _DWORD edi11;         // edi
  _DWORD ebx11;         // ebx
  _DWORD edx12;         // edx
  _DWORD esi12;         // esi
  _DWORD edi19;         // edi
  _DWORD ebp19;         // ebp
  _DWORD ebx19;         // ebx
  _DWORD esi19;         // esi
  _DWORD eax20;         // eax
  _DWORD eax25;         // eax
  double st7_27;        // st7
  _DWORD eax29;         // eax
  _DWORD ecx32;         // ecx
  int *result;          // eax
  _DWORD edx33;         // edx
  _DWORD NumOfElements; // [esp+10h] [ebp-20h]
  _DWORD var1C;         // [esp+14h] [ebp-1Ch]
  _DWORD var18;         // [esp+18h] [ebp-18h]
  HANDLE Handles;       // [esp+20h] [ebp-10h]
  int varC;             // [esp+24h] [ebp-Ch]
  HANDLE var8[2];       // [esp+28h] [ebp-8h]

  ebp1 = 0;
  ebx1 = 15;
  edi1 = (float *)&unk_11826B54;
  esi1 = (unsigned int *)&unk_1178FEE4;
  do {
    ecx2 = (HANDLE) * (esi1 - 602);
    Handles = dword_11826B00;
    varC = ecx2;
    if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
        ExitThread(0);
    if ((*(esi1 - 591) & 0x3F) >= 2 && (*(esi1 - 591) & 0x3F) < 5) {
        eax6 = *esi1;
        if (*esi1) {
            *((_DWORD *)edi1 - 1) = ebx1;
            ++ebp1;
            *edi1 = (float)eax6;
            edi1 += 2;
        }
    }
    ReleaseMutex((HANDLE) * (esi1 - 602));
    esi1 -= 603;
    --ebx1;
  } while ((int)esi1 >= (int)dword_11787190);
  if (ebp1) {
    qsort(&unk_11826B50, ebp1, 8u, sub_10071B60);
    if ((int)(ebp1 - 1) >= 0) {
        edi11 = (_DWORD *)((char *)&unk_11826B50 + 8 * ebp1 - 8);
        ebx11 = ebp1;
        do {
            edx12 = 603 * *edi11;
            Handles = dword_11826B00;
            esi12 = &dword_11786828 + edx12;
            varC = *esi12;
            if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
                ExitThread(0);
            if (((unsigned int)esi12[11] & 0x3F) >= 2 && ((unsigned int)esi12[11] & 0x3F) < 5 &&
                esi12[602]) {
                sub_1003DB50((_DWORD *)dword_10A9D008, (int)esi12[1], dword_11826AF8);
                esi12[11] = (HANDLE)(dword_11826AF8 + 5);
                ++dword_11826AF8;
            }
            ReleaseMutex(*esi12);
            edi11 -= 2;
            --ebx11;
        } while (ebx11);
    }
  }
  edi19 = 15;
  NumOfElements = 0;
  var18 = 15;
  var1C = (char *)&unk_11826BCC;
  ebp19 = (float *)&unk_11826B54;
  ebx19 = (int *)&unk_11826B50;
  esi19 = (char *)&unk_1178F5A8;
  do {
    eax20 = (void *)*((_DWORD *)esi19 - 11);
    var8[0] = dword_11826B00;
    var8[1] = eax20;
    if (!WaitForMultipleObjects(2u, var8, 0, 0xFFFFFFFF))
        ExitThread(0);
    if ((*(_DWORD *)esi19 & 0x3Fu) >= 2 && (*(_DWORD *)esi19 & 0x3Fu) < 5 &&
        *(float *)&esi19[160 * *((_DWORD *)esi19 + 331) + 164] >= 4188888.0) {
        sub_1003DB50((_DWORD *)dword_10A9D008, *((_DWORD *)esi19 - 10), dword_11826AF8);
        eax25 = dword_11826AF8 + 1;
        *(_DWORD *)esi19 = dword_11826AF8 + 5;
        dword_11826AF8 = eax25;
    }
    Handles = *(HANDLE *)esi19;
    if (((unsigned __int8)Handles & 0x3Fu) < 5) {
        if (((unsigned __int8)Handles & 0x3Fu) < 2) {
            *((_DWORD *)var1C - 1) = edi19;
            var1C -= 8;
            *((float *)var1C + 2) = -10000000.0 - (double)var18;
        } else {
            eax29 = *((_DWORD *)esi19 + 331);
            *ebx19 = edi19;
            ebx19 += 2;
            *ebp19 = *(float *)&esi19[160 * eax29 + 164];
            ++NumOfElements;
            ebp19 += 2;
        }
    } else {
        st7_27 = (double)(int)Handles;
        *ebx19 = edi19;
        ebx19 += 2;
        ++NumOfElements;
        ebp19 += 2;
        *(ebp19 - 2) = 10000000.0 - st7_27;
    }
    ReleaseMutex(*((HANDLE *)esi19 - 11));
    esi19 -= 2412;
    var18 = --edi19;
  } while ((int)esi19 >= (int)dword_11786854);
  qsort(&unk_11826B50, NumOfElements, 8u, sub_10071B60);
  ecx32 = 0;
  result = (int *)&unk_11826B50;
  do {
    edx33 = *result;
    result += 2;
    dword_11826B08[edx33] = ecx32++;
  } while ((int)result < (int)&dword_11826BD0);
  return result;
}
// 1007E2A0: using guessed type int __cdecl qsort(_DWORD, _DWORD, _DWORD, _DWORD);
// 11826AF8: using guessed type int dword_11826AF8;
