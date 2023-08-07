#include "../../types-n64.h"
//----- (8023FED8) --------------------------------------------------------
int __fastcall sub_8023FED8(int *a1, z_streamp a2, _DWORD *a3) {
    sub_8023EDB0(a1, (int)a2, a3);
    ((void(__fastcall *)(void *, int))a2->zfree)(a2->opaque, a1[9]);
    ((void(__fastcall *)(void *, int *))a2->zfree)(a2->opaque, a1);
    return 0;
}
