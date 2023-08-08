#include "types-win32.h"
//----- (10042EE0) --------------------------------------------------------
int sub_10042EE0() {
    int v0;         // eax
    int v1;         // esi
    int v2;         // eax
    int v3;         // eax
    int v4;         // esi
    int v5;         // eax
    const char *v6; // eax
    LPCSTR v8;      // [esp-4h] [ebp-Ch]

    if (dword_10AA33D4) {
        v0 = dword_100AC648 + 1;
        dword_100AC648 = v0;
        if (v0 > (dword_10AA28FC != 0 ? 14 : 11)) {
            v0 = 0;
            dword_100AC648 = 0;
        }
        v1 = v0;
        if (!sub_1003F2B0(v0)) {
            do {
                v2 = dword_100AC648 + 1;
                dword_100AC648 = v2;
                if (v2 <= (dword_10AA28FC != 0 ? 14 : 11)) {
                    if (v2 == v1)
                        goto LABEL_19;
                } else {
                    v2 = 0;
                    dword_100AC648 = 0;
                }
            } while (!sub_1003F2B0(v2));
        }
    } else if (dword_10AA33D0[0]) {
        v3 = --dword_100AC648;
        if (dword_100AC648 < 0) {
            v3 = dword_10AA28FC != 0 ? 14 : 11;
            dword_100AC648 = v3;
        }
        v4 = v3;
        if (!sub_1003F2B0(v3)) {
            do {
                v2 = --dword_100AC648;
                if (dword_100AC648 >= 0) {
                    if (v2 == v4)
                        goto LABEL_19;
                } else {
                    v2 = dword_10AA28FC != 0 ? 14 : 11;
                    dword_100AC648 = v2;
                }
            } while (!sub_1003F2B0(v2));
        }
    }
    v2 = dword_100AC648;
LABEL_19:
    v5 = dword_100AC4D8[v2];
    g_chosenTrack = v5;
    if (unk) {
        v8 = getCaptionString(dword_100AC308[v5]);
        v6 = getCaptionString(0xB8u);
        sprintf(byte_10A9DD28, v6, v8);
        if (((_BYTE)stringOffsets[g_chosenTrack][1] & 0x10) != 0)
            strcat(byte_10A9DD28, getCaptionString(0xB0u));
        sub_1003D210(g_HWND, dword_10A9D008, 1);
        strcpy(byte_10A9DD28, String2);
    }
    return 1;
}
// 100AC648: using guessed type int dword_100AC648;
// 100B380C: using guessed type int g_chosenTrack;
// 100BD2A8: using guessed type char **stringOffsets[16];
// 10AA28FC: using guessed type int dword_10AA28FC;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
