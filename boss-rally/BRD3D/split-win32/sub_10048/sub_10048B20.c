#include "types-win32.h"
//----- (10048B20) --------------------------------------------------------
void __stdcall sub_10048B20(int a1) {
    int waitTicksAdd;  // esi
    DWORD waitTicks;   // esi
    char **ppFilepath; // esi
    void *v4;          // esi

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
        ppFilepath = &g_aImagesWork1aBmFilepath;
        do {
            if (*ppFilepath)
                free(*ppFilepath);
            *ppFilepath = 0;
            ppFilepath += 29;
        } while ((int)ppFilepath < (int)&unk_10AA2584);
    }
    if (dword_10AA2940) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2940 + 28))(dword_10AA2940);
        if (dword_10AA2940)
            (**(void(__thiscall ***)(int, int))dword_10AA2940)(dword_10AA2940, 1);
        dword_10AA2940 = 0;
        dword_10A9CFFC = 0;
    }
    if (dword_10AA290C) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA290C + 28))(dword_10AA290C);
        if (dword_10AA290C)
            (**(void(__thiscall ***)(int, int))dword_10AA290C)(dword_10AA290C, 1);
        dword_10AA290C = 0;
        dword_10AA29AC = 0;
    }
    if (dword_10AA2910) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2910 + 28))(dword_10AA2910);
        if (dword_10AA2910)
            (**(void(__thiscall ***)(int, int))dword_10AA2910)(dword_10AA2910, 1);
        dword_10AA2910 = 0;
    }
    if (dword_10AA2914) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2914 + 28))(dword_10AA2914);
        if (dword_10AA2914)
            (**(void(__thiscall ***)(int, int))dword_10AA2914)(dword_10AA2914, 1);
        dword_10AA2914 = 0;
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
    if (dword_10AA2920) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2920 + 28))(dword_10AA2920);
        if (dword_10AA2920)
            (**(void(__thiscall ***)(int, int))dword_10AA2920)(dword_10AA2920, 1);
        dword_10AA2920 = 0;
        dword_10AA29A8 = 0;
    }
    if (dword_10AA2924) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2924 + 28))(dword_10AA2924);
        if (dword_10AA2924)
            (**(void(__thiscall ***)(int, int))dword_10AA2924)(dword_10AA2924, 1);
        dword_10AA2924 = 0;
    }
    if (dword_10AA2928) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2928 + 28))(dword_10AA2928);
        if (dword_10AA2928)
            (**(void(__thiscall ***)(int, int))dword_10AA2928)(dword_10AA2928, 1);
        dword_10AA2928 = 0;
        dword_10AA29C0 = 0;
        dword_10AA29CC = 0;
        dword_10AA29F4 = 0;
    }
    if (dword_10AA292C) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA292C + 28))(dword_10AA292C);
        if (dword_10AA292C)
            (**(void(__thiscall ***)(int, int))dword_10AA292C)(dword_10AA292C, 1);
        dword_10AA292C = 0;
        dword_10AA29B0 = 0;
    }
    if (dword_10AA2930) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2930 + 28))(dword_10AA2930);
        if (dword_10AA2930)
            (**(void(__thiscall ***)(int, int))dword_10AA2930)(dword_10AA2930, 1);
        dword_10AA2930 = 0;
    }
    if (dword_10AA2934) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2934 + 28))(dword_10AA2934);
        if (dword_10AA2934)
            (**(void(__thiscall ***)(int, int))dword_10AA2934)(dword_10AA2934, 1);
        dword_10AA2934 = 0;
    }
    if (dword_10AA2938) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2938 + 28))(dword_10AA2938);
        if (dword_10AA2938)
            (**(void(__thiscall ***)(int, int))dword_10AA2938)(dword_10AA2938, 1);
        dword_10AA2938 = 0;
    }
    if (dword_10AA293C) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA293C + 28))(dword_10AA293C);
        if (dword_10AA293C)
            (**(void(__thiscall ***)(int, int))dword_10AA293C)(dword_10AA293C, 1);
        dword_10AA293C = 0;
    }
    if (dword_10AA2940) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2940 + 28))(dword_10AA2940);
        if (dword_10AA2940)
            (**(void(__thiscall ***)(int, int))dword_10AA2940)(dword_10AA2940, 1);
        dword_10AA2940 = 0;
    }
    if (dword_10AA2944) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2944 + 28))(dword_10AA2944);
        if (dword_10AA2944)
            (**(void(__thiscall ***)(int, int))dword_10AA2944)(dword_10AA2944, 1);
        dword_10AA2944 = 0;
    }
    if (gUnkC8Ptr10) {
        (*(void(__thiscall **)(int))(*(_DWORD *)gUnkC8Ptr10 + 28))(gUnkC8Ptr10);
        if (gUnkC8Ptr10)
            (**(void(__thiscall ***)(int, int))gUnkC8Ptr10)(gUnkC8Ptr10, 1);
        gUnkC8Ptr10 = 0;
        dword_10AA29B8 = 0;
        dword_10AA29D8 = 0;
        dword_10AA29D4 = 0;
        dword_10AA2880 = 0;
    }
    if (dword_10AA294C) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA294C + 28))(dword_10AA294C);
        if (dword_10AA294C)
            (**(void(__thiscall ***)(int, int))dword_10AA294C)(dword_10AA294C, 1);
        dword_10AA294C = 0;
        dword_10AA29B8 = 0;
    }
    if (dword_10AA2950) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2950 + 28))(dword_10AA2950);
        if (dword_10AA2950)
            (**(void(__thiscall ***)(int, int))dword_10AA2950)(dword_10AA2950, 1);
        dword_10AA2950 = 0;
    }
    if (dword_10AA2954) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2954 + 28))(dword_10AA2954);
        if (dword_10AA2954)
            (**(void(__thiscall ***)(int, int))dword_10AA2954)(dword_10AA2954, 1);
        dword_10AA2954 = 0;
        dword_10AA29E4 = 0;
        dword_10AA29E0 = 0;
    }
    if (dword_10AA2958) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2958 + 28))(dword_10AA2958);
        if (dword_10AA2958)
            (**(void(__thiscall ***)(int, int))dword_10AA2958)(dword_10AA2958, 1);
        dword_10AA2958 = 0;
        dword_10AA29A8 = 0;
    }
    if (dword_10AA298C) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA298C + 28))(dword_10AA298C);
        if (dword_10AA298C)
            (**(void(__thiscall ***)(int, int))dword_10AA298C)(dword_10AA298C, 1);
        dword_10AA298C = 0;
        dword_10AA29E8 = 0;
    }
    if (dword_10AA295C) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA295C + 28))(dword_10AA295C);
        if (dword_10AA295C)
            (**(void(__thiscall ***)(int, int))dword_10AA295C)(dword_10AA295C, 1);
        dword_10AA295C = 0;
    }
    if (dword_10AA2960) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2960 + 28))(dword_10AA2960);
        if (dword_10AA2960)
            (**(void(__thiscall ***)(int, int))dword_10AA2960)(dword_10AA2960, 1);
        dword_10AA2960 = 0;
    }
    if (dword_10AA2964) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2964 + 28))(dword_10AA2964);
        if (dword_10AA2964)
            (**(void(__thiscall ***)(int, int))dword_10AA2964)(dword_10AA2964, 1);
        dword_10AA2964 = 0;
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
        (*(void(__thiscall **)(int))(*(_DWORD *)gUnkC8Ptr7 + 28))(gUnkC8Ptr7);
        if (gUnkC8Ptr7)
            (**(void(__thiscall ***)(int, int))gUnkC8Ptr7)(gUnkC8Ptr7, 1);
        gUnkC8Ptr7 = 0;
    }
    if (gUnkC8Ptr8) {
        (*(void(__thiscall **)(int))(*(_DWORD *)gUnkC8Ptr8 + 28))(gUnkC8Ptr8);
        if (gUnkC8Ptr8)
            (**(void(__thiscall ***)(int, int))gUnkC8Ptr8)(gUnkC8Ptr8, 1);
        gUnkC8Ptr8 = 0;
    }
    if (dword_10AA2974) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2974 + 28))(dword_10AA2974);
        if (dword_10AA2974)
            (**(void(__thiscall ***)(int, int))dword_10AA2974)(dword_10AA2974, 1);
        dword_10AA2974 = 0;
    }
    if (gUnkC8Ptr3) {
        (*(void(__thiscall **)(int))(*(_DWORD *)gUnkC8Ptr3 + 28))(gUnkC8Ptr3);
        if (gUnkC8Ptr3)
            (**(void(__thiscall ***)(int, int))gUnkC8Ptr3)(gUnkC8Ptr3, 1);
        gUnkC8Ptr3 = 0;
    }
    if (gUnkC8Ptr2) {
        (*(void(__thiscall **)(int))(*(_DWORD *)gUnkC8Ptr2 + 28))(gUnkC8Ptr2);
        if (gUnkC8Ptr2)
            (**(void(__thiscall ***)(int, int))gUnkC8Ptr2)(gUnkC8Ptr2, 1);
        gUnkC8Ptr2 = 0;
    }
    if (dword_10AA2984) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2984 + 28))(dword_10AA2984);
        if (dword_10AA2984)
            (**(void(__thiscall ***)(int, int))dword_10AA2984)(dword_10AA2984, 1);
        dword_10AA2984 = 0;
    }
    if (dword_10AA2988) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2988 + 28))(dword_10AA2988);
        if (dword_10AA2988)
            (**(void(__thiscall ***)(int, int))dword_10AA2988)(dword_10AA2988, 1);
        dword_10AA2988 = 0;
    }
    if (dword_10AA2990) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2990 + 28))(dword_10AA2990);
        if (dword_10AA2990)
            (**(void(__thiscall ***)(int, int))dword_10AA2990)(dword_10AA2990, 1);
        dword_10AA2990 = 0;
        dword_10AA29F0 = 0;
    }
    if (dword_10AA2994) {
        (*(void(__thiscall **)(int))(*(_DWORD *)dword_10AA2994 + 28))(dword_10AA2994);
        if (dword_10AA2994)
            (**(void(__thiscall ***)(int, int))dword_10AA2994)(dword_10AA2994, 1);
        dword_10AA2994 = 0;
        dword_10AA29EC = 0;
    }
    if (gUnkC8Ptr9) {
        (*(void(__thiscall **)(int))(*(_DWORD *)gUnkC8Ptr9 + 28))(gUnkC8Ptr9);
        if (gUnkC8Ptr9)
            (**(void(__thiscall ***)(int, int))gUnkC8Ptr9)(gUnkC8Ptr9, 1);
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
// 10AA290C: using guessed type int dword_10AA290C;
// 10AA2910: using guessed type int dword_10AA2910;
// 10AA2914: using guessed type int dword_10AA2914;
// 10AA2920: using guessed type int dword_10AA2920;
// 10AA2924: using guessed type int dword_10AA2924;
// 10AA2928: using guessed type int dword_10AA2928;
// 10AA292C: using guessed type int dword_10AA292C;
// 10AA2930: using guessed type int dword_10AA2930;
// 10AA2934: using guessed type int dword_10AA2934;
// 10AA2938: using guessed type int dword_10AA2938;
// 10AA293C: using guessed type int dword_10AA293C;
// 10AA2940: using guessed type int dword_10AA2940;
// 10AA2944: using guessed type int dword_10AA2944;
// 10AA2948: using guessed type int dword_10AA2948;
// 10AA294C: using guessed type int dword_10AA294C;
// 10AA2950: using guessed type int dword_10AA2950;
// 10AA2954: using guessed type int dword_10AA2954;
// 10AA2958: using guessed type int dword_10AA2958;
// 10AA295C: using guessed type int dword_10AA295C;
// 10AA2960: using guessed type int dword_10AA2960;
// 10AA2964: using guessed type int dword_10AA2964;
// 10AA296C: using guessed type int dword_10AA296C;
// 10AA2970: using guessed type int dword_10AA2970;
// 10AA2974: using guessed type int dword_10AA2974;
// 10AA297C: using guessed type int dword_10AA297C;
// 10AA2980: using guessed type int dword_10AA2980;
// 10AA2984: using guessed type int dword_10AA2984;
// 10AA2988: using guessed type int dword_10AA2988;
// 10AA298C: using guessed type int dword_10AA298C;
// 10AA2990: using guessed type int dword_10AA2990;
// 10AA2994: using guessed type int dword_10AA2994;
// 10AA2998: using guessed type int dword_10AA2998;
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
