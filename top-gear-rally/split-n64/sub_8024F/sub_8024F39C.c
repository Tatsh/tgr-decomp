#include "types-n64.h"
//----- (8024F39C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8024F39C() {
    int *v0;    // $s1
    int v1;     // $s0
    int v2;     // $s2
    int result; // $v0

    sub_80246F90(159, 149, 322, 182, 3, 0, 0);
    sub_8022F5D0(16);
    sub_8022F504();
    sub_8022F4F8();
    formatter("%rySELECT STYLE", 159, 92);
    v0 = (int *)&off_8028DB34;
    v1 = 0;
    v2 = 175;
    do {
        if (v1) {
            sub_80245604(*v0, v2, 203);
            ++v1;
        } else {
            sub_8024594C(*v0, v2, 203, *(_DWORD *)(*v0 + 36), *(_DWORD *)(*v0 + 40));
            v1 = 1;
        }
        ++v0;
        v2 += 76;
    } while (v1 != 4);
    sub_80246F90(177, 259, 286, 30, 1, 1, 1);
    sub_8022F5D0(11);
    sub_8022F530(255, 255, 255, 255, 245, 0);
    formatter("FILLED RECTANGLE", 159, 140);
    sub_8022F5D0(10);
    sub_8022F514();
    formatter("%wwSELECT", 121, 158);
    formatter("%wwCANCEL", 179, 158);
    sub_80245604((int)&dword_8028D0B0, 213, 299);
    sub_80245604((int)&dword_8028D0E0, 329, 299);
    sub_80255ADC((int)dword_8036A8E0);
    result = sub_80255910(dword_8036A8E0, 32);
    byte_8028DBE0 = 0;
    return result;
}
// 8024F788: write access to const memory at 8028CF5C has been detected
// 8024F798: write access to const memory at 8028DBE0 has been detected
// 8024F7B0: write access to const memory at 8028DBE0 has been detected
// 8024F4A0: write access to const memory at 8028DBB8 has been detected
// 8024F6A0: write access to const memory at 8028DBB8 has been detected
// 8024F6A4: write access to const memory at 8028DBB8 has been detected
// 8024F700: write access to const memory at 8028DBB8 has been detected
// 8024F73C: write access to const memory at 8028DBB8 has been detected
// 8024F6DC: conditional instruction was optimized away because of '$t1.4==0'
// 8028CF5C: using guessed type char byte_8028CF5C;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028DB34: using guessed type int *off_8028DB34;
// 8028DBB8: using guessed type char byte_8028DBB8;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBE0: using guessed type char byte_8028DBE0;
// 8036A8E0: using guessed type int dword_8036A8E0[];
