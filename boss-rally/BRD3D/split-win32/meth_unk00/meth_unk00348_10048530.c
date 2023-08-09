#include "types-win32.h"
//----- (10048530) --------------------------------------------------------
int __thiscall meth_unk00348_10048530(int this) {
    int v2;                    // ebp
    void (*v3)(void);          // eax
    void (*v4)(void);          // eax
    int v5;                    // esi
    int(__cdecl * v6)(_DWORD); // eax
    int v7;                    // eax
    void(__cdecl * v8)(int);   // eax
    int v9;                    // eax
    int v10;                   // edi
    __int16 *v11;              // ebp
    int v12;                   // ecx
    int(__cdecl * v13)(int);   // eax
    int v14;                   // eax
    int v15;                   // eax
    void (*v16)(void);         // ebx
    int result;                // eax
    _DWORD *v18;               // [esp+10h] [ebp-8h]
    int v19;                   // [esp+14h] [ebp-4h]

    v2 = 0;
    v3 = *(void (**)(void))(this + 4);
    if (v3)
        v3();
    v4 = *(void (**)(void))(this + 12);
    if (v4)
        v4();
    word_10AA2870 = 0;
    meth_100484F0((unsigned __int16 *)this);
    v19 = 0;
    if (*(_WORD *)(this + 20)) {
        v18 = (_DWORD *)(this + 24);
        while (1) {
            v5 = *v18;
            if (!*v18)
                break;
            v6 = *(int(__cdecl **)(_DWORD))(v5 + 20);
            if (v6) {
                if (!v6(*v18))
                    break;
            }
            v7 = *(_DWORD *)(v5 + 28);
            if ((v7 & 0x1000) == 0)
                goto LABEL_18;
            (*(void(__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
            v8 = *(void(__cdecl **)(int))(v5 + 4);
            if (v8)
                v8(v5);
            if ((*(_BYTE *)(v5 + 28) & 0x10) != 0) {
                if (word_10AA286C == word_10AA2870) {
                    word_10AA286C += word_100AB3DC;
                    meth_100484F0((unsigned __int16 *)this);
                }
                ++word_10AA2870;
            }
            v7 = *(_DWORD *)(v5 + 28);
            if ((v7 & 0x10) != 0) {
            LABEL_18:
                if ((v7 & 0x800) == 0) {
                    if (!(*(int(__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5)) {
                        byte_10AA28A8 = 0;
                        break;
                    }
                    v9 = *(_DWORD *)(v5 + 28);
                    if ((v9 & 0x6000) != 0 &&
                        (*(unsigned __int16 *)(*(_DWORD *)(this + 832) + 188) == v2 ||
                         (v9 & 0x4000) != 0) &&
                        *(__int16 *)(v5 + 10932) > 0) {
                        v10 = 0;
                        v11 = (__int16 *)(v5 + 10934);
                        do {
                            v12 = *(_DWORD *)(this + 4 * *v11 + 24);
                            (*(void(__thiscall **)(int))(*(_DWORD *)v12 + 12))(v12);
                            ++v10;
                            ++v11;
                        } while (v10 < *(__int16 *)(v5 + 10932));
                        v2 = v19;
                    }
                    v13 = *(int(__cdecl **)(int))(v5 + 24);
                    if (v13 && !v13(v5))
                        break;
                    v14 = *(_DWORD *)(v5 + 28);
                    if ((v14 & 0x20) != 0 && !dword_10AA28D8 && (v14 & 0x2000) != 0) {
                        v15 = *(_DWORD *)(this + 832);
                        if (*(unsigned __int16 *)(v15 + 188) != v2) {
                            *(_WORD *)(v15 + 188) = v2;
                            memset((void *)(*(_DWORD *)(this + 832) + 108), 0, 0x50u);
                            *(_DWORD *)(*(_DWORD *)(this + 832) + 108) = 1;
                        }
                    }
                }
            }
            v19 = ++v2;
            ++v18;
            if (v2 >= *(unsigned __int16 *)(this + 20))
                goto LABEL_36;
        }
        result = 0;
    } else {
    LABEL_36:
        v16 = *(void (**)(void))(this + 8);
        if (v16)
            v16();
        result = 1;
    }
    return result;
}
// 10048633: conditional instruction was optimized away because of 'ax.2>=1'
// 100AB3DC: using guessed type __int16 word_100AB3DC;
// 10AA286C: using guessed type __int16 word_10AA286C;
// 10AA2870: using guessed type __int16 word_10AA2870;
// 10AA28A8: using guessed type char byte_10AA28A8;
// 10AA28D8: using guessed type int dword_10AA28D8;
