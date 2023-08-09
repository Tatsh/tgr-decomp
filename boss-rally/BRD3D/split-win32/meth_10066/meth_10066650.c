#include "types-win32.h"
//----- (10066650) --------------------------------------------------------
int *__thiscall meth_10066650(_DWORD *this) {
    _DWORD;         // ebp
    _DWORD ecx1;    // ecx
    _DWORD esi2;    // esi
    _DWORD edi2;    // edi
    _DWORD ecx3;    // ecx
    double st7_13;  // st7
    double st6_13;  // st6
    double st7_14;  // st7
    double st7_22;  // st7
    double st6_22;  // st6
    double st7_23;  // st7
    _DWORD eax29;   // eax
    _DWORD ebp31;   // ebp
    _DWORD eax31;   // eax
    double st7_31;  // st7
    _DWORD edx32;   // edx
    int *result;    // eax
    _DWORD ebp33;   // ebp
    _DWORD ecx34;   // ecx
    _DWORD esi35;   // esi
    _DWORD edi38;   // edi
    _DWORD ecx46;   // ecx
    _DWORD eax46;   // eax
    _BYTE cc47;     // cc
    _DWORD ecx51;   // ecx
    _DWORD edi53;   // edi
    _DWORD esi57;   // esi
    _DWORD ecx57;   // ecx
    _BYTE al57;     // al
    _BYTE cl57;     // cl
    _DWORD eax57;   // eax
    _DWORD eax57a;  // eax
    _DWORD eax57b;  // eax
    _DWORD esi61;   // esi
    _DWORD edi61;   // edi
    float varF4;    // [esp+0h] [ebp-F4h]
    float varF0;    // [esp+4h] [ebp-F0h]
    float varEC;    // [esp+8h] [ebp-ECh]
    float varECa;   // [esp+8h] [ebp-ECh]
    _DWORD varD8;   // [esp+1Ch] [ebp-D8h]
    _DWORD varD8a;  // [esp+1Ch] [ebp-D8h]
    _DWORD varD8b;  // [esp+1Ch] [ebp-D8h]
    _DWORD varD4;   // [esp+20h] [ebp-D4h]
    _DWORD varD4a;  // [esp+20h] [ebp-D4h]
    int varD0;      // [esp+24h] [ebp-D0h]
    int varCC;      // [esp+28h] [ebp-CCh]
    int varC8;      // [esp+2Ch] [ebp-C8h]
    int varC4;      // [esp+30h] [ebp-C4h]
    int varC0;      // [esp+34h] [ebp-C0h]
    int varBC;      // [esp+38h] [ebp-BCh]
    float varB8[3]; // [esp+3Ch] [ebp-B8h]
    float varAC[3]; // [esp+48h] [ebp-ACh]
    int varA0;      // [esp+54h] [ebp-A0h]
    int var9C;      // [esp+58h] [ebp-9Ch]
    char Base[152]; // [esp+5Ch] [ebp-98h]

    varD4 = *(float *)(dword_106C7CB8 + 100);
    ecx1 = dword_100B36F8;
    varBC = this;
    varD0 = 0;
    if (dword_100B36F8 > 0) {
        esi2 = &varA0;
        edi2 = (float *)&unk_10ACD4FC;
        do {
            ecx3 = *((_DWORD *)edi2 - 1);
            if (ecx3) {
                if ((_DWORD *)ecx3 == this || *(_DWORD *)(ecx3 + 320) >= dword_100B4050) {
                    if (gGameMode || *(_DWORD *)(ecx3 + 320) < dword_100B4050 ||
                        (*(_BYTE *)(*(_DWORD *)(ecx3 + 3840) + 104) & 2) == 0 ||
                        *(_BYTE *)(ecx3 + 10671) != 2 || *(float *)(ecx3 + 10672) != 0.0) {
                        st7_13 = *((float *)this + 1021);
                        varCC = *(_DWORD *)(ecx3 + 4012) - this[1003];
                        st6_13 = (double)varCC * varD4 + st7_13 - *(float *)(ecx3 + 4084);
                        varD8 = st6_13;
                        if (st6_13 <= varD4 * 0.5) {
                            if (varD4 * -0.5 > varD8)
                                varD8 = varD4 + varD8;
                            st7_14 = sub_1003B0E0((float *)this + 12, (float *)(ecx3 + 48));
                        } else {
                            varD8 = varD8 - varD4;
                            st7_14 = sub_1003B0E0((float *)this + 12, (float *)(ecx3 + 48));
                        }
                        goto LABEL_28;
                    }
                    *esi2 = 1000000000.0;
                } else {
                    *esi2 = 1.0e10;
                }
            } else {
                if (gGameMode || *(_DWORD *)edi2 < dword_100B4050 || ((_BYTE)edi2[1] & 2) == 0) {
                    st7_22 = *((float *)this + 1021);
                    varCC = *((_DWORD *)edi2 - 8) - this[1003];
                    st6_22 = (double)varCC * varD4 + st7_22 - *(edi2 - 5);
                    varD8 = st6_22;
                    if (st6_22 > varD4 * 0.5) {
                        st7_23 = varD8 - varD4;
                        goto LABEL_26;
                    }
                    if (varD4 * -0.5 > varD8) {
                        st7_23 = varD4 + varD8;
                    LABEL_26:
                        varD8 = st7_23;
                    }
                    st7_14 = sub_1003B0E0((float *)this + 12, edi2 - 25);
                LABEL_28:
                    *esi2 = st7_14 + varD8 * varD8;
                    goto LABEL_29;
                }
                *esi2 = 1000000000.0;
            }
        LABEL_29:
            eax29 = varD0;
            ecx1 = dword_100B36F8;
            *((_DWORD *)esi2 + 1) = varD0;
            edi2 += 32;
            esi2 += 2;
            varD0 = eax29 + 1;
        } while (eax29 + 1 < ecx1);
    }
    if (ecx1 > 1) {
        ebp31 = this[80];
        eax31 = 8 * ebp31;
        st7_31 = *(&varA0 + 2 * ebp31);
        *(float *)((char *)&varA0 + eax31) = varA0;
        var9C = ebp31;
        varA0 = st7_31;
        *(int *)((char *)&var9C + eax31) = 0;
        qsort(Base, ecx1 - 1, 8u, sub_10066620);
    }
    edx32 = 0;
    varC0 = 0;
    do {
        result = (int *)dword_100B36F8;
        ebp33 = 0;
        varD8a = 1;
        varD0 = 0;
        varD4a = 0;
        if (dword_100B36F8 > 0) {
            varC4 = &varCC;
            ecx34 = &varA0;
            varC8 = &varA0;
            do {
                esi35 = (char *)&unk_10ACD498 + 128 * *((_DWORD *)ecx34 + 1);
                if (*((_DWORD *)esi35 + 29) != edx32 || *((_DWORD *)esi35 + 25) < dword_100B4050)
                    goto LABEL_47;
                if (varD4a >= 1) {
                    edi38 = *((_DWORD *)esi35 + 24);
                    if (!edi38)
                        goto LABEL_47;
                    varD8a = 0;
                    if (*(_DWORD *)(edi38 + 3844) || *ecx34 <= 80000.0)
                        goto LABEL_47;
                } else {
                    ++varD4a;
                    edi38 = *((_DWORD *)esi35 + 24);
                    if (!edi38)
                        goto LABEL_47;
                    varD8a = 0;
                    if ((esi35[104] & 2) == 0 || *(_BYTE *)(edi38 + 10671) != 2 ||
                        *(float *)(edi38 + 10672) != 0.0)
                        goto LABEL_47;
                }
                *(_DWORD *)esi35 = *(_DWORD *)(edi38 + 48);
                *((_DWORD *)esi35 + 1) = *(_DWORD *)(edi38 + 52);
                *((_DWORD *)esi35 + 2) = *(_DWORD *)(edi38 + 56);
                *((_DWORD *)esi35 + 6) = *(_DWORD *)(edi38 + 4132);
                *((_DWORD *)esi35 + 7) = *(_DWORD *)(edi38 + 4136);
                *((_DWORD *)esi35 + 8) = *(_DWORD *)(edi38 + 4140);
                *((_DWORD *)esi35 + 9) = *(_DWORD *)(edi38 + 4144);
                *((_DWORD *)esi35 + 10) = *(_DWORD *)(edi38 + 3980);
                *((_DWORD *)esi35 + 11) = *(_DWORD *)(edi38 + 3984);
                *((_DWORD *)esi35 + 12) = *(_DWORD *)(edi38 + 4016);
                *((_DWORD *)esi35 + 13) = *(_DWORD *)(edi38 + 4068);
                *((_DWORD *)esi35 + 14) = *(_DWORD *)(edi38 + 4076);
                *((_DWORD *)esi35 + 15) = *(_DWORD *)(edi38 + 4080);
                *((_DWORD *)esi35 + 16) = *(_DWORD *)(edi38 + 4008);
                *((_DWORD *)esi35 + 17) = *(_DWORD *)(edi38 + 4012);
                *((_DWORD *)esi35 + 18) = *(_DWORD *)(edi38 + 4000);
                *((_DWORD *)esi35 + 19) = *(_DWORD *)(edi38 + 4004);
                meth_DebugPrint(*((void **)esi35 + 16));
                ecx46 = *((_DWORD *)esi35 + 24);
                *((_DWORD *)esi35 + 20) = *(_DWORD *)(edi38 + 4084);
                edx32 = varC0;
                *((_DWORD *)esi35 + 21) = *(_DWORD *)(edi38 + 4088);
                eax46 = varC4;
                ++ebp33;
                *((_DWORD *)esi35 + 24) = 0;
                *eax46 = ecx46;
                ecx34 = varC8;
                *(_DWORD *)(edi38 + 3840) = 0;
                varC4 = eax46 + 1;
                *(_DWORD *)(edi38 + 3844) = 60;
            LABEL_47:
                result = (int *)(varD0 + 1);
                ecx34 += 2;
                cc47 = ++varD0 < dword_100B36F8;
                varC8 = ecx34;
            } while (cc47);
        }
        if (varD8a) {
            ++ebp33;
            result = &dword_10ACDEA8[2778 * edx32 + 2778 * dword_100B4050];
            *(&varD0 + ebp33) = (int)result;
        }
        varD0 = 0;
        if (ebp33) {
            ecx51 = &var9C;
            varC4 = &var9C;
            result = &varCC + ebp33;
            varC8 = (float *)(varBC + 940);
            do {
                if (varD0 >= dword_100B36F8)
                    break;
                edi53 = (char *)&unk_10ACD498 + 128 * *ecx51;
                if (*((_DWORD *)edi53 + 29) == edx32 && *((_DWORD *)edi53 + 25) >= dword_100B4050 &&
                    (edi53[104] & 2) == 0 && !*((_DWORD *)edi53 + 24)) {
                    esi57 = *(result - 1);
                    ecx57 = *((_DWORD *)edi53 + 9);
                    *((_DWORD *)edi53 + 24) = esi57;
                    *(_DWORD *)(esi57 + 4144) = ecx57;
                    varD8b = result - 1;
                    *(_DWORD *)(esi57 + 3980) = *((_DWORD *)edi53 + 10);
                    *(_DWORD *)(esi57 + 3984) = *((_DWORD *)edi53 + 11);
                    *(_DWORD *)(esi57 + 4016) = *((_DWORD *)edi53 + 12);
                    *(_DWORD *)(esi57 + 4068) = *((_DWORD *)edi53 + 13);
                    *(_DWORD *)(esi57 + 4076) = *((_DWORD *)edi53 + 14);
                    *(_DWORD *)(esi57 + 4080) = *((_DWORD *)edi53 + 15);
                    *(_DWORD *)(esi57 + 4008) = *((_DWORD *)edi53 + 16);
                    *(_DWORD *)(esi57 + 4012) = *((_DWORD *)edi53 + 17);
                    *(_DWORD *)(esi57 + 4000) = *((_DWORD *)edi53 + 18);
                    *(_DWORD *)(esi57 + 4004) = *((_DWORD *)edi53 + 19);
                    meth_DebugPrint(*(void **)(esi57 + 4008));
                    *(_DWORD *)(esi57 + 4084) = *((_DWORD *)edi53 + 20);
                    *(_DWORD *)(esi57 + 4088) = *((_DWORD *)edi53 + 21);
                    *(_DWORD *)(esi57 + 3840) = edi53;
                    *(_BYTE *)(esi57 + 10671) = 0;
                    *(_DWORD *)(esi57 + 10672) = 1065353216;
                    *(_DWORD *)(esi57 + 3960) = 1;
                    meth_10062C50((_DWORD *)esi57);
                    meth_10065630((_DWORD *)esi57);
                    *(_DWORD *)(esi57 + 3968) = *((_DWORD *)edi53 + 3);
                    *(_DWORD *)(esi57 + 3972) = *((_DWORD *)edi53 + 4);
                    *(_DWORD *)(esi57 + 3976) = *((_DWORD *)edi53 + 5);
                    *(float *)&varEC = *((float *)edi53 + 2) - -0.1;
                    meth_10076420((float *)esi57, *(_DWORD *)edi53, *((_DWORD *)edi53 + 1), varEC);
                    *(_BYTE *)(esi57 + 10671) = 0;
                    *(_DWORD *)(esi57 + 10672) = 1065353216;
                    al57 = edi53[94];
                    cl57 = edi53[93];
                    *(_BYTE *)(esi57 + 10668) = edi53[92];
                    *(_BYTE *)(esi57 + 10669) = cl57;
                    *(_BYTE *)(esi57 + 10670) = al57;
                    sub_100661B0(esi57, (int)edi53);
                    eax57 = *(_DWORD *)(esi57 + 3980) + 40 * *(_DWORD *)(esi57 + 3984);
                    sub_1003AEE0(varB8, (float *)(eax57 + 64), (float *)(eax57 + 76));
                    eax57a = *(_DWORD *)(esi57 + 3980) + 40 * *(_DWORD *)(esi57 + 3984);
                    sub_1003AEE0(varAC, (float *)(eax57a + 104), (float *)(eax57a + 116));
                    eax57b = *(_DWORD *)(esi57 + 3980) + 40 * *(_DWORD *)(esi57 + 3984);
                    sub_1003ADA0((float *)esi57, (float *)(eax57b + 76), (float *)(eax57b + 116));
                    sub_1003B050((float *)(esi57 + 16), varB8, varAC);
                    sub_1003AC30((float *)(esi57 + 32), (float *)esi57, (float *)(esi57 + 16));
                    sub_1003AE50((float *)(esi57 + 32));
                    sub_1003AC30((float *)(esi57 + 16), (float *)(esi57 + 32), (float *)esi57);
                    sub_1003AE50((float *)(esi57 + 16));
                    *(_DWORD *)(esi57 + 3988) = *(_DWORD *)esi57;
                    *(_DWORD *)(esi57 + 3992) = *(_DWORD *)(esi57 + 4);
                    *(_DWORD *)(esi57 + 3996) = *(_DWORD *)(esi57 + 8);
                    meth_10076700(esi57, (void *)esi57);
                    if ((*(_BYTE *)(*(_DWORD *)(esi57 + 3840) + 104) & 1) != 0) {
                        meth_100767A0((_DWORD *)esi57, 0, 0, 0);
                    } else {
                        *(float *)&varECa = *(float *)(esi57 + 8) * 50.0;
                        *(float *)&varF0 = *(float *)(esi57 + 4) * 50.0;
                        *(float *)&varF4 = *(float *)esi57 * 50.0;
                        meth_100767A0((_DWORD *)esi57, varF4, varF0, varECa);
                    }
                    --ebp33;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 360) + 412) = 0;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 360) + 436) = 0;
                    *(_BYTE *)(*(_DWORD *)(esi57 + 360) + 416) = 2;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 364) + 412) = 0;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 364) + 436) = 0;
                    *(_BYTE *)(*(_DWORD *)(esi57 + 364) + 416) = 2;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 372) + 412) = 0;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 372) + 436) = 0;
                    *(_BYTE *)(*(_DWORD *)(esi57 + 372) + 416) = 2;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 368) + 412) = 0;
                    result = varD8b;
                    *(_DWORD *)(*(_DWORD *)(esi57 + 368) + 436) = 0;
                    ecx51 = varC4;
                    *(_BYTE *)(*(_DWORD *)(esi57 + 368) + 416) = 2;
                    edx32 = varC0;
                    *(_DWORD *)(esi57 + 3744) = 0;
                    *(_DWORD *)(esi57 + 3748) = 0;
                    *(_DWORD *)(esi57 + 3752) = 0;
                    *(_DWORD *)(esi57 + 3756) = -180;
                    *(_DWORD *)(esi57 + 860) = 40;
                    *(_DWORD *)(esi57 + 3616) = 0;
                }
                esi61 = (int)varC8;
                edi61 = (char *)&unk_10ACD498 + 128 * *ecx51;
                ecx51 += 2;
                *(_DWORD *)varC8 = edi61;
                ++varD0;
                varC8 = (float *)(esi61 + 4);
                varC4 = ecx51;
            } while (ebp33);
        }
        varC0 = ++edx32;
    } while (edx32 < 2);
    return result;
}
// 1007E2A0: using guessed type int __cdecl qsort(_DWORD, _DWORD, _DWORD, _DWORD);
// 100B36F8: using guessed type int dword_100B36F8;
// 100B4050: using guessed type int dword_100B4050;
