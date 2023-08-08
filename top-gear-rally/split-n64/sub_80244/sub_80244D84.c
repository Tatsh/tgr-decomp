#include "types-n64.h"
//----- (80244D84) --------------------------------------------------------
void __fastcall sub_80244D84(int a1, char a2, char a3) {
    int v4;  // $s1
    int v5;  // $s1
    int v6;  // $s0
    int v7;  // $a2
    int v8;  // $s1
    int v9;  // $a2
    int v10; // $s1
    int v11; // $a2
    int v12; // $s1
    int v13; // $s0
    int v14; // $a1
    int v15; // $s1
    int v16; // $s0
    int v17; // $s1
    int v18; // $s0
    int v19; // $s1
    int v20; // [sp+40h] [-28h]
    int v21; // [sp+40h] [-28h]
    int v22; // [sp+40h] [-28h]

    sub_8022F5D0(12);
    if (a3 == 1)
        sub_8022F530(255, 255, 255, 255, 245, 0);
    else
        sub_8022F530(255, 255, 255, 255, 202, 0);
    sub_8022F514();
    sub_8022F4F8();
    if (a1 < 12) {
        switch (a1) {
        case 1:
        case 11:
            v4 = 204;
            if (a3 == 1)
                v4 = 234;
            sub_80246F90(213, v4, 213, 72, 3, 0, 0);
            formatter("CONTROLLER PAK", 114, (v4 + 30) >> 1);
            formatter("IS NOT INSERTED", 114, ((v4 + 30) >> 1) + 14);
            break;
        case 3:
            v7 = 278;
            if (a2 == 10)
                v7 = 262;
            v8 = 204;
            if (a3 == 1)
                v8 = 226;
            v20 = (640 - v7) >> 1;
            sub_80246F90(v20, v8, v7, 72, 3, 0, 0);
            if (a2 == 9)
                formatter("UNABLE TO READ FROM", (v20 + 16) >> 1, (v8 + 30) >> 1);
            else
                formatter("UNABLE TO WRITE TO", (v20 + 16) >> 1, (v8 + 30) >> 1);
            formatter("THE CONTROLLER PAK", (v20 + 16) >> 1, ((v8 + 30) >> 1) + 14);
            break;
        case 4:
            v17 = 176;
            if (a3 == 1)
                v17 = 220;
            sub_80246F90(174, v17, 292, 128, 3, 0, 0);
            v18 = (v17 + 30) >> 1;
            formatter("CONTROLLER ERROR HAS", 94, v18);
            formatter("BEEN DETECTED.", 94, v18 + 12);
            formatter("CUSTOM DECALS CANNOT", 94, v18 + 30);
            if (a2 == 9)
                formatter("BE LOADED.", 94, v18 + 42);
            else
                formatter("BE SAVED.", 94, v18 + 42);
            break;
        case 5:
            v9 = 242;
            if (a2 == 10)
                v9 = 268;
            v10 = 204;
            if (a3 == 1)
                v10 = 226;
            v21 = (640 - v9) >> 1;
            sub_80246F90(v21, v10, v9, 72, 3, 0, 0);
            if (a2 == 9) {
                formatter("DECALS NOT FOUND", (v21 + 16) >> 1, (v10 + 30) >> 1);
                formatter("IN CONTROLLER PAK", (v21 + 16) >> 1, ((v10 + 30) >> 1) + 14);
            } else {
                formatter("ERROR ENCOUNTERED", (v21 + 16) >> 1, (v10 + 30) >> 1);
                formatter("WHILE SAVING DECALS", (v21 + 16) >> 1, ((v10 + 30) >> 1) + 14);
            }
            break;
        case 6:
            v15 = 204;
            if (a3 == 1)
                v15 = 228;
            sub_80246F90(173, v15, 294, 72, 3, 0, 0);
            v16 = (v15 + 30) >> 1;
            formatter("BAD DATA ENCOUNTERED", 93, v16);
            if (a2 == 9)
                formatter("WHILE LOADING DECALS", 93, v16 + 14);
            else
                formatter("WHILE SAVING DECALS", 93, v16 + 14);
            break;
        case 7:
        case 8:
            v5 = 151;
            if (a3 == 1)
                v5 = 195;
            sub_80246F90(165, v5, 309, 178, 3, 0, 0);
            v6 = (v5 + 30) >> 1;
            formatter("INSUFFICIENT FREE PAGES", 90, v6);
            formatter("OR FREE NOTES IN THE", 90, v6 + 12);
            formatter("CONTROLLER PAK.", 90, v6 + 24);
            formatter("62 PAGES AND ONE NOTE", 90, v6 + 42);
            formatter("ARE NEEDED TO SAVE THE", 90, v6 + 54);
            formatter("CUSTOM DECALS.", 90, v6 + 66);
            break;
        case 10:
            v19 = 204;
            if (a3 == 1)
                v19 = 248;
            sub_80246F90(205, v19, 230, 72, 3, 0, 0);
            formatter("CONTROLLER PAK", 110, (v19 + 30) >> 1);
            formatter("IS NONFUNCTIONAL", 110, ((v19 + 30) >> 1) + 14);
            break;
        default:
            return;
        }
    } else if (a1 == 99999) {
        v11 = 276;
        if (a2 == 10)
            v11 = 267;
        v12 = 204;
        if (a3 == 1)
            v12 = 226;
        v22 = (640 - v11) >> 1;
        sub_80246F90(v22, v12, v11, 72, 3, 0, 0);
        v13 = (v12 + 30) >> 1;
        formatter("ERROR ENCOUNTERED", (v22 + 15) >> 1, v13);
        v14 = (v22 + 15) >> 1;
        if (a2 == 9)
            formatter("WHILE LOADING DECALS", v14, v13 + 14);
        else
            formatter("WHILE SAVING DECALS", v14, v13 + 14);
    }
}
