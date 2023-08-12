#include "types-win32.h"
//----- (10040040) --------------------------------------------------------
int __cdecl sub_10040040(int a1, int a2) {
    int result; // eax
    _DWORD *v3; // ecx
    _DWORD *v4; // ecx
    _DWORD *v5; // ecx
    _DWORD *v6; // ecx

    switch (a1) {
    case 0:
        result = 0;
        v3 = &unk_100B4338;
        while (*v3 != a2) {
            v3 += 9;
            ++result;
            if ((int)v3 >= (int)aRcfg)
                return 0;
        }
        break;
    case 1:
        result = 0;
        v6 = &unk_10B4E910;
        while (*v6 != a2) {
            v6 += 9;
            ++result;
            if ((int)v6 >= (int)gBossRallyCfgPath)
                goto LABEL_17;
        }
        break;
    case 2:
        result = 0;
        v5 = &unk_10B4E910;
        while (*v5 != a2) {
            v5 += 9;
            ++result;
            if ((int)v5 >= (int)gBossRallyCfgPath)
                return 0;
        }
        break;
    case 3:
        result = 0;
        v4 = &unk_10B4E7A8;
        while (*v4 != a2) {
            v4 += 9;
            ++result;
            if ((int)v4 >= (int)&unk_10B4E910)
                return 0;
        }
        break;
    default:
    LABEL_17:
        result = 0;
        break;
    }
    return result;
}
