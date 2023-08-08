#include "../types-win32.h"
//----- (1000A590) --------------------------------------------------------
int __thiscall SetCooperativeLevel(unk334 *this) {
    HRESULT hr; // eax

    if (!this->field_20 || !IsWindow(this->field_20))
        return -2005522669;
    hr = this->?->lpVtbl->SetCooperativeLevel(this->?, this->field_20, 17);
    return hr >= 0 ? 0 : hr;
}
