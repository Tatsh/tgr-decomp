#include "../types-win32.h"
//----- (100773D0) --------------------------------------------------------
BOOL sub_100773D0() {
    BOOL result; // eax

    if (g_DirectInputDevice2A)
        result = g_DirectInputDevice2A->lpVtbl->Acquire(g_DirectInputDevice2A) >= 0;
    else
        result = 0;
    return result;
}
