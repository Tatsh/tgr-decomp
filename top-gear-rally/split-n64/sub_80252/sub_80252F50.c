#include "types-n64.h"
//----- (80252F50) --------------------------------------------------------
int __fastcall sub_80252F50(_BYTE *a1, _BYTE *a2) {
    int result; // $v0

    result = (unsigned __int8)*a1;
    *a1 = *a2;
    *a2 = result;
    return result;
}
