#include "../../types-win32.h"
//----- (10046560) --------------------------------------------------------
int __cdecl sub_10046560(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (dword_10AA2904)
        (**(void(__thiscall ***)(void *, int))dword_10AA2904)(dword_10AA2904, 1);
    dword_10AA2998 = 0;
    dword_10AA2904 = (void *)dword_10AA297C;
    sub_10079550();
    return 0;
}
// 10AA297C: using guessed type int dword_10AA297C;
// 10AA2998: using guessed type int dword_10AA2998;
