#include "../../types-win32.h"
//----- (10061620) --------------------------------------------------------
void sub_10061620() {
    void **v0; // esi

    sub_100613B0();
    v0 = (void **)&unk_10AA3450;
    do {
        if (*v0) {
            free(*v0);
            *v0 = 0;
        }
        ++v0;
    } while ((int)v0 < (int)&dword_10AA345C);
}
// 10AA345C: using guessed type int dword_10AA345C;
