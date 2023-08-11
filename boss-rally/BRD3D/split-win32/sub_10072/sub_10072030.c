#include "types-win32.h"
//----- (10072030) --------------------------------------------------------
int __cdecl sub_10072030(_DWORD * a1, char a2, int a3, __int16 a4) {
    if (meth_unk00214_10073F40(a1) + 6 > 256)
        return 0;
    meth_unk00214_10073D60(a1, a2 | 0xC0);
    meth_unk00214_10073DC0(a1, a3);
    meth_unk00214_10073D80(a1, a4);
    return 1;
  }
