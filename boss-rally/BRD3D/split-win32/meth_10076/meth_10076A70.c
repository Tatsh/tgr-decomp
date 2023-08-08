#include "../types-win32.h"
//----- (10076A70) --------------------------------------------------------
void __thiscall meth_10076A70(unsigned __int8 *this, int a2, int a3) {
    sub_10061460(this[10668], this[10669], this[10670]);
    LoadCar(a2, a3, 0);
    sub_10074E20((_DWORD *)this + 2716);
    memset(this + 10896, 0, 0x20u);
    meth_10076A40(this, a2);
}
