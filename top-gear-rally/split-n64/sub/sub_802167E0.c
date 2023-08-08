#include "types-n64.h"
//----- (802167E0) --------------------------------------------------------
void __fastcall sub_802167E0(int a1) {
    sub_8022F5D0(8);
    sub_8022F4F8();
    switch (a1) {
    case 0:
        sub_8023DF9C((int)dword_80272590, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C((int)dword_80272590, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C(
            (int)dword_80272590, 111, 85, 104, 48, 255, 255, 255, 255, 255, 255, 255, 255, 1);
        sub_8022F514();
        formatter("%wwACCELERATE", 201, 127);
        formatter("%wwPLUS BRAKE = E-BRAKE", 193, 135);
        formatter("%wwCHANGE VIEW", 215, 104);
        formatter("%wwGEAR UP", 199, 86);
        sub_8022F520();
        formatter("%wwSTEERING / REVERSE", 107, 99);
        formatter("%wwGEAR DOWN", 117, 131);
        sub_8022F504();
        formatter("%wwBRAKE", 156, 86);
        break;
    case 1:
        sub_8023DF9C((int)dword_802725A4, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C((int)dword_802725A4, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C(
            (int)dword_802725A4, 111, 85, 104, 48, 255, 255, 255, 255, 255, 255, 255, 255, 1);
        sub_8022F514();
        formatter("%wwACCELERATE", 201, 128);
        formatter("%wwCHANGE VIEW", 215, 104);
        formatter("%wwGEAR UP", 199, 86);
        formatter("%wwE-BRAKE", 211, 118);
        sub_8022F520();
        formatter("%wwSTEERING / REVERSE", 107, 99);
        formatter("%wwGEAR DOWN", 117, 131);
        sub_8022F504();
        formatter("%wwBRAKE", 156, 86);
        break;
    case 2:
        sub_8023DF9C((int)dword_802725B8, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C((int)dword_802725B8, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C(
            (int)dword_802725B8, 111, 85, 104, 48, 255, 255, 255, 255, 255, 255, 255, 255, 1);
        sub_8022F514();
        formatter("%wwACCELERATE", 201, 127);
        formatter("%wwPLUS BRAKE = E-BRAKE", 193, 135);
        formatter("%wwCHANGE VIEW", 215, 104);
        formatter("%wwGEAR UP", 199, 86);
        sub_8022F520();
        formatter("%wwSTEERING, REVERSE", 107, 125);
        formatter("%wwGEAR DOWN", 116, 88);
        sub_8022F504();
        formatter("%wwBRAKE", 156, 86);
        break;
    case 3:
        sub_8023DF9C((int)dword_802725CC, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C((int)dword_802725CC, 111, 85, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C(
            (int)dword_802725CC, 111, 85, 104, 48, 255, 255, 255, 255, 255, 255, 255, 255, 1);
        sub_8022F514();
        formatter("%wwGEAR DOWN", 201, 128);
        formatter("%wwCHANGE VIEW", 216, 103);
        sub_8022F520();
        formatter("%wwACCELERATE / REVERSE,", 124, 89);
        formatter("%wwSTEERING ", 124, 97);
        formatter("%wwGEAR UP/DOWN", 110, 114);
        formatter("%wwBRAKE", 119, 129);
        formatter("%wwPLUS ACCELERATE = E-BRAKE ", 119, 137);
        sub_8022F504();
        formatter("%wwGEAR UP", 156, 86);
        break;
    case 4:
        sub_8023DF9C((int)dword_802725E0, 110, 81, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C((int)dword_802725E0, 110, 81, 104, 48, 0, 0, 0, 255, 0, 0, 0, 255, 1);
        sub_8023DF9C(
            (int)dword_802725E0, 110, 81, 104, 48, 255, 255, 255, 255, 255, 255, 255, 255, 1);
        sub_8022F514();
        formatter("%wwBRAKE", 199, 89);
        formatter("%wwACCELERATE", 208, 110);
        formatter("%wwPLUS BRAKE = E-BRAKE", 200, 118);
        sub_8022F504();
        formatter("%wwCHANGE VIEW", 167, 85);
        sub_8022F520();
        formatter("%wwSTEERING", 114, 124);
        formatter("%wwREVERSE", 127, 87);
        formatter("%wwGEAR UP/DOWN", 116, 101);
        sub_8022F504();
        break;
    default:
        return;
    }
}
// 80272590: using guessed type int dword_80272590[3];
// 802725A4: using guessed type int dword_802725A4[3];
// 802725B8: using guessed type int dword_802725B8[3];
// 802725CC: using guessed type int dword_802725CC[3];
// 802725E0: using guessed type int dword_802725E0[3];
