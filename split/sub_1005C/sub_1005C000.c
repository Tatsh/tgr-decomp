//----- (1005C000) --------------------------------------------------------
int __thiscall sub_1005C000(unsigned __int16 *this, int a2) {
    int v2;                // eax
    unsigned __int16 *v4;  // edx
    unsigned __int16 *v5;  // eax
    int v6;                // ecx
    int v7;                // eax
    int v8;                // ebx
    unsigned __int16 *v9;  // eax
    unsigned __int16 *v10; // edx
    int v11;               // esi
    int v12;               // eax
    unsigned __int16 *v13; // edx
    unsigned __int16 *v14; // eax
    unsigned __int16 *v16; // [esp+10h] [ebp-4h]
    unsigned __int16 *v17; // [esp+18h] [ebp+4h]

    v2 = a2;
    if (a2 >= 0) {
        v4 = &this[540 * a2];
        strcpy((char *)v4 + 53, String2);
        *((_BYTE *)v4 + 52) = 0;
        v4[548] = 0;
        this[540 * a2 + 540] = 0;
        v4[539] = 0;
        *((_DWORD *)v4 + 276) = 0;
        *((_DWORD *)v4 + 277) = 0;
        *((_DWORD *)v4 + 278) = 0;
        *((_DWORD *)v4 + 279) = 0;
        *((_DWORD *)v4 + 271) = 0;
        *((_DWORD *)v4 + 272) = 0;
        *((_DWORD *)v4 + 273) = 0;
        *((_DWORD *)v4 + 275) = 0;
        *((_DWORD *)v4 + 280) = 0;
        v5 = &this[4 * a2 + 54022];
        *(_DWORD *)v5 = 0;
        *((_DWORD *)v5 + 1) = 0;
        v2 = a2;
    }
    v6 = v2 + 1;
    v7 = this[54422];
    if (v6 != (unsigned __int16)v7) {
        v8 = v6;
        if (v6 <= v7 - 1) {
            v9 = &this[4 * v6 + 54024];
            v16 = v9;
            v10 = &this[540 * v6];
            v17 = v10;
            do {
                qmemcpy(v10 - 518, v10 + 22, 0x438u);
                if (*(_DWORD *)v9) {
                    v11 = *((_DWORD *)v9 - 1);
                    if (v11 > 0) {
                        (*(void(__thiscall **)(unsigned __int16 *, _DWORD, int, int))(
                            *(_DWORD *)this + 40))(this, *(_DWORD *)v9, v11, v8 - 1);
                        v9 = v16;
                        v10 = v17;
                    }
                }
                ++v8;
                v10 += 540;
                v9 += 4;
                v17 = v10;
                v16 = v9;
            } while (v8 <= this[54422] - 1);
        }
    }
    v12 = this[54422] - 1;
    if (v12 > 0) {
        v13 = &this[540 * v12];
        strcpy((char *)v13 + 53, String2);
        *((_BYTE *)v13 + 52) = 0;
        v13[548] = 0;
        this[540 * v12 + 540] = 0;
        v13[539] = 0;
        *((_DWORD *)v13 + 276) = 0;
        *((_DWORD *)v13 + 277) = 0;
        *((_DWORD *)v13 + 278) = 0;
        *((_DWORD *)v13 + 279) = 0;
        *((_DWORD *)v13 + 271) = 0;
        *((_DWORD *)v13 + 272) = 0;
        *((_DWORD *)v13 + 273) = 0;
        *((_DWORD *)v13 + 275) = 0;
        v14 = &this[4 * v12 + 54022];
        *(_DWORD *)v14 = 0;
        *((_DWORD *)v14 + 1) = 0;
    }
    --this[54422];
    return 1;
}
