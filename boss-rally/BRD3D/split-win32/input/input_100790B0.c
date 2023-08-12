#include "types-win32.h"
//----- (100790B0) --------------------------------------------------------
HRESULT __cdecl input_100790B0(int a1) {
    HRESULT result; // eax

    gUnused118ABD0C = a1;
    gUnused118ABD10 = a1;
    result = (HRESULT)gDirectInputEffect0;
    if (gDirectInputEffect0)
        result = gDirectInputEffect0->lpVtbl->SetParameters(
            gDirectInputEffect0, &gDIEffectSpring, 0x100);
    return result;
}
// 118ABD0C: using guessed type int gUnused118ABD0C;
// 118ABD10: using guessed type int gUnused118ABD10;
