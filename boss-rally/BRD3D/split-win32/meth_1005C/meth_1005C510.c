#include "../../types-win32.h"
//----- (1005C510) --------------------------------------------------------
int __thiscall meth_1005C510(_DWORD *this, _DWORD *a2) {
    int v3;  // ecx
    int v4;  // eax
    bool v5; // zf

    if (*a2 <= **(_DWORD **)&SrcStr[8] && a2[2] >= **(_DWORD **)&SrcStr[8]) {
        v3 = *(_DWORD *)(*(_DWORD *)&SrcStr[8] + 4);
        if (a2[1] <= v3 && a2[3] >= v3) {
            v4 = this[6];
            if ((v4 & 0x40000) != 0) {
                if (dword_10AA2E80->width || dword_10AA2E80->field_30) {
                    v4 |= 0x80002u;
                LABEL_12:
                    this[6] = v4;
                    LOBYTE(v4) = v4 | 0x20;
                    this[6] = v4;
                    return 1;
                }
            } else {
                v5 = !sub_1003E080();
                v4 = this[6];
                if (!v5) {
                    LOBYTE(v4) = v4 | 2;
                    goto LABEL_12;
                }
            }
            LOBYTE(v4) = v4 & 0xFD;
            goto LABEL_12;
        }
    }
    return 0;
}
