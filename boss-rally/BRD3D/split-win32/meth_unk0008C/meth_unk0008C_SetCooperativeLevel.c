#include "types-win32.h"
//----- (1000A590) --------------------------------------------------------
int __thiscall meth_unk0008C_SetCooperativeLevel(unk0008C *this) {
    int hr; // eax

    if (!LODWORD(this->field_8.ambient.g) || !IsWindow((HWND)LODWORD(this->field_8.ambient.g)))
        return -2005522669;
    hr = (*(int(__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)LODWORD(this->field_8.emissive.r) +
                                                    80))(
        LODWORD(this->field_8.emissive.r), LODWORD(this->field_8.ambient.g), 17);
    return hr >= 0 ? 0 : hr;
}
