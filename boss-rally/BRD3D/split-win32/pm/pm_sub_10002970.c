#include "types-win32.h"
//----- (10002970) --------------------------------------------------------
int pm_sub_10002970() {
    int v0; // eax

    if (gPlayMusic && dword_10220CD0) {
        v0 = pm_sub_10002910() + 1;
        dword_10220CD4 = v0;
        if (v0 > playParmsPlayTo) {
            v0 = playParmsPlayTo;
            dword_10220CD4 = playParmsPlayTo;
        }
        pm_sub_100027C0(v0);
    }
    return 1;
}
// 100940A4: using guessed type int gPlayMusic;
// 10220C38: using guessed type int playParmsPlayTo;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
