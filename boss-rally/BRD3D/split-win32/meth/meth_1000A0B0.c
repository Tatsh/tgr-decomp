#include "types-win32.h"
//----- (1000A0B0) --------------------------------------------------------
int __thiscall meth_1000A0B0(void *this) {
    int v2;           // eax
    IUnknown *result; // eax

    if (*(_DWORD *)this)
        (*(void(__stdcall **)(_DWORD))(**(_DWORD **)this + 8))(*(_DWORD *)this);
    v2 = *((_DWORD *)this + 1);
    *(_DWORD *)this = 0;
    if (v2)
        (*(void(__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    result = (IUnknown *)*((_DWORD *)this + 2);
    *((_DWORD *)this + 1) = 0;
    if (result)
        result = (IUnknown *)result->lpVtbl->Release(result);
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
    return (int)result;
}
