#include "types-win32.h"
//----- (10005EE0) --------------------------------------------------------
BOOL __cdecl np_sub_10005EE0(int a1, const char *a2) {
    WaitForSingleObject(gMutexes[606 * a1], INFINITE);
    strcpy(&byte_10221898[2424 * a1], a2);
    return ReleaseMutex(gMutexes[606 * a1]);
}
