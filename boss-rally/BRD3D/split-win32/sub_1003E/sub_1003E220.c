#include "types-win32.h"
//----- (1003E220) --------------------------------------------------------
int sub_1003E220() {
    IUnknown *v0;     // eax
    IUnknownVtbl *v1; // edx
    int v3;           // [esp+Ch] [ebp-Ch] BYREF
    int v4;           // [esp+10h] [ebp-8h] BYREF
    char v5[4];       // [esp+14h] [ebp-4h] BYREF

    v0 = *(IUnknown **)(gUnk334->ddCapsFlags + 60);
    v1 = v0->lpVtbl;
    v3 = 4096;
    ((void(__stdcall *)(IUnknown *, int *, char *, int *))v1[7].Release)(v0, &v3, v5, &v4);
    return v4;
}
