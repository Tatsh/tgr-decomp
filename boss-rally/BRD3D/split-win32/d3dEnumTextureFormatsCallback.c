#include "../types-win32.h"
//----- (10009360) --------------------------------------------------------
int __stdcall d3dEnumTextureFormatsCallback(DDSURFACEDESC *a1, void *context) {
    int v3;     // edi
    char v4;    // bl
    int v5;     // edi
    int v6;     // ebx
    int v7;     // eax
    int v8;     // ebx
    int v9;     // ebx
    int v10;    // edx
    char v11;   // bl
    char v12;   // bl
    int v13;    // edi
    char v14;   // bl
    int v15;    // edi
    int v16[8]; // [esp+8h] [ebp-20h] BYREF

    qmemcpy(v16, &a1->ddpfPixelFormat, sizeof(v16));
    if (v16[3] > (unsigned int)*((unsigned __int16 *)context + 2))
        return 1;
    switch (*(_DWORD *)context) {
    case 2:
        if ((v16[1] & 3) != 0)
            v3 = sub_10009640(v16[7]);
        else
            v3 = 0;
        if (!*((_DWORD *)context + 5) ||
            v3 && (!sub_10009640(*((_DWORD *)context + 9)) ||
                   v3 > sub_10009640(*((_DWORD *)context + 9)) && v3 <= 8)) {
            goto LABEL_51;
        }
        break;
    case 3:
        v4 = v16[1];
        if ((v16[1] & 3) != 0)
            sub_10009640(v16[7]);
        if ((v4 & 0x40) != 0) {
            v5 = sub_10009640(v16[4]);
            v6 = sub_10009640(v16[5]);
            v7 = sub_10009640(v16[6]);
            if (!*((_DWORD *)context + 5))
                goto LABEL_51;
            if (v5 == v6 && v5 == v7 && v5 > 0) {
                v8 = sub_10009640(*((_DWORD *)context + 7));
                if (sub_10009640(*((_DWORD *)context + 6)) != v8)
                    goto LABEL_51;
                v9 = sub_10009640(*((_DWORD *)context + 8));
                if (sub_10009640(*((_DWORD *)context + 6)) != v9)
                    goto LABEL_51;
                if (v5 <= 8) {
                    v10 = *((_DWORD *)context + 6);
                    goto LABEL_32;
                }
            }
        }
        break;
    case 4:
        v11 = v16[1];
        if ((v16[1] & 3) != 0)
            v5 = sub_10009640(v16[7]);
        else
            v5 = 0;
        if ((v11 & 0x40) != 0) {
            if (!*((_DWORD *)context + 5))
                goto LABEL_51;
            if (v5) {
                if (!sub_10009640(*((_DWORD *)context + 9)))
                    goto LABEL_51;
                v10 = *((_DWORD *)context + 9);
            LABEL_32:
                if (v5 > sub_10009640(v10))
                    goto LABEL_51;
            }
        }
        break;
    case 0xB:
        v12 = v16[1];
        if ((v16[1] & 3) != 0)
            v13 = sub_10009640(v16[7]);
        else
            v13 = 0;
        if ((v12 & 0x40) != 0 &&
            (!*((_DWORD *)context + 5) || v13 && (!sub_10009640(*((_DWORD *)context + 9)) ||
                                                  v13 < sub_10009640(*((_DWORD *)context + 9))))) {
            goto LABEL_51;
        }
        break;
    case 0xC:
        v14 = v16[1];
        if ((v16[1] & 3) != 0)
            v15 = sub_10009640(v16[7]);
        else
            v15 = 0;
        if ((v14 & 0x40) != 0 &&
            (!*((_DWORD *)context + 5) || v15 && (!sub_10009640(*((_DWORD *)context + 9)) ||
                                                  v15 > sub_10009640(*((_DWORD *)context + 9))))) {
        LABEL_51:
            qmemcpy((char *)context + 8, v16, 0x20u);
        }
        break;
    default:
        return 1;
    }
    return 1;
}
// 100093F7: conditional instruction was optimized away because of 'edi.4!=0'
// 1000952C: conditional instruction was optimized away because of 'edi.4!=0'
// 10009591: conditional instruction was optimized away because of 'edi.4!=0'
// 100095E3: conditional instruction was optimized away because of 'edi.4!=0'
