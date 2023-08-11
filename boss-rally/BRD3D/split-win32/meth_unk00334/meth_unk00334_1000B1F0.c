#include "types-win32.h"
//----- (1000B1F0) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1000B1F0(unk00334 *this) {
    int v1;         // eax
    HRESULT result; // eax

    v1 = this->field_48;
    if (!v1 || (result = (*(int(__stdcall **)(int, _DWORD, _DWORD, _DWORD, int))(
                    *(_DWORD *)v1 + 24))(v1, 0, 0, *(_DWORD *)this->gap4C, this->bitDepth),
                result >= 0)) {
        result = 0;
    }
    return result;
}
