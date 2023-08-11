#include "types-win32.h"
//----- (1001A550) --------------------------------------------------------
unk00334 *__cdecl sub_1001A550(CLSID *a1) {
    unk00334 *result; // eax

    result = sub_1001BA70(a1, (unk00334 *)&a1, 0);
    if (!result)
        result = (unk00334 *)a1;
    return result;
}
