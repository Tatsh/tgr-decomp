#include "types-win32.h"
//----- (1005C510) --------------------------------------------------------
int __thiscall meth_unk1A5E0_1005C510(unk1A5E0 *this, _DWORD *a2) {
  int v3;  // ecx
  int v4;  // eax
  bool v5; // zf

  if (*a2 <= **(_DWORD **)&SrcStr[8] && a2[2] >= **(_DWORD **)&SrcStr[8]) {
    v3 = *(_DWORD *)(*(_DWORD *)&SrcStr[8] + 4);
    if (a2[1] <= v3 && a2[3] >= v3) {
        v4 = this->field_18;
        if ((v4 & 0x40000) != 0) {
            if (gUnk54Ptr->field_2C || gUnk54Ptr->field_30) {
                v4 |= 0x80002u;
            LABEL_12:
                this->field_18 = v4;
                LOBYTE(v4) = v4 | 0x20;
                this->field_18 = v4;
                return 1;
            }
        } else {
            v5 = !sub_1003E080();
            v4 = this->field_18;
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
