#include "types-win32.h"
//----- (10048B20) --------------------------------------------------------
void __stdcall meth_unk000C8_10048B20(int a1) {
    int waitTicksAdd;  // esi
    DWORD waitTicks;   // esi
    char **ppFilepath; // esi
    Iostream_init *v4; // esi

    waitTicksAdd = 0;
    if (dword_10AA2854 == 2) {
        waitTicksAdd = 0x11DA;
    } else if (dword_10AA2854 == 3) {
        waitTicksAdd = 0x604;
    }
    waitTicks = getTicks() + waitTicksAdd;
    while (getTicks() < waitTicks)
        Sleep(0);
    if (!a1) {
        dword_100AC300 = 0;
        gUnkC8Ptr1 = 0;
        sub_1005F530();
        ppFilepath = &gImagesWork1aBmFilepath;
        do {
            if (*ppFilepath)
                free(*ppFilepath);
            *ppFilepath = 0;
            ppFilepath += 0x1D;
        } while ((int)ppFilepath < (int)&unk_10AA2584);
    }
    if (gUnkC8Ptr11) {
        gUnkC8Ptr11->lpVtbl->field_1C(gUnkC8Ptr11);
        if (gUnkC8Ptr11)
            gUnkC8Ptr11->lpVtbl->field_0(gUnkC8Ptr11, 1);
        gUnkC8Ptr11 = 0;
        dword_10A9CFFC = 0;
    }
    if (gUnkC8Ptr12) {
        gUnkC8Ptr12->lpVtbl->field_1C(gUnkC8Ptr12);
        if (gUnkC8Ptr12)
            gUnkC8Ptr12->lpVtbl->field_0(gUnkC8Ptr12, 1);
        gUnkC8Ptr12 = 0;
        dword_10AA29AC = 0;
    }
    if (gUnkC8Ptr13) {
        gUnkC8Ptr13->lpVtbl->field_1C(gUnkC8Ptr13);
        if (gUnkC8Ptr13)
            gUnkC8Ptr13->lpVtbl->field_0(gUnkC8Ptr13, 1);
        gUnkC8Ptr13 = 0;
    }
    if (gUnkC8Ptr14) {
        gUnkC8Ptr14->lpVtbl->field_1C(gUnkC8Ptr14);
        if (gUnkC8Ptr14)
            gUnkC8Ptr14->lpVtbl->field_0(gUnkC8Ptr14, 1);
        gUnkC8Ptr14 = 0;
        dword_10AA29B4 = 0;
    }
    if (gUnkC8Ptr4) {
        gUnkC8Ptr4->lpVtbl->field_1C(gUnkC8Ptr4);
        if (gUnkC8Ptr4)
            gUnkC8Ptr4->lpVtbl->field_0(gUnkC8Ptr4, 1);
        gUnkC8Ptr4 = 0;
    }
    if (gUnkC8Ptr5) {
        gUnkC8Ptr5->lpVtbl->field_1C(gUnkC8Ptr5);
        if (gUnkC8Ptr5)
            gUnkC8Ptr5->lpVtbl->field_0(gUnkC8Ptr5, 1);
        gUnkC8Ptr5 = 0;
    }
    if (gUnkC8Ptr15) {
        gUnkC8Ptr15->lpVtbl->field_1C(gUnkC8Ptr15);
        if (gUnkC8Ptr15)
            gUnkC8Ptr15->lpVtbl->field_0(gUnkC8Ptr15, 1);
        gUnkC8Ptr15 = 0;
        dword_10AA29A8 = 0;
    }
    if (gUnkC8Ptr16) {
        gUnkC8Ptr16->lpVtbl->field_1C(gUnkC8Ptr16);
        if (gUnkC8Ptr16)
            gUnkC8Ptr16->lpVtbl->field_0(gUnkC8Ptr16, 1);
        gUnkC8Ptr16 = 0;
    }
    if (gUnkC8Ptr17) {
        gUnkC8Ptr17->lpVtbl->field_1C(gUnkC8Ptr17);
        if (gUnkC8Ptr17)
            gUnkC8Ptr17->lpVtbl->field_0(gUnkC8Ptr17, 1);
        gUnkC8Ptr17 = 0;
        dword_10AA29C0 = 0;
        dword_10AA29CC = 0;
        dword_10AA29F4 = 0;
    }
    if (gUnkC8Ptr18) {
        gUnkC8Ptr18->lpVtbl->field_1C(gUnkC8Ptr18);
        if (gUnkC8Ptr18)
            gUnkC8Ptr18->lpVtbl->field_0(gUnkC8Ptr18, 1);
        gUnkC8Ptr18 = 0;
        dword_10AA29B0 = 0;
    }
    if (gUnkC8Ptr19) {
        gUnkC8Ptr19->lpVtbl->field_1C(gUnkC8Ptr19);
        if (gUnkC8Ptr19)
            gUnkC8Ptr19->lpVtbl->field_0(gUnkC8Ptr19, 1);
        gUnkC8Ptr19 = 0;
    }
    if (gUnkC8Ptr20) {
        gUnkC8Ptr20->lpVtbl->field_1C(gUnkC8Ptr20);
        if (gUnkC8Ptr20)
            gUnkC8Ptr20->lpVtbl->field_0(gUnkC8Ptr20, 1);
        gUnkC8Ptr20 = 0;
    }
    if (gUnkC8Ptr21) {
        gUnkC8Ptr21->lpVtbl->field_1C(gUnkC8Ptr21);
        if (gUnkC8Ptr21)
            gUnkC8Ptr21->lpVtbl->field_0(gUnkC8Ptr21, 1);
        gUnkC8Ptr21 = 0;
    }
    if (gUnkC8Ptr22) {
        gUnkC8Ptr22->lpVtbl->field_1C(gUnkC8Ptr22);
        if (gUnkC8Ptr22)
            gUnkC8Ptr22->lpVtbl->field_0(gUnkC8Ptr22, 1);
        gUnkC8Ptr22 = 0;
    }
    if (gUnkC8Ptr11) {
        gUnkC8Ptr11->lpVtbl->field_1C(gUnkC8Ptr11);
        if (gUnkC8Ptr11)
            gUnkC8Ptr11->lpVtbl->field_0(gUnkC8Ptr11, 1);
        gUnkC8Ptr11 = 0;
    }
    if (gUnkC8Ptr24) {
        gUnkC8Ptr24->lpVtbl->field_1C(gUnkC8Ptr24);
        if (gUnkC8Ptr24)
            gUnkC8Ptr24->lpVtbl->field_0(gUnkC8Ptr24, 1);
        gUnkC8Ptr24 = 0;
    }
    if (gUnkC8Ptr10) {
        gUnkC8Ptr10->lpVtbl->field_1C(gUnkC8Ptr10);
        if (gUnkC8Ptr10)
            gUnkC8Ptr10->lpVtbl->field_0(gUnkC8Ptr10, 1);
        gUnkC8Ptr10 = 0;
        dword_10AA29B8 = 0;
        dword_10AA29D8 = 0;
        dword_10AA29D4 = 0;
        dword_10AA2880 = 0;
    }
    if (gUnkC8Ptr25) {
        gUnkC8Ptr25->lpVtbl->field_1C(gUnkC8Ptr25);
        if (gUnkC8Ptr25)
            gUnkC8Ptr25->lpVtbl->field_0(gUnkC8Ptr25, 1);
        gUnkC8Ptr25 = 0;
        dword_10AA29B8 = 0;
    }
    if (gUnkC8Ptr26) {
        gUnkC8Ptr26->lpVtbl->field_1C(gUnkC8Ptr26);
        if (gUnkC8Ptr26)
            gUnkC8Ptr26->lpVtbl->field_0(gUnkC8Ptr26, 1);
        gUnkC8Ptr26 = 0;
    }
    if (gUnkC8Ptr27) {
        gUnkC8Ptr27->lpVtbl->field_1C(gUnkC8Ptr27);
        if (gUnkC8Ptr27)
            gUnkC8Ptr27->lpVtbl->field_0(gUnkC8Ptr27, 1);
        gUnkC8Ptr27 = 0;
        dword_10AA29E4 = 0;
        gUnk1E214 = 0;
    }
    if (gUnkC8Ptr28) {
        gUnkC8Ptr28->lpVtbl->field_1C(gUnkC8Ptr28);
        if (gUnkC8Ptr28)
            gUnkC8Ptr28->lpVtbl->field_0(gUnkC8Ptr28, 1);
        gUnkC8Ptr28 = 0;
        dword_10AA29A8 = 0;
    }
    if (gUnkC8Ptr29) {
        gUnkC8Ptr29->lpVtbl->field_1C(gUnkC8Ptr29);
        if (gUnkC8Ptr29)
            gUnkC8Ptr29->lpVtbl->field_0(gUnkC8Ptr29, 1);
        gUnkC8Ptr29 = 0;
        dword_10AA29E8 = 0;
    }
    if (gUnkC8Ptr30) {
        gUnkC8Ptr30->lpVtbl->field_1C(gUnkC8Ptr30);
        if (gUnkC8Ptr30)
            gUnkC8Ptr30->lpVtbl->field_0(gUnkC8Ptr30, 1);
        gUnkC8Ptr30 = 0;
    }
    if (gUnkC8Ptr31) {
        gUnkC8Ptr31->lpVtbl->field_1C(gUnkC8Ptr31);
        if (gUnkC8Ptr31)
            gUnkC8Ptr31->lpVtbl->field_0(gUnkC8Ptr31, 1);
        gUnkC8Ptr31 = 0;
    }
    if (gUnkC8Ptr32) {
        gUnkC8Ptr32->lpVtbl->field_1C(gUnkC8Ptr32);
        if (gUnkC8Ptr32)
            gUnkC8Ptr32->lpVtbl->field_0(gUnkC8Ptr32, 1);
        gUnkC8Ptr32 = 0;
    }
    if (g_unkC8Ptr0) {
        g_unkC8Ptr0->lpVtbl->field_1C(g_unkC8Ptr0);
        if (g_unkC8Ptr0)
            g_unkC8Ptr0->lpVtbl->field_0(g_unkC8Ptr0, 1);
        g_unkC8Ptr0 = 0;
        dword_10AA29C4 = 0;
        dword_10AA29D0 = 0;
    }
    if (gUnkC8Ptr7) {
        gUnkC8Ptr7->lpVtbl->field_1C(gUnkC8Ptr7);
        if (gUnkC8Ptr7)
            gUnkC8Ptr7->lpVtbl->field_0(gUnkC8Ptr7, 1);
        gUnkC8Ptr7 = 0;
    }
    if (gUnkC8Ptr8) {
        gUnkC8Ptr8->lpVtbl->field_1C(gUnkC8Ptr8);
        if (gUnkC8Ptr8)
            gUnkC8Ptr8->lpVtbl->field_0(gUnkC8Ptr8, 1);
        gUnkC8Ptr8 = 0;
    }
    if (gUnkC8Ptr33) {
        gUnkC8Ptr33->lpVtbl->field_1C(gUnkC8Ptr33);
        if (gUnkC8Ptr33)
            gUnkC8Ptr33->lpVtbl->field_0(gUnkC8Ptr33, 1);
        gUnkC8Ptr33 = 0;
    }
    if (gUnkC8Ptr3) {
        gUnkC8Ptr3->lpVtbl->field_1C(gUnkC8Ptr3);
        if (gUnkC8Ptr3)
            gUnkC8Ptr3->lpVtbl->field_0(gUnkC8Ptr3, 1);
        gUnkC8Ptr3 = 0;
    }
    if (gUnkC8Ptr2) {
        gUnkC8Ptr2->lpVtbl->field_1C(gUnkC8Ptr2);
        if (gUnkC8Ptr2)
            gUnkC8Ptr2->lpVtbl->field_0(gUnkC8Ptr2, 1);
        gUnkC8Ptr2 = 0;
    }
    if (gUnkC8Ptr34) {
        gUnkC8Ptr34->lpVtbl->field_1C(gUnkC8Ptr34);
        if (gUnkC8Ptr34)
            gUnkC8Ptr34->lpVtbl->field_0(gUnkC8Ptr34, 1);
        gUnkC8Ptr34 = 0;
    }
    if (gUnkC8Ptr35) {
        gUnkC8Ptr35->lpVtbl->field_1C(gUnkC8Ptr35);
        if (gUnkC8Ptr35)
            gUnkC8Ptr35->lpVtbl->field_0(gUnkC8Ptr35, 1);
        gUnkC8Ptr35 = 0;
    }
    if (gUnkC8Ptr36) {
        gUnkC8Ptr36->lpVtbl->field_1C(gUnkC8Ptr36);
        if (gUnkC8Ptr36)
            gUnkC8Ptr36->lpVtbl->field_0(gUnkC8Ptr36, 1);
        gUnkC8Ptr36 = 0;
        dword_10AA29F0 = 0;
    }
    if (gUnkC8Ptr37) {
        gUnkC8Ptr37->lpVtbl->field_1C(gUnkC8Ptr37);
        if (gUnkC8Ptr37)
            gUnkC8Ptr37->lpVtbl->field_0(gUnkC8Ptr37, 1);
        gUnkC8Ptr37 = 0;
        dword_10AA29EC = 0;
    }
    if (gUnkC8Ptr9) {
        gUnkC8Ptr9->lpVtbl->field_1C(gUnkC8Ptr9);
        if (gUnkC8Ptr9)
            gUnkC8Ptr9->lpVtbl->field_0(gUnkC8Ptr9, 1);
        gUnkC8Ptr9 = 0;
    }
    if (!a1) {
        if (gUnkC8Ptr6) {
            gUnkC8Ptr6->lpVtbl->field_1C(gUnkC8Ptr6);
            if (gUnkC8Ptr6)
                gUnkC8Ptr6->lpVtbl->field_0(gUnkC8Ptr6, 1);
            gUnkC8Ptr6 = 0;
        }
        v4 = gIostreamInit;
        if (gIostreamInit) {
            meth_DebugPrint(gIostreamInit);
            free(v4);
            gIostreamInit = 0;
        }
        sub_1005FCF0();
    }
}
// 100AC300: using guessed type int dword_100AC300;
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA2880: using guessed type int dword_10AA2880;
// 10AA29A8: using guessed type int dword_10AA29A8;
// 10AA29AC: using guessed type int dword_10AA29AC;
// 10AA29B0: using guessed type int dword_10AA29B0;
// 10AA29B4: using guessed type int dword_10AA29B4;
// 10AA29B8: using guessed type int dword_10AA29B8;
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29C4: using guessed type int dword_10AA29C4;
// 10AA29CC: using guessed type int dword_10AA29CC;
// 10AA29D0: using guessed type int dword_10AA29D0;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
// 10AA29E0: using guessed type int dword_10AA29E0;
// 10AA29E4: using guessed type int dword_10AA29E4;
// 10AA29E8: using guessed type int dword_10AA29E8;
// 10AA29EC: using guessed type int dword_10AA29EC;
// 10AA29F0: using guessed type int dword_10AA29F0;
// 10AA29F4: using guessed type int dword_10AA29F4;
