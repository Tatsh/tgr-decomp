#include "types-win32.h"
//----- (10047250) --------------------------------------------------------
int __cdecl sub_10047250(unk1E214 *a1) {
    if (dword_10AA2AD4) {
        sub_10042410(a1);
    LABEL_5:
        dword_10AA33E4 = 0;
        return -1;
    }
    if (sub_1003E0E0()) {
        sub_100424D0(a1);
        goto LABEL_5;
    }
    return 1;
}
// 10AA2AD4: using guessed type int dword_10AA2AD4;
// 10AA33E4: using guessed type int dword_10AA33E4;
