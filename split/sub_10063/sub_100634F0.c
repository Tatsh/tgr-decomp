//----- (100634F0) --------------------------------------------------------
int __thiscall sub_100634F0(int this) {
    int v2;     // eax
    char v3;    // cl
    char v4;    // bl
    _DWORD *v5; // eax
    int v6;     // ecx
    int v7;     // eax
    int result; // eax

    sub_10076C90((char *)this);
    v2 = (this - (int)dword_10ACDEA8) / 11112;
    *(_DWORD *)(this + 320) = v2;
    if (g_GameMode != 6) {
        v3 = byte_100B37D2[3 * v2];
        v4 = byte_100B37D0[3 * v2];
        *(_BYTE *)(this + 10669) = byte_100B37D1[3 * v2];
        *(_BYTE *)(this + 10668) = v4;
        *(_BYTE *)(this + 10670) = v3;
    }
    if (v2 >= 2) {
        *(_DWORD *)(this + 3724) = 0;
    } else {
        v5 = (_DWORD *)((char *)&unk_10AF9890 + 332 * v2);
        *(_DWORD *)(this + 3724) = v5;
        *v5 = 0;
        *(_BYTE *)(*(_DWORD *)(this + 3724) + 4) = 0;
        *(_BYTE *)(*(_DWORD *)(this + 3724) + 5) = 0;
        *(_WORD *)(*(_DWORD *)(this + 3724) + 240) = 258;
        *(_WORD *)(*(_DWORD *)(this + 3724) + 242) = 4;
        *(_WORD *)(*(_DWORD *)(this + 3724) + 244) = 1;
        *(_DWORD *)(*(_DWORD *)(this + 3724) + 252) = 1;
        *(_DWORD *)(*(_DWORD *)(this + 3724) + 248) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 3724) + 260) = 1;
        *(_DWORD *)(*(_DWORD *)(this + 3724) + 256) = 2;
        *(_DWORD *)(*(_DWORD *)(this + 3724) + 264) = 0;
        v6 = 0;
        *(_DWORD *)(*(_DWORD *)(this + 3724) + 264) = 5;
        if (dword_100AAB18 > 0) {
            v7 = 268;
            do {
                ++v6;
                *(_DWORD *)(*(_DWORD *)(this + 3724) + v7 - 92) = 0;
                *(_DWORD *)(*(_DWORD *)(this + 3724) + v7) = 0;
                v7 += 4;
            } while (v6 < dword_100AAB18);
        }
    }
    result = sub_10063420((_DWORD *)this);
    *(_DWORD *)(this + 3720) = 0;
    return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100AAB18: using guessed type int dword_100AAB18;
