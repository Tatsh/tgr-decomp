#include "types-win32.h"
//----- (10078C30) --------------------------------------------------------
int __cdecl input_DISetProperty2(IDirectInputDevice2A *diDevice2A,
                                 GUID *guid,
                                 int dwObj,
                                 int dwHow,
                                 int unusedA5,
                                 int unusedA6) {
    IDirectInputDevice2AVtbl *idevLPVtbl; // ecx
    DIPROPHEADER diPropHeader;            // [esp+0h] [ebp-18h] BYREF
    int unusedV9;                         // [esp+10h] [ebp-8h]
    int unusedV10;                        // [esp+14h] [ebp-4h]

    diPropHeader.dwObj = dwObj;
    unusedV9 = unusedA5;
    unusedV10 = unusedA6;
    diPropHeader.dwHow = dwHow;
    idevLPVtbl = diDevice2A->lpVtbl;
    diPropHeader.dwSize = 24;
    diPropHeader.dwHeaderSize = 16;
    return idevLPVtbl->SetProperty(diDevice2A, guid, &diPropHeader);
}
