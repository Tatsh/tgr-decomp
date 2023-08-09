#include "types-win32.h"
//----- (10020FA0) --------------------------------------------------------
char __cdecl sub_10020FA0(int a1) {
    int v1;  // eax
    char v2; // al
    char v3; // al
    char v4; // al
    char v5; // al
    char v6; // al
    char v7; // al
    char v8; // al

    v1 = dword_10277370;
    renderState_0 = 1;
    if (dword_102773F8 == 1)
        LOBYTE(v1) = dword_10277370 & 0xFE;
    else
        v1 = dword_10277370 | 1;
    dword_10277370 = v1;
    switch (a1) {
    case 5263184:
        dword_10277390 = 8;
        if (dword_10277410 == 8)
            v2 = v1 & 0xBF;
        else
            v2 = v1 | 0x40;
        dword_104BBE28 = 7;
        dword_10277394 = 7;
        if (dword_10277414 == 7)
            LOBYTE(v1) = v2 & 0x7F;
        else
            LOBYTE(v1) = v2 | 0x80;
        if (dword_104C5184)
            goto LABEL_31;
        dword_10277380 = 5;
        if (dword_10277400 == 5)
            LOBYTE(v1) = v1 & 0xFB;
        else
            LOBYTE(v1) = v1 | 4;
        dword_10277384 = 6;
        if (dword_10277404 == 6) {
            LOBYTE(v1) = v1 & 0xF7;
        LABEL_31:
            renderState = 1;
            if (dword_102773FC == 1)
                v4 = v1 & 0xFD;
            else
                v4 = v1 | 2;
            dword_102773A0 = 1;
            if (dword_10277420 == 1)
                BYTE1(v1) &= 0xFBu;
            else
                BYTE1(v1) |= 4u;
            dword_104C16A0 = 3;
            dword_1027738C = 3;
            if (dword_1027740C == 3)
                LOBYTE(v1) = v4 & 0xDF;
            else
                LOBYTE(v1) = v4 | 0x20;
            dword_10277370 = v1;
            return v1;
        }
        goto LABEL_30;
    case 4:
        dword_10277390 = 8;
        if (dword_10277410 == 8)
            v3 = v1 & 0xBF;
        else
            v3 = v1 | 0x40;
        dword_104BBE28 = 7;
        dword_10277394 = 7;
        if (dword_10277414 == 7)
            LOBYTE(v1) = v3 & 0x7F;
        else
            LOBYTE(v1) = v3 | 0x80;
        if (dword_104C5184)
            goto LABEL_31;
        dword_10277380 = 5;
        if (dword_10277400 == 5)
            LOBYTE(v1) = v1 & 0xFB;
        else
            LOBYTE(v1) = v1 | 4;
        dword_10277384 = gD3DInvSrcAlpha;
        if (dword_10277404 == gD3DInvSrcAlpha) {
            LOBYTE(v1) = v1 & 0xF7;
            goto LABEL_31;
        }
    LABEL_30:
        v1 |= 8u;
        goto LABEL_31;
    case 202916416:
    case 5259840:
        dword_10277390 = 8;
        if (dword_10277410 == 8)
            v5 = v1 & 0xBF;
        else
            v5 = v1 | 0x40;
        dword_104BBE28 = 7;
        dword_10277394 = 7;
        if (dword_10277414 == 7)
            LOBYTE(v1) = v5 & 0x7F;
        else
            LOBYTE(v1) = v5 | 0x80;
        if (!dword_104C5184) {
            dword_10277380 = 5;
            if (dword_10277400 == 5)
                LOBYTE(v1) = v1 & 0xFB;
            else
                LOBYTE(v1) = v1 | 4;
            dword_10277384 = 6;
            if (dword_10277404 == 6)
                LOBYTE(v1) = v1 & 0xF7;
            else
                v1 |= 8u;
        }
        renderState = 1;
        if (dword_102773FC == 1)
            LOBYTE(v1) = v1 & 0xFD;
        else
            LOBYTE(v1) = v1 | 2;
        dword_102773A0 = 1;
        if (dword_10277420 == 1) {
            BYTE1(v1) &= 0xFBu;
            dword_10277370 = v1;
            return v1;
        }
    LABEL_140:
        BYTE1(v1) |= 4u;
        dword_10277370 = v1;
        return v1;
    case 3:
        dword_104C5184 = 0;
        return v1;
    case 1:
        dword_104C16A0 = 4;
        dword_1027738C = 4;
        if (dword_1027740C == 4)
            LOBYTE(v1) = v1 & 0xDF;
        else
            LOBYTE(v1) = v1 | 0x20;
        renderState_0 = 0;
        if (dword_102773F8)
            v1 |= 1u;
        else
            LOBYTE(v1) = v1 & 0xFE;
        dword_10277370 = v1;
        return v1;
    case 0:
        dword_104C16A0 = 2;
        dword_1027738C = 2;
        if (dword_1027740C == 2)
            LOBYTE(v1) = v1 & 0xDF;
        else
            LOBYTE(v1) = v1 | 0x20;
        renderState = 1;
        if (dword_102773FC == 1)
            LOBYTE(v1) = v1 & 0xFD;
        else
            v1 |= 2u;
        dword_102773A0 = 0;
        if (!dword_10277420) {
            BYTE1(v1) &= 0xFBu;
            dword_10277370 = v1;
            return v1;
        }
        goto LABEL_140;
    }
    if (a1 != 219695576) {
        if ((a1 & 0x1800) == 0) {
            if (!dword_104C5184) {
                dword_10277380 = 2;
                if (dword_10277400 == 2)
                    LOBYTE(v1) = v1 & 0xFB;
                else
                    LOBYTE(v1) = v1 | 4;
                dword_10277384 = 1;
                if (dword_10277404 == 1)
                    LOBYTE(v1) = v1 & 0xF7;
                else
                    v1 |= 8u;
            }
            dword_104BBE28 = 8;
            dword_10277394 = 8;
            if (dword_10277414 == 8)
                LOBYTE(v1) = v1 & 0x7F;
            else
                LOBYTE(v1) = v1 | 0x80;
            renderState = 0;
            if (dword_102773FC)
                v1 |= 2u;
            else
                LOBYTE(v1) = v1 & 0xFD;
            dword_102773A0 = 0;
            if (!dword_10277420) {
                BYTE1(v1) &= 0xFBu;
                dword_10277370 = v1;
                return v1;
            }
            goto LABEL_140;
        }
        if ((a1 & 0x10000) != 0) {
            if (!gD3dalphacompar)
                return v1;
            dword_10277390 = 128;
            if (dword_10277410 == 128)
                LOBYTE(v1) = v1 & 0xBF;
            else
                LOBYTE(v1) = v1 | 0x40;
            dword_104BBE28 = 7;
            dword_10277394 = 7;
            if (dword_10277414 != 7) {
                v1 |= 0x80u;
                renderState = 1;
                if (dword_102773FC == 1) {
                    LOBYTE(v1) = v1 & 0xFD;
                    goto LABEL_123;
                }
                goto LABEL_122;
            }
            LOBYTE(v1) = v1 & 0x7F;
        } else {
            dword_10277390 = 1;
            if (dword_10277410 == 1)
                v7 = v1 & 0xBF;
            else
                v7 = v1 | 0x40;
            dword_104BBE28 = 7;
            dword_10277394 = 7;
            if (dword_10277414 == 7)
                LOBYTE(v1) = v7 & 0x7F;
            else
                LOBYTE(v1) = v7 | 0x80;
            if (!dword_104C5184) {
                dword_10277380 = 5;
                if (dword_10277400 == 5)
                    v8 = v1 & 0xFB;
                else
                    v8 = v1 | 4;
                dword_10277384 = 6;
                if (dword_10277404 == 6)
                    LOBYTE(v1) = v8 & 0xF7;
                else
                    LOBYTE(v1) = v8 | 8;
            }
            renderState_0 = 0;
            if (dword_102773F8)
                v1 |= 1u;
            else
                LOBYTE(v1) = v1 & 0xFE;
        }
        renderState = 1;
        if (dword_102773FC == 1) {
            LOBYTE(v1) = v1 & 0xFD;
            goto LABEL_123;
        }
    LABEL_122:
        LOBYTE(v1) = v1 | 2;
    LABEL_123:
        dword_102773A0 = 1;
        if (dword_10277420 == 1) {
            BYTE1(v1) &= 0xFBu;
            dword_10277370 = v1;
            return v1;
        }
        goto LABEL_140;
    }
    dword_10277380 = 3;
    if (dword_10277400 == 3)
        v6 = v1 & 0xFB;
    else
        v6 = v1 | 4;
    dword_10277384 = 2;
    if (dword_10277404 == 2)
        LOBYTE(v1) = v6 & 0xF7;
    else
        LOBYTE(v1) = v6 | 8;
    renderState_0 = 0;
    if (dword_102773F8)
        v1 |= 1u;
    else
        LOBYTE(v1) = v1 & 0xFE;
    dword_102773A0 = 1;
    if (dword_10277420 == 1)
        BYTE1(v1) &= 0xFBu;
    else
        BYTE1(v1) |= 4u;
    dword_104C5184 = 1;
    dword_10277370 = v1;
    return v1;
}
// 100A79D8: using guessed type int g_D3dinvsrcalpha;
// 100AA720: using guessed type int g_D3dalphacompar;
// 10277370: using guessed type int dword_10277370;
// 10277378: using guessed type int renderState_0;
// 1027737C: using guessed type int renderState;
// 10277380: using guessed type int dword_10277380;
// 10277384: using guessed type int dword_10277384;
// 1027738C: using guessed type int dword_1027738C;
// 10277390: using guessed type int dword_10277390;
// 10277394: using guessed type int dword_10277394;
// 102773A0: using guessed type int dword_102773A0;
// 102773F8: using guessed type int dword_102773F8;
// 102773FC: using guessed type int dword_102773FC;
// 10277400: using guessed type int dword_10277400;
// 10277404: using guessed type int dword_10277404;
// 1027740C: using guessed type int dword_1027740C;
// 10277410: using guessed type int dword_10277410;
// 10277414: using guessed type int dword_10277414;
// 10277420: using guessed type int dword_10277420;
// 104BBE28: using guessed type int dword_104BBE28;
// 104C16A0: using guessed type int dword_104C16A0;
// 104C5184: using guessed type int dword_104C5184;
