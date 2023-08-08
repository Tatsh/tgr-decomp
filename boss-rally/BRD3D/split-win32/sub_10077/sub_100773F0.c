#include "types-win32.h"
//----- (100773F0) --------------------------------------------------------
int __cdecl sub_100773F0(int *a1, int *a2) {
    int v2;                      // ebp
    IDirectInputDeviceAVtbl *v3; // edx
    int v4;                      // eax
    int result;                  // eax
    int v6;                      // eax
    bool v7;                     // zf
    HRESULT v8;                  // eax
    int v9;                      // edx
    int v10;                     // ecx
    int v11;                     // eax
    int *v12;                    // eax
    int v13;                     // ecx
    int v14;                     // esi
    int v15;                     // eax
    bool v16;                    // sf
    int v17;                     // esi
    int v18;                     // eax
    int v19;                     // eax
    int v20;                     // eax
    __int16 v21;                 // kr18_2
    char v22;                    // al
    int v23;                     // esi
    int v24;                     // ecx
    unsigned int v25;            // eax
    int v26;                     // eax
    int v27;                     // ecx
    int v28;                     // eax
    int v29;                     // ecx
    int v30;                     // ecx
    int v31;                     // ecx
    int v32;                     // ecx
    int v33;                     // eax
    int v34;                     // edx
    int v35;                     // eax
    int v36;                     // edx
    int v37;                     // edx
    int v38;                     // eax
    __int16 v39;                 // dx
    int v40;                     // edx
    int v41;                     // ecx
    int v42;                     // eax
    int v43;                     // eax
    int v44;                     // eax
    int v45;                     // eax
    int v46;                     // eax
    int v47;                     // eax
    int v48;                     // eax
    __int16 v49;                 // ax
    int v50;                     // eax
    int v51;                     // ecx
    int v52;                     // eax
    int v53;                     // eax
    int v54;                     // eax
    int v55;                     // eax
    int v56;                     // eax
    int v57;                     // eax
    int v58;                     // eax
    DWORD v59;                   // eax
    int v60;                     // esi
    int v61;                     // eax
    int v62;                     // [esp+34h] [ebp-110h] BYREF
    int v63;                     // [esp+38h] [ebp-10Ch]
    int v64;                     // [esp+3Ch] [ebp-108h]
    int v65;                     // [esp+40h] [ebp-104h]
    char Buffer[256];            // [esp+44h] [ebp-100h] BYREF

    if (dword_118ABDDC < 0x7FFF)
        ++dword_118ABDDC;
    v2 = 0;
    MEMORY[0x118AB8B4] = dword_118ABAD8;
    v3 = g_lpDirectInputDeviceA->lpVtbl;
    dword_118ABAD8 = ((_BYTE)dword_118ABAD8 - 1) & 1;
    v4 = v3->GetDeviceState(g_lpDirectInputDeviceA, 256, &byte_118AB8B8[256 * dword_118ABAD8]);
    if (v4 < 0) {
        if (v4 != -2147024866) {
            dword_118ABAD0 = 0;
            return 0;
        }
        if (g_lpDirectInputDeviceA->lpVtbl->Acquire(g_lpDirectInputDeviceA) < 0) {
            dword_118ABAD0 = 0;
            return 0;
        }
        if (g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(
                g_lpDirectInputDeviceA, 256, &byte_118AB8B8[256 * dword_118ABAD8]) < 0) {
            dword_118ABAD0 = 0;
            return 0;
        }
    }
    v6 = g_ConfigJoystickIndex;
    v7 = g_ConfigJoystickIndex == 1;
    byte_118AB8B8[256 * dword_118ABAD8] = 0;
    if (v7 || v6 == 2) {
        dword_118ABD7C = dword_118ABAB8;
        dword_118ABAB8 = ((_BYTE)dword_118ABAB8 - 1) & 1;
        g_DirectInputDevice2A->lpVtbl->Poll(g_DirectInputDevice2A);
        v8 = g_DirectInputDevice2A->lpVtbl->GetDeviceState(
            g_DirectInputDevice2A, 272, &dword_118ABAE0[68 * dword_118ABAB8]);
        if (v8) {
            if (v8 == -2147024866)
                sub_100773D0();
            memset(&byte_118ABB10[272 * dword_118ABAB8], 0, 0x80u);
        }
    }
    dword_118ABAD4 = dword_118ABD80;
    v9 = ((_BYTE)dword_118ABD80 - 1) & 1;
    dword_118ABD80 = v9;
    if (g_unk54Ptr && (v10 = *((_DWORD *)g_unk54Ptr + 20)) != 0) {
        v11 = (*(int(__stdcall **)(_DWORD, int, int *))(*(_DWORD *)v10 + 36))(
            *((_DWORD *)g_unk54Ptr + 20), 16, &v62);
        if (!v11) {
            v12 = &dword_118ABD44[7 * dword_118ABAD4];
            v13 = 7 * dword_118ABD80;
            dword_118ABD44[v13] = *v12 + v62;
            dword_118ABD48[v13] = *v12 + v63;
            v14 = *v12;
            v15 = dword_10ACED40;
            v16 = dword_10ACED40 < 0;
            dword_118ABD4C[v13] = v14 + v64;
            if (v16) {
                v15 = 0;
            } else if (v15 > 7) {
                v15 = 7;
            }
            v17 = dword_100BD400[v15];
            dword_118ABD38[v13] = (dword_118ABD44[v13] << 7) / v17;
            dword_118ABD3C[v13] = (dword_118ABD48[v13] << 7) / v17;
            dword_118ABD40[v13] = (dword_118ABD4C[v13] << 7) / v17;
            v18 = dword_118ABD38[v13];
            if (v18 >= -128) {
                if (v18 > 128) {
                    dword_118ABD38[v13] = 128;
                    dword_118ABD44[v13] = v17;
                }
            } else {
                dword_118ABD38[v13] = -128;
                dword_118ABD44[v13] = -v17;
            }
            v19 = dword_118ABD3C[v13];
            if (v19 >= -128) {
                if (v19 > 128) {
                    dword_118ABD3C[v13] = 128;
                    dword_118ABD48[v13] = v17;
                }
            } else {
                dword_118ABD3C[v13] = -128;
                dword_118ABD48[v13] = -v17;
            }
            v20 = dword_118ABD40[v13];
            if (v20 >= -128) {
                if (v20 <= 128) {
                LABEL_36:
                    v21 = *(_WORD *)((char *)&v65 + 1);
                    byte_118ABD50[v13 * 4] = v65;
                    v22 = HIBYTE(v65);
                    byte_118ABD51[v13 * 4] = v21;
                    byte_118ABD52[v13 * 4] = HIBYTE(v21);
                    byte_118ABD53[v13 * 4] = v22;
                    goto LABEL_41;
                }
                dword_118ABD40[v13] = 128;
            } else {
                dword_118ABD40[v13] = -128;
                v17 = -v17;
            }
            dword_118ABD4C[v13] = v17;
            goto LABEL_36;
        }
        if (v11 == -2147024866)
            (*(void(__stdcall **)(_DWORD))(**((_DWORD **)g_unk54Ptr + 20) + 28))(
                *((_DWORD *)g_unk54Ptr + 20));
        *(_DWORD *)&byte_118ABD50[28 * dword_118ABD80] = 0;
    } else {
        memset(&dword_118ABD38[7 * v9], 0, 0x1Cu);
    }
LABEL_41:
    if (!sub_100786E0(15)) {
    LABEL_47:
        v23 = MEMORY[0x118AB8B4];
        v24 = dword_118ABAD8;
        if (byte_118AB8F7[256 * MEMORY[0x118AB8B4]] >= 0 && byte_118AB8F7[256 * dword_118ABAD8] < 0)
            dword_100BD3E8 = dword_100BD3E8 == 0;
        if (byte_118AB8F8[256 * MEMORY[0x118AB8B4]] >= 0 && byte_118AB8F8[256 * dword_118ABAD8] < 0)
            dword_100BD3EC = dword_100BD3EC == 0;
        if (byte_118AB8F9[256 * MEMORY[0x118AB8B4]] >= 0 && byte_118AB8F9[256 * dword_118ABAD8] < 0)
            dword_100BD3F0 = dword_100BD3F0 == 0;
        if (byte_118AB8FA[256 * MEMORY[0x118AB8B4]] >= 0 && byte_118AB8FA[256 * dword_118ABAD8] < 0)
            dword_100BD3F4 = dword_100BD3F4 == 0;
        if (byte_118AB8FB[256 * MEMORY[0x118AB8B4]] >= 0 && byte_118AB8FB[256 * dword_118ABAD8] < 0)
            dword_100BD3F8 = dword_100BD3F8 == 0;
        if (byte_118AB8FC[256 * MEMORY[0x118AB8B4]] >= 0 && byte_118AB8FC[256 * dword_118ABAD8] < 0)
            dword_100BD3FC = dword_100BD3FC == 0;
        if (byte_118AB90F[256 * MEMORY[0x118AB8B4]] >= 0 &&
            byte_118AB90F[256 * dword_118ABAD8] < 0) {
            pm_sub_10002930();
            v23 = MEMORY[0x118AB8B4];
            v24 = dword_118ABAD8;
        }
        if (byte_118AB910[256 * v23] >= 0 && byte_118AB910[256 * v24] < 0)
            pm_sub_10002970();
        if ((GetAsyncKeyState(70) & 1) != 0 && dword_118ABDDC > 15)
            dword_10B501D8 = dword_10B501D8 == 0;
        if ((GetAsyncKeyState(80) & 1) != 0 && dword_118ABDDC > 15)
            dword_118ABDC8 = dword_118ABDC8 == 0;
        if (dword_106909E0) {
            if (dword_106909E0 == 2) {
                if (sub_100786E0(8))
                    v2 = 256;
                if (sub_100786E0(9))
                    v2 |= 0x200u;
                if (sub_100786E0(10))
                    v2 |= 0x400u;
            }
            if (sub_100786E0(11))
                v2 |= 0x800u;
            if (sub_100786E0(21))
                v2 |= 0x100400u;
            if (sub_10078420(22))
                v2 |= 0x200000u;
            if (sub_10078420(23))
                v2 |= 0x400000u;
            if (sub_10078420(24))
                v2 |= 0x800000u;
            if (sub_10078420(25))
                v2 |= 0x1000000u;
            if (sub_100786E0(26))
                v2 |= 0x200000u;
            if (sub_100786E0(27)) {
                dword_118ABAD0 = v2 | 0x400000;
                return v2 | 0x400000;
            }
        LABEL_298:
            dword_118ABAD0 = v2;
            return v2;
        }
        if (sub_100786E0(16)) {
            if (!dword_106909B4 && g_GameMode != 4 && g_GameMode != 5)
                dword_118ABDCC = 1;
            if (g_NetworkPlay) {
                if (!dword_118ABDC0) {
                    atomic_sub_10004BB0();
                    dword_118ABDC0 = 1;
                }
            } else {
                g_usingGameMode4 = 1;
                if (g_GameMode == 2)
                    __setargv_0();
            }
        }
        if (sub_100786E0(14))
            v2 = 0x8000;
        *a1 = 0;
        if (g_GameMode == 4 || g_GameMode == 5)
            goto LABEL_203;
        if ((HIBYTE(*(_WORD *)g_ConfigJoystickPtr) & 0x80u) == 0)
            goto LABEL_158;
        v25 = *(_WORD *)g_ConfigJoystickPtr & 0xFF00;
        if (v25 <= 0x8100) {
            if (v25 != 33024) {
                if (v25 == 0x8000) {
                    v26 = dword_118ABAB8;
                    v27 = dword_118ABAE0[68 * dword_118ABAB8];
                    if (v27 < 0) {
                        v28 = 5 * v27;
                    LABEL_154:
                        *a1 = 16 * v28 / 128;
                        v26 = dword_118ABAB8;
                        v32 = dword_118ABD80;
                        goto LABEL_160;
                    }
                    goto LABEL_157;
                }
                goto LABEL_158;
            }
            v26 = dword_118ABAB8;
            v29 = dword_118ABAE0[68 * dword_118ABAB8];
            goto LABEL_134;
        }
        if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) <= 0x8300) {
            if (v25 != 33536) {
                if (v25 == 33280) {
                    v26 = dword_118ABAB8;
                    v30 = dword_118ABAE4[68 * dword_118ABAB8];
                    if (v30 < 0) {
                        v28 = 5 * v30;
                        goto LABEL_154;
                    }
                    goto LABEL_157;
                }
                goto LABEL_158;
            }
            v26 = dword_118ABAB8;
            v29 = dword_118ABAE4[68 * dword_118ABAB8];
        LABEL_134:
            if (v29 > 0) {
                v28 = -5 * v29;
                goto LABEL_154;
            }
            goto LABEL_157;
        }
        if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) <= 0x8500) {
            if (v25 == 34048) {
                v26 = dword_118ABAB8;
                v29 = dword_118ABAE8[68 * dword_118ABAB8];
                goto LABEL_134;
            }
            if (v25 == 33792) {
                v26 = dword_118ABAB8;
                v31 = dword_118ABAE8[68 * dword_118ABAB8];
                if (v31 < 0) {
                    v28 = 5 * v31;
                    goto LABEL_154;
                }
                goto LABEL_157;
            }
        LABEL_158:
            v26 = dword_118ABAB8;
            v32 = dword_118ABD80;
            goto LABEL_160;
        }
        if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) > 0x8700) {
            if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) > 0x8900) {
                if (v25 == 35328) {
                    v32 = dword_118ABD80;
                    v38 = dword_118ABD40[7 * dword_118ABD80];
                    if (v38 < 0) {
                        *a1 = 80 * v38 / 128;
                        v26 = dword_118ABAB8;
                    LABEL_157:
                        v32 = dword_118ABD80;
                        goto LABEL_160;
                    }
                } else {
                    if (v25 != 35584)
                        goto LABEL_158;
                    v32 = dword_118ABD80;
                    v37 = dword_118ABD40[7 * dword_118ABD80];
                    if (v37 > 0) {
                        v28 = -5 * v37;
                        goto LABEL_154;
                    }
                }
            } else if (v25 == 35072) {
                v32 = dword_118ABD80;
                v36 = dword_118ABD3C[7 * dword_118ABD80];
                if (v36 > 0) {
                    *a1 = -80 * v36 / 128;
                    v26 = dword_118ABAB8;
                    v32 = dword_118ABD80;
                    goto LABEL_160;
                }
            } else {
                if (v25 != 34816)
                    goto LABEL_158;
                v32 = dword_118ABD80;
                v35 = dword_118ABD3C[7 * dword_118ABD80];
                if (v35 < 0) {
                    v28 = 5 * v35;
                    goto LABEL_154;
                }
            }
        } else if (v25 == 34560) {
            v32 = dword_118ABD80;
            v34 = dword_118ABD38[7 * dword_118ABD80];
            if (v34 > 0) {
                *a1 = -80 * v34 / 128;
                v26 = dword_118ABAB8;
                v32 = dword_118ABD80;
                goto LABEL_160;
            }
        } else {
            if (v25 != 34304)
                goto LABEL_158;
            v32 = dword_118ABD80;
            v33 = dword_118ABD38[7 * dword_118ABD80];
            if (v33 < 0) {
                v28 = 5 * v33;
                goto LABEL_154;
            }
        }
        v26 = dword_118ABAB8;
    LABEL_160:
        v39 = *(_WORD *)(g_ConfigJoystickPtr + 6);
        if (v39 >= 0)
            goto LABEL_203;
        v40 = v39 & 0xFF00;
        if (v40 <= 33024) {
            if (v40 == 33024) {
                v42 = dword_118ABAE0[68 * v26];
                if (v42 <= 0)
                    goto LABEL_203;
                v43 = 5 * v42;
                goto LABEL_202;
            }
            if (v40 == 0x8000) {
                v41 = dword_118ABAE0[68 * v26];
                if (v41 < 0)
                    goto LABEL_201;
            }
        LABEL_203:
            if (dword_106909B4) {
                if (sub_100786E0(12))
                    v2 |= 0x1000u;
                if (sub_100786E0(13))
                    v2 |= 0x2000u;
                if (sub_100786E0(0))
                    v2 |= 1u;
                if (sub_100786E0(1))
                    v2 |= 2u;
                if (sub_100786E0(2)) {
                    dword_118ABAD0 = v2 | 4;
                    return v2 | 4;
                }
                goto LABEL_298;
            }
            *a2 = 0;
            if (sub_10078420(2)) {
                v2 |= 4u;
                if (*(char *)(g_ConfigJoystickPtr + 13) >= 0)
                    *a2 = 80;
            }
            v49 = *(_WORD *)(g_ConfigJoystickPtr + 12);
            if (v49 >= 0)
                goto LABEL_260;
            v50 = v49 & 0xFF00;
            if (v50 <= 33024) {
                if (v50 == 33024) {
                    v52 = dword_118ABAE0[68 * dword_118ABAB8];
                    if (v52 <= 0)
                        goto LABEL_260;
                    v53 = 5 * v52;
                    goto LABEL_259;
                }
                if (v50 == 0x8000) {
                    v51 = dword_118ABAE0[68 * dword_118ABAB8];
                    if (v51 < 0)
                        goto LABEL_258;
                }
            LABEL_260:
                if (sub_10078420(3))
                    v2 |= 8u;
                if (sub_10078420(4)) {
                    v2 |= 0x10u;
                    *a2 = -80;
                }
                if (g_GameMode != 4 && g_GameMode != 5) {
                    if (sub_10078420(0))
                        v2 |= 1u;
                    if (sub_10078420(1))
                        v2 |= 2u;
                }
                if (sub_10078420(5))
                    v2 |= 0x20u;
                if (sub_10078420(6))
                    v2 |= 0x40u;
                if (sub_100786E0(8))
                    v2 |= 0x100u;
                if (sub_100786E0(9))
                    v2 |= 0x200u;
                if (sub_100786E0(10))
                    v2 |= 0x400u;
                if (sub_100786E0(17))
                    v2 |= 0x10000u;
                if (sub_100786E0(18))
                    v2 |= 0x20000u;
                if (sub_100786E0(19))
                    v2 |= 0x40000u;
                if (sub_100786E0(20))
                    v2 |= 0x80000u;
                if (sub_10078420(7))
                    v2 |= 0x80u;
                if (g_Runbenchmark) {
                    if (dword_118ABDDC == 1) {
                        dword_118ABD00 = getTicks();
                        dword_118ABD74 = sub_10016A50();
                    }
                    if (dword_118ABDDC == 441) {
                        v59 = getTicks();
                        v60 = v59 - dword_118ABD00;
                        dword_118ABD00 = v59;
                        v61 = sub_10016A50();
                        v63 = 0;
                        v62 = v60;
                        sprintf(Buffer,
                                "fps = %0.2f",
                                (double)(v61 - dword_118ABD74) * 1000.0 / (double)v60);
                        exit(1);
                    }
                    GetAsyncKeyState(27);
                    if (dword_118ABDDC == 1) {
                        dword_10B501D8 = 1;
                        dword_118ABAD0 = 1024;
                        return 1024;
                    }
                    v2 = dword_118ABDDC >= 60 ? 4 : 0;
                }
                goto LABEL_298;
            }
            if (v50 > 33536) {
                if (v50 > 34048) {
                    if (v50 > 34560) {
                        if (v50 > 35072) {
                            if (v50 != 35328) {
                                if (v50 == 35584) {
                                    v58 = dword_118ABD40[7 * dword_118ABD80];
                                    if (v58 > 0) {
                                        v53 = 5 * v58;
                                    LABEL_259:
                                        *a2 = 16 * v53 / 128;
                                        goto LABEL_260;
                                    }
                                }
                                goto LABEL_260;
                            }
                            v51 = dword_118ABD40[7 * dword_118ABD80];
                            if (v51 >= 0)
                                goto LABEL_260;
                        } else {
                            if (v50 == 35072) {
                                v57 = dword_118ABD3C[7 * dword_118ABD80];
                                if (v57 <= 0)
                                    goto LABEL_260;
                                v53 = 5 * v57;
                                goto LABEL_259;
                            }
                            if (v50 != 34816)
                                goto LABEL_260;
                            v51 = dword_118ABD3C[7 * dword_118ABD80];
                            if (v51 >= 0)
                                goto LABEL_260;
                        }
                    } else {
                        if (v50 == 34560) {
                            v56 = dword_118ABD38[7 * dword_118ABD80];
                            if (v56 <= 0)
                                goto LABEL_260;
                            v53 = 5 * v56;
                            goto LABEL_259;
                        }
                        if (v50 != 34304)
                            goto LABEL_260;
                        v51 = dword_118ABD38[7 * dword_118ABD80];
                        if (v51 >= 0)
                            goto LABEL_260;
                    }
                } else {
                    if (v50 == 34048) {
                        v55 = dword_118ABAE8[68 * dword_118ABAB8];
                        if (v55 <= 0)
                            goto LABEL_260;
                        v53 = 5 * v55;
                        goto LABEL_259;
                    }
                    if (v50 != 33792)
                        goto LABEL_260;
                    v51 = dword_118ABAE8[68 * dword_118ABAB8];
                    if (v51 >= 0)
                        goto LABEL_260;
                }
            } else {
                if (v50 == 33536) {
                    v54 = dword_118ABAE4[68 * dword_118ABAB8];
                    if (v54 <= 0)
                        goto LABEL_260;
                    v53 = 5 * v54;
                    goto LABEL_259;
                }
                if (v50 != 33280)
                    goto LABEL_260;
                v51 = dword_118ABAE4[68 * dword_118ABAB8];
                if (v51 >= 0)
                    goto LABEL_260;
            }
        LABEL_258:
            v53 = -5 * v51;
            goto LABEL_259;
        }
        if (v40 > 33536) {
            if (v40 > 34048) {
                if (v40 > 34560) {
                    if (v40 > 35072) {
                        if (v40 != 35328) {
                            if (v40 == 35584) {
                                v48 = dword_118ABD40[7 * v32];
                                if (v48 > 0) {
                                    v43 = 5 * v48;
                                LABEL_202:
                                    *a1 = 16 * v43 / 128;
                                    goto LABEL_203;
                                }
                            }
                            goto LABEL_203;
                        }
                        v41 = dword_118ABD40[7 * v32];
                        if (v41 >= 0)
                            goto LABEL_203;
                    } else {
                        if (v40 == 35072) {
                            v47 = dword_118ABD3C[7 * v32];
                            if (v47 <= 0)
                                goto LABEL_203;
                            v43 = 5 * v47;
                            goto LABEL_202;
                        }
                        if (v40 != 34816)
                            goto LABEL_203;
                        v41 = dword_118ABD3C[7 * v32];
                        if (v41 >= 0)
                            goto LABEL_203;
                    }
                } else {
                    if (v40 == 34560) {
                        v46 = dword_118ABD38[7 * v32];
                        if (v46 <= 0)
                            goto LABEL_203;
                        v43 = 5 * v46;
                        goto LABEL_202;
                    }
                    if (v40 != 34304)
                        goto LABEL_203;
                    v41 = dword_118ABD38[7 * v32];
                    if (v41 >= 0)
                        goto LABEL_203;
                }
            } else {
                if (v40 == 34048) {
                    v45 = dword_118ABAE8[68 * v26];
                    if (v45 <= 0)
                        goto LABEL_203;
                    v43 = 5 * v45;
                    goto LABEL_202;
                }
                if (v40 != 33792)
                    goto LABEL_203;
                v41 = dword_118ABAE8[68 * v26];
                if (v41 >= 0)
                    goto LABEL_203;
            }
        } else {
            if (v40 == 33536) {
                v44 = dword_118ABAE4[68 * v26];
                if (v44 <= 0)
                    goto LABEL_203;
                v43 = 5 * v44;
                goto LABEL_202;
            }
            if (v40 != 33280)
                goto LABEL_203;
            v41 = dword_118ABAE4[68 * v26];
            if (v41 >= 0)
                goto LABEL_203;
        }
    LABEL_201:
        v43 = -5 * v41;
        goto LABEL_202;
    }
    if (g_NetworkPlay && g_usingGameMode4 && !dword_106909E0 && dword_10ACEE50 < dword_100BD3E0) {
        atomic_sub_10004BE0();
        goto LABEL_47;
    }
    result = 0x4000;
    dword_1022AF20 = 1;
    dword_118ABAD0 = 0x4000;
    return result;
}
// 1006AA90: using guessed type int __setargv_0(void);
// 100AA010: using guessed type int g_GameMode;
// 100BD3E8: using guessed type int dword_100BD3E8;
// 100BD3EC: using guessed type int dword_100BD3EC;
// 100BD3F0: using guessed type int dword_100BD3F0;
// 100BD3F4: using guessed type int dword_100BD3F4;
// 100BD3F8: using guessed type int dword_100BD3F8;
// 100BD3FC: using guessed type int dword_100BD3FC;
// 1022AF14: using guessed type int g_usingGameMode4;
// 1022AF18: using guessed type int g_NetworkPlay;
// 1022AF20: using guessed type int dword_1022AF20;
// 106909B4: using guessed type int dword_106909B4;
// 106909E0: using guessed type int dword_106909E0;
// 10ACED40: using guessed type int dword_10ACED40;
// 10ACEE50: using guessed type int dword_10ACEE50;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1D4: using guessed type int dword_10B4E1D4;
// 10B501D8: using guessed type int dword_10B501D8;
// 118AB8B4: using guessed type int dword_118AB8B4;
// 118ABAB8: using guessed type int dword_118ABAB8;
// 118ABAD0: using guessed type int dword_118ABAD0;
// 118ABAD4: using guessed type int dword_118ABAD4;
// 118ABAD8: using guessed type int dword_118ABAD8;
// 118ABAE0: using guessed type int dword_118ABAE0[];
// 118ABAE4: using guessed type int dword_118ABAE4[];
// 118ABAE8: using guessed type int dword_118ABAE8[];
// 118ABD00: using guessed type int dword_118ABD00;
// 118ABD38: using guessed type int dword_118ABD38[];
// 118ABD3C: using guessed type int dword_118ABD3C[];
// 118ABD40: using guessed type int dword_118ABD40[];
// 118ABD44: using guessed type int dword_118ABD44[];
// 118ABD48: using guessed type int dword_118ABD48[];
// 118ABD4C: using guessed type int dword_118ABD4C[];
// 118ABD74: using guessed type int dword_118ABD74;
// 118ABD7C: using guessed type int dword_118ABD7C;
// 118ABD80: using guessed type int dword_118ABD80;
// 118ABDC0: using guessed type int dword_118ABDC0;
// 118ABDC4: using guessed type int g_Runbenchmark;
// 118ABDC8: using guessed type int dword_118ABDC8;
// 118ABDCC: using guessed type int dword_118ABDCC;
// 118ABDDC: using guessed type int dword_118ABDDC;
