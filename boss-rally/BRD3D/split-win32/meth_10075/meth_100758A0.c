#include "types-win32.h"
//----- (100758A0) --------------------------------------------------------
void __thiscall meth_100758A0(_DWORD *this) {
    LPCSTR v2; // eax
    int v3;    // ecx
    bool v4;   // sf

    if (MEMORY[0x106C7CB8]) {
        if (this[1002] >= dword_100BD3E0 || this[991] ||
            sub_1003AC90((float *)this + 997, (float *)this) >= 0.0) {
            this[2670] = 0;
        } else {
            v2 = GetStringWithIndex(0xF3u);
            v3 = this[2670] + 1;
            v4 = this[2670] - 30 < 0;
            this[2670] = v3;
            if (v4 ^ __OFSUB__(v3, 31) | (v3 == 31) || (v3 & 0x10) != 16) {
                if ((LPCSTR)this[1023] == v2) {
                    this[1025] = 0;
                    this[1023] = 0;
                }
            } else if (!this[1023]) {
                this[1023] = v2;
                this[1025] = 0;
                this[1024] = 1048576000;
            }
        }
    }
}
