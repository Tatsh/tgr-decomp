#include "types-win32.h"
//----- (1003A530) --------------------------------------------------------
int sub_1003A530() {
    int result; // eax
    int v1;     // edi
    int *v2;    // esi
    int v3;     // edi
    int *v4;    // esi
    int v5;     // edi
    int *v6;    // esi

    if (!dword_10A9BBB8) {
        sub_1003A4D0();
        dword_10A9BBB8 = 1;
    }
    if (*(_DWORD *)&gUnk06594.gap1C8[12504]) {
        sub_1003A200();
        result = dword_100B36F8;
        v1 = 0;
        if (dword_100B36F8 > 0) {
            v2 = &dword_10ACD4F8;
            do {
                if (*v2) {
                    meth_10039020(*v2);
                    meth_10039200(*v2);
                }
                result = dword_100B36F8;
                ++v1;
                v2 += 32;
            } while (v1 < dword_100B36F8);
        }
    } else if (*(_DWORD *)&gUnk06594.gap1C8[12500] || *(_DWORD *)&gUnk06594.gap1C8[12508]) {
        result = dword_100B36F8;
        v5 = 0;
        if (dword_100B36F8 > 0) {
            v6 = &dword_10ACD4F8;
            do {
                if (*v6)
                    meth_10039200(*v6);
                result = dword_100B36F8;
                ++v5;
                v6 += 32;
            } while (v5 < dword_100B36F8);
        }
    } else {
        sub_1003A340();
        result = dword_100B36F8;
        v3 = 0;
        if (dword_100B36F8 > 0) {
            v4 = &dword_10ACD4F8;
            do {
                if (*v4) {
                    meth_10039F20(*v4);
                    meth_10039200(*v4);
                }
                result = dword_100B36F8;
                ++v3;
                v4 += 32;
            } while (v3 < dword_100B36F8);
        }
    }
    return result;
}
// 100B36F8: using guessed type int dword_100B36F8;
// 10A9BBB8: using guessed type int dword_10A9BBB8;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
