#include "types-win32.h"
//----- (1000B150) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B150(unk0008C *this) {
    D3DVALUE v1;    // eax
    D3DVALUE v2;    // ecx
    HRESULT result; // eax

    v1 = this->field_8.emissive.b;
    if (v1 == 0.0 || (v2 = this->field_8.emissive.a, v2 == 0.0) ||
        (result = (*(int(__stdcall **)(D3DVALUE, D3DVALUE))(*(_DWORD *)LODWORD(v1) + 124))(
             COERCE_D3DVALUE(LODWORD(v1)), COERCE_D3DVALUE(LODWORD(v2))),
         result >= 0)) {
        result = 0;
    }
    return result;
}
