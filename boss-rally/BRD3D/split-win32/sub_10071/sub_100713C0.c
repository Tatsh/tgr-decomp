#include "../types-win32.h"
//----- (100713C0) --------------------------------------------------------
BOOL sub_100713C0() {
    int i;       // edi
    _DWORD *v1;  // esi
    int v2;      // ebp
    BOOL result; // eax

    dword_1178FEF0 = 0;
    dword_11826AF8 = 0;
    for (i = 0; i < 9648; i += 603) {
        WaitForSingleObject(*(HANDLE *)((char *)&dword_11786828 + i * 4), 0xFFFFFFFF);
        dword_11787184[i] = 0;
        dword_11787188[i] = 0;
        dword_1178718C[i] = 0;
        dword_11787190[i] = 0;
        dword_11786854[i] = 0;
        ReleaseMutex(*(HANDLE *)((char *)&dword_11786828 + i * 4));
        v1 = (_DWORD *)((char *)&unk_11790854 + i * 4);
        v2 = 16;
        do {
            WaitForSingleObject((HANDLE) * (v1 - 599), 0xFFFFFFFF);
            *(v1 - 597) = dword_1178FEEC;
            *v1 = 0;
            v1[1] = 0;
            v1[2] = 0;
            v1[3] = 0;
            *(v1 - 588) = 0;
            result = ReleaseMutex((HANDLE) * (v1 - 599));
            v1 += 9648;
            --v2;
        } while (v2);
    }
    return result;
}
// 11786854: using guessed type int dword_11786854[];
// 11787184: using guessed type int dword_11787184[];
// 11787188: using guessed type int dword_11787188[];
// 1178718C: using guessed type int dword_1178718C[];
// 11787190: using guessed type int dword_11787190[];
// 1178FEEC: using guessed type int dword_1178FEEC;
// 1178FEF0: using guessed type int dword_1178FEF0;
// 11826AF8: using guessed type int dword_11826AF8;
