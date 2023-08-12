#include "types-win32.h"
//----- (10042CF0) --------------------------------------------------------
int sub_10042CF0() {
    bool v0; // zf
    bool v1; // sf
    bool v2; // of

    dword_100AB3D8 = 1;
    if (dword_10AA33D4) {
        v2 = __OFSUB__(dword_10B4E708 + 1, 9);
        v0 = dword_10B4E708 == 8;
        v1 = dword_10B4E708 - 8 < 0;
        ++dword_10B4E708;
        if (!(v1 ^ v2 | v0)) {
            dword_10B4E708 = 0;
            sub_10060D90();
            return 1;
        }
    } else if (dword_10AA33D0[0]) {
        if (--dword_10B4E708 < 0)
            dword_10B4E708 = 9;
    }
    sub_10060D90();
    return 1;
}
// 100AB3D8: using guessed type int dword_100AB3D8;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10B4E708: using guessed type int dword_10B4E708;
