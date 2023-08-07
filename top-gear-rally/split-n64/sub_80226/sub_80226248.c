#include "../../types-n64.h"
//----- (80226248) --------------------------------------------------------
void __fastcall sub_80226248(int a1) {
    int v2;   // $v0
    int v3;   // $f6
    float v4; // $f0
    float v5; // $f10
    float v6; // $f16
    float v7; // $f18

    if (*(int *)(a1 + 832) < 0 || *(float *)(a1 + 56) < (float)(MEMORY[0x80025C38] - 10.0)) {
        sub_80222D54(a1);
        v2 = *(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936);
        *(float *)&v3 = *(float *)(v2 + 84) + 2.0;
        sub_8021FE04(
            a1,
            COERCE_INT(*(float *)(v2 + 76) + (float)((float)*(int *)(a1 + 320) * 0.0099999998)),
            *(_DWORD *)(v2 + 80),
            v3);
        sub_8022576C(*(float *)(a1 + 3940), *(float *)(a1 + 3944));
        sub_8021FE80((float *)a1, v4);
        sub_802201C8((_DWORD *)a1, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
        sub_80220358((_DWORD *)a1, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
        *(_DWORD *)(*(_DWORD *)(a1 + 332) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 332) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 332) + 416) = 2;
        *(_DWORD *)(*(_DWORD *)(a1 + 336) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 336) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 336) + 416) = 2;
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 344) + 416) = 2;
        *(_DWORD *)(*(_DWORD *)(a1 + 340) + 412) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 340) + 436) = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 340) + 416) = 2;
        *(_DWORD *)(a1 + 3696) = 0;
        *(_DWORD *)(a1 + 3700) = 0;
        *(_DWORD *)(a1 + 3704) = 0;
        *(_DWORD *)(a1 + 3708) = -180;
        *(_DWORD *)(a1 + 832) = 0;
        *(_BYTE *)(a1 + 8291) = 2;
        *(float *)(a1 + 8292) = 0.1;
        sub_80220C58(a1, a1 + 7732, 1.0);
        v5 = *(float *)(a1 + 7780);
        v6 = *(float *)(a1 + 7784);
        v7 = *(float *)(a1 + 7788);
        *(_DWORD *)(a1 + 3912) = 1;
        *(float *)(a1 + 8096) = v5;
        *(float *)(a1 + 8100) = v6;
        *(float *)(a1 + 8104) = v7;
    }
}
// 80226378: variable 'v4' is possibly undefined
// 8026FF18: using guessed type int dword_8026FF18;
