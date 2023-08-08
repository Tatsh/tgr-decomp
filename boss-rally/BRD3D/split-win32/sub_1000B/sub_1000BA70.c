#include "../types-win32.h"
//----- (1000BA70) --------------------------------------------------------
void sub_1000BA70() {
    int v0;      // edx
    bool v1;     // zf
    int v2;      // eax
    __int16 *v3; // ecx

    if (dword_10277B20) {
        v0 = dword_1039B6C0;
        while (1) {
        LABEL_3:
            v0 += dword_10277B20;
            dword_1039B6C0 = v0;
            if (v0 >= g_TrackInstances) {
                v0 = 0;
                dword_1039B6C0 = 0;
            }
            v1 = v0 == 0;
            if (v0 < 0) {
                v0 = g_TrackInstances - 1;
                dword_1039B6C0 = g_TrackInstances - 1;
                v1 = g_TrackInstances == 1;
            }
            if (v1)
                break;
            v2 = 0;
            if (dword_103643B4 > 0) {
                v3 = word_10362F28;
                while (v0 != (unsigned __int16)*v3) {
                    ++v2;
                    ++v3;
                    if (v2 >= dword_103643B4)
                        goto LABEL_3;
                }
                break;
            }
        }
        dword_10277B20 = 0;
    }
}
// 10277B20: using guessed type int dword_10277B20;
// 103643B4: using guessed type int dword_103643B4;
// 1039B6C0: using guessed type int dword_1039B6C0;
// 106C7CAC: using guessed type int g_TrackInstances;
