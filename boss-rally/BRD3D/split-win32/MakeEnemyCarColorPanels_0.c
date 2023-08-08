#include "types-win32.h"
//----- (10065D50) --------------------------------------------------------
int __cdecl MakeEnemyCarColorPanels_0(size_t size) {
    size_t size_1; // ebp
    _DWORD *v2;    // edi
    int v3;        // ebx
    int v4;        // edx
    int i;         // esi
    int v6;        // eax
    _WORD *v7;     // ecx
    char v8;       // al
    __int16 v9;    // bx
    int v10;       // esi
    int v11;       // ebx
    int result;    // eax
    _WORD *v13;    // ebx
    __int16 v14;   // ax
    __int16 v15;   // cx
    int v16;       // edi
    __int16 v17;   // dx
    __int16 v18;   // ax
    int v19;       // edi
    int v20;       // edi
    _DWORD *v21;   // [esp+10h] [ebp-Ch]
    __int16 v22;   // [esp+14h] [ebp-8h]
    int v23;       // [esp+18h] [ebp-4h]

    size_1 = size;
    v2 = &dword_10ACDEA8[2778 * dword_100B4050 + 2778 * *(_DWORD *)(size + 116)];
    v21 = v2;
    sub_10061460(*(unsigned __int8 *)(size + 92),
                 *(unsigned __int8 *)(size + 93),
                 *(unsigned __int8 *)(size + 94));
    v3 = *(unsigned __int8 *)(size_1 + 93) >> 3;
    v4 = *(unsigned __int8 *)(size_1 + 92) >> 3;
    v22 = v3;
    v23 = *(unsigned __int8 *)(size_1 + 94) >> 3;
    for (i = 0; i < 12; ++i) {
        v6 = *(_DWORD *)(v2[2673] + 32788) + 36 * *(unsigned __int8 *)(i + v2[2673] + 33040);
        v7 = *(_WORD **)(v6 + 4);
        if (v7 && (*(_DWORD *)(v6 + 32) & 0xF000000) == 0x1000000) {
            v8 = v7[i] & 1 | (2 * (v23 | (32 * (v3 | (32 * v4)))));
            LOBYTE(v9) = (unsigned __int16)(v23 | (32 * (v3 | (32 * v4)))) >> 7;
            HIBYTE(v9) = v8;
            *v7 = v9;
            LOBYTE(v9) = (unsigned __int16)((32 * (v4 & 0x1E)) | v22 & 0x1E) >> 3;
            HIBYTE(v9) = v7[i] & 1 | v23 & 0x1E | (32 * ((32 * (v4 & 0x1E)) | v22 & 0x1E));
            v7[1] = v9;
            LOWORD(v3) = v22;
        }
    }
    v10 = *(_DWORD *)(v2[2673] + 124);
    *(_DWORD *)(size_1 + 124) = v10 + 4;
    v11 = 0;
    for (*(_DWORD *)(size_1 + 120) = CHK_AllocateMemory(4 * (v10 + 4), aMakeenemycarco); v11 < v10;
         v2 = v21) {
        v23 = dword_118AA0BC(*(_DWORD *)(v2[2673] + 4 * v11 + 4), &size);
        *(_DWORD *)(*(_DWORD *)(size_1 + 120) + 4 * v11) =
            CHK_AllocateMemory(size, aMakeenemycarco_0);
        qmemcpy(*(void **)(*(_DWORD *)(size_1 + 120) + 4 * v11++), (const void *)v23, size);
    }
    result = v2[2673];
    v13 = *(_WORD **)(*(_DWORD *)(result + 32788) + 36 * *(unsigned __int8 *)(result + 33051) + 4);
    if (v13 && !dword_100AC300) {
        if (*(_DWORD *)(result + 132)) {
            if (dword_106C661C || dword_106C6624) {
                v13[15] = 112;
                v13[10] = -32112;
            } else {
                v13[15] = 400;
                v13[10] = 416;
            }
            v14 = v13[15];
            v15 = v13[10];
            v13[14] = 400;
            v13[13] = v14;
            v13[9] = 416;
            v13[8] = v15;
            v13[12] = -32391;
            v13[7] = 16786;
            v13[11] = 27565;
            v13[6] = 12742;
            v23 = dword_118AA0BC(*(_DWORD *)(v2[2673] + 132), &size);
            *(_DWORD *)(*(_DWORD *)(size_1 + 120) + 4 * v10) =
                CHK_AllocateMemory(size, aMakeenemycarco_1);
            qmemcpy(*(void **)(*(_DWORD *)(size_1 + 120) + 4 * v10), (const void *)v23, size);
            v2 = v21;
        }
        if (*(_DWORD *)(v2[2673] + 136)) {
            v13[11] = 27565;
            v13[14] = 192;
            v13[13] = 192;
            v13[6] = 12742;
            v13[9] = 1273;
            v13[8] = 1273;
            dword_118AA0BC(*(_DWORD *)(v2[2673] + 136), &size);
            v16 = 4 * v10 + 4;
            *(_DWORD *)(*(_DWORD *)(size_1 + 120) + v16) =
                CHK_AllocateMemory(size, aMakeenemycarco_2);
            qmemcpy(*(void **)(*(_DWORD *)(size_1 + 120) + v16), (const void *)v23, size);
            v2 = v21;
        }
        if (*(_DWORD *)(v2[2673] + 140)) {
            v17 = v13[15];
            v18 = v13[10];
            v13[14] = 400;
            v13[13] = v17;
            v13[9] = 416;
            v13[8] = v18;
            v13[11] = 14567;
            v13[6] = -257;
            dword_118AA0BC(*(_DWORD *)(v2[2673] + 140), &size);
            v19 = 4 * v10 + 8;
            *(_DWORD *)(*(_DWORD *)(size_1 + 120) + v19) =
                CHK_AllocateMemory(size, aMakeenemycarco_3);
            qmemcpy(*(void **)(*(_DWORD *)(size_1 + 120) + v19), (const void *)v23, size);
            v2 = v21;
        }
        result = v2[2673];
        if (*(_DWORD *)(result + 144)) {
            v13[11] = 14567;
            v13[14] = 192;
            v13[13] = 192;
            v13[6] = -257;
            v13[9] = 1273;
            v13[8] = 1273;
            dword_118AA0BC(*(_DWORD *)(v2[2673] + 144), &size);
            v20 = 4 * v10 + 12;
            *(_DWORD *)(*(_DWORD *)(size_1 + 120) + v20) =
                CHK_AllocateMemory(size, aMakeenemycarco_4);
            result = *(_DWORD *)(size_1 + 120);
            qmemcpy(*(void **)(result + v20), (const void *)v23, size);
        }
    }
    return result;
}
// 100AC300: using guessed type int dword_100AC300;
// 100B4050: using guessed type int dword_100B4050;
// 106C661C: using guessed type int dword_106C661C;
// 106C6624: using guessed type int dword_106C6624;
// 118AA0BC: using guessed type int (__cdecl *dword_118AA0BC)(_DWORD, _DWORD);
