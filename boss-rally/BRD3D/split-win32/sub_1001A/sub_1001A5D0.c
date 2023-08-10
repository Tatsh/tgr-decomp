#include "types-win32.h"
//----- (1001A5D0) --------------------------------------------------------
CLSID *__cdecl sub_1001A5D0(unk00334 *a1, CLSID *clsid, unk00334 *a3) {
    CLSID *result; // eax

    if (!a1)
        return 0;
    if (a3)
        result = (CLSID *)meth_unk00334_1001B7C0(a1, clsid, a3, (unk00228 *)&clsid, 0);
    else
        result = (CLSID *)meth_unk00334_1001B690(a1, clsid, &clsid, 0);
    if (!result)
        result = clsid;
    return result;
}
