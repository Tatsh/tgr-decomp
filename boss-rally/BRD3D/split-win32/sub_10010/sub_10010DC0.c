#include "types-win32.h"
//----- (10010DC0) --------------------------------------------------------
int __cdecl sub_10010DC0(int a1, int a2, int a3) {
    _DWORD edx1;    // edx
    _DWORD ebx1;    // ebx
    _DWORD edi1;    // edi
    _DWORD ecx2;    // ecx
    _DWORD esi2;    // esi
    _DWORD eax3;    // eax
    _DWORD esi9;    // esi
    _DWORD ebp9;    // ebp
    _QWORD rax11;   // rax
    _DWORD esi14;   // esi
    _DWORD edx15;   // edx
    _DWORD ebx15;   // ebx
    _DWORD ecx15;   // ecx
    _DWORD esi16;   // esi
    _DWORD ebp16;   // ebp
    _DWORD edi19;   // edi
    _DWORD ebx20;   // ebx
    _WORD ax22;     // ax
    _DWORD esi31;   // esi
    _DWORD ecx34;   // ecx
    _DWORD eax34;   // eax
    _WORD ax36;     // ax
    _DWORD edx39;   // edx
    _DWORD eax42;   // eax
    _DWORD esi42;   // esi
    _DWORD ebx43;   // ebx
    _DWORD edi43;   // edi
    double st7_46;  // st7
    _DWORD ecx47;   // ecx
    _DWORD edx48;   // edx
    _DWORD eax51;   // eax
    _DWORD ebp57;   // ebp
    _DWORD ecx58;   // ecx
    _DWORD edi58;   // edi
    _DWORD edx58;   // edx
    _DWORD esi59;   // esi
    _WORD ax60;     // ax
    _DWORD edi62;   // edi
    _WORD si62;     // si
    _DWORD edx63;   // edx
    _WORD cx64;     // cx
    double st7_65;  // st7
    _DWORD ecx65;   // ecx
    double st7_71;  // st7
    _DWORD ebx71;   // ebx
    _QWORD rax71;   // rax
    double st7_71a; // st7
    _QWORD rax71a;  // rax
    double st7_71b; // st7
    int result;     // eax
    _DWORD esi73;   // esi
    _DWORD edx74;   // edx
    _DWORD eax74a;  // eax
    _DWORD ebp74;   // ebp
    _DWORD ebx74;   // ebx
    _DWORD eax74;   // eax
    _DWORD ecx76;   // ecx
    _DWORD ecx82;   // ecx
    _DWORD ecx84;   // ecx
    _DWORD ecx86;   // ecx
    _DWORD ecx88;   // ecx
    _DWORD ebp88;   // ebp
    _DWORD eax88;   // eax
    _BYTE cc90;     // cc
    float var48;    // [esp+0h] [ebp-48h]
    float var44;    // [esp+4h] [ebp-44h]
    int var14;      // [esp+34h] [ebp-14h]
    int var10;      // [esp+38h] [ebp-10h]
    int varC[3];    // [esp+3Ch] [ebp-Ch]
    _DWORD arg8;    // [esp+54h] [ebp+Ch]
    _DWORD arg8a;   // [esp+54h] [ebp+Ch]

    edx1 = dword_10A9BBCC;
    ebx1 = dword_10A9BBC4;
    edi1 = 0;
    dword_102E5ED0 = 0;
    if (dword_10A9BBCC <= dword_10A9BBC4) {
        while (1) {
            ecx2 = dword_10A9BBD0[edx1];
            esi2 = dword_10A9BCD0[edx1];
            if (ecx2 <= esi2)
                break;
        LABEL_6:
            if (++edx1 > ebx1)
                goto LABEL_9;
        }
        eax3 = (char *)&dword_10364000[edi1] + 1;
        while (eax3 != (char *)&unk_10364301) {
            *(eax3 - 1) = ecx2;
            *eax3 = edx1;
            ++edi1;
            eax3 += 4;
            if (++ecx2 > esi2)
                goto LABEL_6;
        }
        dword_102E5ED0 = 1;
    }
LABEL_9:
    esi9 = (float *)dword_106C6490;
    LOBYTE(dword_10364000[edi1]) = -1;
    BYTE1(dword_10364000[edi1]) = -1;
    ebp9 = (__int64)(esi9[12] * 0.03125);
    if (ebp9 == 64)
        ebp9 = 63;
    rax11 = (__int64)(esi9[13] * 0.03125);
    if ((_DWORD)rax11 == 64)
        LODWORD(rax11) = 63;
    if (edi1 > 0) {
        esi14 = (unsigned __int8 *)dword_10364000 + 1;
        var14 = edi1;
        do {
            edx15 = *esi14 - (_DWORD)rax11;
            ebx15 = *(esi14 - 1) - ebp9;
            esi14 += 4;
            ebx1 = edx15 * edx15 + ebx15 * ebx15;
            ecx15 = var14;
            *(_WORD *)(esi14 - 3) = ebx1;
            var14 = ecx15 - 1;
        } while (ecx15 != 1);
    }
    qsort(dword_10364000, edi1, 4u, CompareFunction);
    sub_10060780(ebx1, byte_1038B4C0, g_TrackInstances, -1);
    esi16 = 0;
    dword_103643A4 = 0;
    dword_10363FEC = -1;
    dword_102E5F24 = -1;
    dword_102E5EC0 = -1;
    ebp16 = (-3 - (__int64)(flt_106C0210 * -0.03125)) * (-3 - (__int64)(flt_106C0210 * -0.03125));
    if (!dword_106909E0 || (var10 = 9, dword_106C6490 != (void *)(dword_106C2CF8 + 10248)))
        var10 = 1;
    edi19 = LOBYTE(dword_10364000[0]);
    if (LOBYTE(dword_10364000[0]) != 255) {
        ebx20 = (__int16 *)dword_10364000 + 1;
        while (1) {
            ax22 = *ebx20;
            if (*ebx20 > 8 && dword_10363FEC == -1)
                dword_10363FEC = esi16;
            if (ax22 > var10 && dword_102E5EC0 == -1)
                dword_102E5EC0 = esi16;
            if (ax22 > ebp16 && dword_102E5F24 == -1)
                dword_102E5F24 = esi16;
            esi31 = *((unsigned __int8 *)ebx20 - 1);
            if (dword_10680618 && byte_1038B4C0[(_DWORD)dword_10680618] &&
                sub_1003A950(*(float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 48),
                             *(float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 52))) {
                ecx34 = dword_103643A4;
                eax34 = dword_10680618;
                word_10362F28[dword_103643A4] = (__int16)dword_10680618;
                dword_103643A4 = ecx34 + 1;
                byte_1038B4C0[(_DWORD)eax34] = 0;
            }
            var14 = sub_10002E90(edi19, esi31);
            if (var14) {
                for (ax36 = sub_10002F40((unsigned __int16 *)&var14); ax36;
                     ax36 = sub_10002F40((unsigned __int16 *)&var14)) {
                    if (byte_1038B4C0[ax36] && (void *)ax36 != dword_10680618) {
                        edx39 = dword_103643A4;
                        byte_1038B4C0[ax36] = 0;
                        word_10362F28[edx39] = ax36;
                        dword_103643A4 = edx39 + 1;
                    }
                }
            }
            ebx20 += 2;
            edi19 = *((unsigned __int8 *)ebx20 - 2);
            if (edi19 == 255)
                break;
            esi16 = dword_103643A4;
        }
    }
    eax42 = 0;
    esi42 = 0;
    dword_102E5ED8 = 0;
    if (dword_100B36FC > 0) {
        ebx43 = dword_10277E60;
        edi43 = a3 + 48;
        do {
            if (*(_DWORD *)(edi43 + 3800)) {
                if (*ebx43) {
                    sub_1003AEE0(flt_102E54A8, (float *)edi43, (float *)dword_106C6490 + 12);
                    st7_46 = sub_1003AC90((float *)dword_106C6490, flt_102E54A8);
                    if (st7_46 >= 2.0) {
                        ecx47 = dword_102E5ED8 - 1;
                        if (dword_102E5ED8 - 1 >= 0) {
                            edx48 = &dword_102E5EE4[ecx47];
                            do {
                                if (st7_46 >= flt_10363F28[ecx47])
                                    break;
                                --edx48;
                                dword_10363F2C[ecx47] = flt_10363F28[ecx47];
                                edx48[1] = dword_102E5EE0[ecx47--];
                            } while (ecx47 >= 0);
                        }
                        eax51 = dword_102E5ED8;
                        dword_102E5EE4[ecx47] = esi42;
                        dword_10363F2C[ecx47] = st7_46;
                        dword_102E5ED8 = eax51 + 1;
                    }
                }
            }
            ++esi42;
            ++ebx43;
            edi43 += 11112;
        } while (esi42 < dword_100B36FC);
        eax42 = dword_102E5ED8;
    }
    if (eax42 > 4) {
        eax42 = 4;
        dword_102E5ED8 = 4;
    }
    if (eax42 > 0) {
        ebp57 = dword_102E5EE0;
        var10 = dword_102E5ED8;
        do {
            ecx58 = *ebp57;
            edi58 = 0;
            edx58 = a3 + 11112 * *ebp57;
            if (*(int *)(edx58 + 10640) > 0) {
                esi59 = (unsigned __int16 *)(edx58 + 10576);
                do {
                    ax60 = *esi59++;
                    ++edi58;
                    byte_1038B4C0[ax60] |= 1 << ecx58;
                } while (edi58 < *(_DWORD *)(edx58 + 10640));
            }
            ++ebp57;
            --var10;
        } while (*(float *)&var10 != 0.0);
    }
    edi62 = dword_106C1988;
    si62 = 0;
    LOWORD(dword_1039B6CC) = 0;
    if (dword_106C1988 > 0) {
        edx63 = (unsigned __int16 *)&unk_106C6498;
        do {
            cx64 = *edx63++;
            si62 |= *(_WORD *)(dword_106C7CA8 + 84 * cx64 + 74);
            --edi62;
            LOWORD(dword_1039B6CC) = si62;
        } while (edi62);
    }
    st7_65 = *(float *)dword_106C6490;
    ecx65 = *((float *)dword_106C6490 + 1);
    var10 = *(int *)dword_106C6490;
    arg8 = ecx65;
    if (st7_65 == 0.0 && ecx65 == 0.0)
        *(float *)&var10 = 0.000099999997;
    dword_103643B8 = (int)sub_10069530();
    var44 = arg8 * 50.0;
    var48 = *(float *)&var10 * 50.0;
    sub_10030E20(
        (int)&flt_106C0860, dword_103643B8, var48, var44, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
    if (dword_106C661C) {
        flt_103643A8 = *(float *)(dword_106C2CF8 + 32) - *(float *)dword_106C2CF8 * 4.0;
        flt_103643AC = *(float *)(dword_106C2CF8 + 36) - *(float *)(dword_106C2CF8 + 4) * 4.0;
        flt_103643B0 = *(float *)(dword_106C2CF8 + 40) - *(float *)(dword_106C2CF8 + 8) * 4.0;
    } else {
        LODWORD(flt_103643A8) = dword_106C0670;
        LODWORD(flt_103643AC) = dword_106C0674;
        LODWORD(flt_103643B0) = dword_106C0678;
    }
    sub_1003AE50(&flt_103643A8);
    sub_1003AD10((int)&flt_103643A8, 120.0);
    st7_71 = flt_103643A8;
    dword_10364388 = (dword_10364388 + 1) % 4;
    ebx71 = 24 * dword_10364388;
    qmemcpy((char *)&unk_100A64E8 + 24 * dword_10364388, &unk_100AA860, 0x18u);
    rax71 = (__int64)st7_71;
    st7_71a = flt_103643AC;
    byte_100A64F8[ebx71] = rax71;
    rax71a = (__int64)st7_71a;
    st7_71b = flt_103643B0;
    byte_100A64F9[ebx71] = rax71a;
    byte_100A64FA[ebx71] = (__int64)st7_71b;
    result = dword_100B36F8;
    *(float *)&var10 = 0.0;
    if (dword_100B36F8 > 0) {
        arg8a = (int *)(a2 + 96);
        do {
            esi73 = *arg8a;
            if (*arg8a) {
                edx74 = *(_DWORD *)(esi73 + 48);
                eax74a = *(_DWORD *)(esi73 + 52);
                ebp74 = (__int16 *)(esi73 + 10656);
                ebx74 = (__int16 *)(esi73 + 10652);
                *(float *)&varC[2] = *(float *)(esi73 + 56) - *(float *)(esi73 + 10644);
                varC[0] = edx74;
                varC[1] = eax74a;
                sub_1000F480(a1, (int)varC, 8, (_WORD *)(esi73 + 10652), (_WORD *)(esi73 + 10656));
                eax74 = dword_106C5708;
                if (*(__int16 *)(esi73 + 10652) < *(_DWORD *)(a1 + 88 * dword_106C5708)) {
                    *ebx74 = *(_WORD *)(a1 + 88 * dword_106C5708);
                    eax74 = dword_106C5708;
                }
                ecx76 = (__int16 *)(a1 + 88 * eax74);
                if (*ebp74 < *(_DWORD *)ecx76) {
                    *ebp74 = *ecx76;
                    eax74 = dword_106C5708;
                }
                if (*(__int16 *)(esi73 + 10654) < *(_DWORD *)(a1 + 88 * eax74 + 4)) {
                    *(_WORD *)(esi73 + 10654) = *(_WORD *)(a1 + 88 * eax74 + 4);
                    eax74 = dword_106C5708;
                }
                if (*(__int16 *)(esi73 + 10658) < *(_DWORD *)(a1 + 88 * eax74 + 4)) {
                    *(_WORD *)(esi73 + 10658) = *(_WORD *)(a1 + 88 * eax74 + 4);
                    eax74 = dword_106C5708;
                }
                ecx82 = (_WORD *)(a1 + 88 * eax74);
                if (*ebx74 > *((_DWORD *)ecx82 + 2) + *(_DWORD *)ecx82) {
                    *ebx74 = ecx82[4] + *ecx82;
                    eax74 = dword_106C5708;
                }
                ecx84 = (_WORD *)(a1 + 88 * eax74);
                if (*(__int16 *)(esi73 + 10656) > *((_DWORD *)ecx84 + 2) + *(_DWORD *)ecx84) {
                    *(_WORD *)(esi73 + 10656) = ecx84[4] + *ecx84;
                    eax74 = dword_106C5708;
                }
                ecx86 = a1 + 88 * eax74;
                if (*(__int16 *)(esi73 + 10654) >
                    *(_DWORD *)(ecx86 + 4) + *(_DWORD *)(ecx86 + 12)) {
                    *(_WORD *)(esi73 + 10654) = *(_WORD *)(ecx86 + 4) + *(_WORD *)(ecx86 + 12);
                    eax74 = dword_106C5708;
                }
                ecx88 = *(_DWORD *)(a1 + 88 * eax74 + 12);
                ebp88 = *(_DWORD *)(a1 + 88 * eax74 + 4);
                eax88 = a1 + 88 * eax74;
                if (*(__int16 *)(esi73 + 10658) > ebp88 + ecx88)
                    *(_WORD *)(esi73 + 10658) = *(_WORD *)(eax88 + 4) + *(_WORD *)(eax88 + 12);
            }
            result = var10 + 1;
            cc90 = ++var10 < dword_100B36F8;
            arg8a += 32;
        } while (cc90);
    }
    return result;
}
// 1007E2A0: using guessed type int __cdecl qsort(_DWORD, _DWORD, _DWORD, _DWORD);
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 102E5EC0: using guessed type int dword_102E5EC0;
// 102E5ED0: using guessed type int dword_102E5ED0;
// 102E5ED8: using guessed type int dword_102E5ED8;
// 102E5F24: using guessed type int dword_102E5F24;
// 10363FEC: using guessed type int dword_10363FEC;
// 10364000: using guessed type int dword_10364000[];
// 10364388: using guessed type int dword_10364388;
// 103643A4: using guessed type int dword_103643A4;
// 103643A8: using guessed type float flt_103643A8;
// 103643AC: using guessed type float flt_103643AC;
// 103643B0: using guessed type float flt_103643B0;
// 103643B8: using guessed type int dword_103643B8;
// 1039B6CC: using guessed type int dword_1039B6CC;
// 106909E0: using guessed type int dword_106909E0;
// 106C0210: using guessed type float flt_106C0210;
// 106C0670: using guessed type int dword_106C0670;
// 106C0674: using guessed type int dword_106C0674;
// 106C0678: using guessed type int dword_106C0678;
// 106C1988: using guessed type int dword_106C1988;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 106C5708: using guessed type int dword_106C5708;
// 106C661C: using guessed type int dword_106C661C;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 106C7CAC: using guessed type int g_TrackInstances;
// 10A9BBC4: using guessed type int dword_10A9BBC4;
// 10A9BBCC: using guessed type int dword_10A9BBCC;
