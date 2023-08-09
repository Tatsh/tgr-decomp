#include "types-win32.h"
//----- (10079550) --------------------------------------------------------
int sub_10079550() {
    int result; // eax

    result = --dword_118ABE00;
    if (dword_118ABE00 >= 0) {
        result = dword_118ABE00;
        if (!dword_118ABE00) {
            if (gDirectInputEffect) {
                gDirectInputEffect->lpVtbl->Release(gDirectInputEffect);
                gDirectInputEffect = 0;
            }
            if (gDirectInputEffect0) {
                gDirectInputEffect0->lpVtbl->Release(gDirectInputEffect0);
                gDirectInputEffect0 = 0;
            }
            result = (int)gDirectInputDevice2A;
            if (gDirectInputDevice2A) {
                gDirectInputDevice2A->lpVtbl->Unacquire(gDirectInputDevice2A);
                result = gDirectInputDevice2A->lpVtbl->Release(gDirectInputDevice2A);
                gDirectInputDevice2A = 0;
            }
        }
    } else {
        dword_118ABE00 = 0;
    }
    return result;
}
// 118ABE00: using guessed type int dword_118ABE00;
