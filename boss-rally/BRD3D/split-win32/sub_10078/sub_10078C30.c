#include "../../types-win32.h"
//----- (10078C30) --------------------------------------------------------
int __cdecl sub_10078C30(
    IDirectInputDevice2A *diDevice2A, GUID *guid, int dwObj, int dwHow, int a5, int a6) {
    IDirectInputDevice2AVtbl *idevLPVtbl; // ecx
    DIPROPHEADER diPropHeader;            // [esp+0h] [ebp-18h] BYREF
    int v9;                               // [esp+10h] [ebp-8h]
    int v10;                              // [esp+14h] [ebp-4h]

    diPropHeader.dwObj = dwObj;
    v9 = a5;
    v10 = a6;
    diPropHeader.dwHow = dwHow;
    idevLPVtbl = diDevice2A->lpVtbl;
    diPropHeader.dwSize = 24;
    diPropHeader.dwHeaderSize = 16;
    return idevLPVtbl->SetProperty(diDevice2A, guid, &diPropHeader);
}
