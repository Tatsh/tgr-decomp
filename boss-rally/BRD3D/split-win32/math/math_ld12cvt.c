#include "types-win32.h"
//----- (10087560) --------------------------------------------------------
INTRNCVT_STATUS __cdecl math_ld12cvt(_LDBL12 *a1, void *a2) {
    return _ld12cvt(a1, a2, &gFpFormatDescriptor1);
}
