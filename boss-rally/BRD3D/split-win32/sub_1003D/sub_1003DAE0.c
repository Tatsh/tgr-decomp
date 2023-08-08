#include "../types-win32.h"
//----- (1003DAE0) --------------------------------------------------------
int sub_1003DAE0() {
    int result; // eax

    if (dword_10A9D008) {
        result = *(_DWORD *)(dword_10A9D008 + 8);
        if (result)
            result = sub_1003DA90((int *)dword_10A9D008, *(_DWORD *)(dword_10A9D008 + 8));
    }
    return result;
}
