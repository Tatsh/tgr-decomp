#include "types-win32.h"
//----- (10048530) --------------------------------------------------------
int __thiscall meth_unk00348_10048530(unk00348 *this) {
    int v2;                         // ebp
    void (*v3)(void);               // eax
    void (*v4)(void);               // eax
    unk1E214 *v5;                   // esi
    int(__cdecl * v6)(unk1E214 *);  // eax
    int v7;                         // eax
    int(__cdecl * v8)(int);         // eax
    int v9;                         // eax
    int v10;                        // edi
    WORD *v11;                      // ebp
    unk1E214 *v12;                  // ecx
    int(__cdecl * v13)(unk1E214 *); // eax
    int v14;                        // eax
    unk000C8 *v15;                  // eax
    void (*v16)(void);              // ebx
    int result;                     // eax
    unk1E214 **v18;                 // [esp+10h] [ebp-8h]
    int v19;                        // [esp+14h] [ebp-4h]

    v2 = 0;
    v3 = *(void (**)(void))this->field_4;
    if (v3)
        v3();
    v4 = *(void (**)(void)) & this->field_4[8];
    if (v4)
        v4();
    word_10AA2870 = 0;
    meth_100484F0((unsigned __int16 *)this);
    v19 = 0;
    if (this->field_14) {
        v18 = this->field_18;
        while (1) {
            v5 = *v18;
            if (!*v18)
                break;
            v6 = (int(__cdecl *)(unk1E214 *))v5->field_14;
            if (v6) {
                if (!v6(*v18))
                    break;
            }
            v7 = v5->field_1C;
            if ((v7 & 0x1000) == 0)
                goto LABEL_18;
            v5->lpVtbl->meth1(v5);
            v8 = v5->field_4;
            if (v8)
                v8((int)v5);
            if ((v5->field_1C & 0x10) != 0) {
                if (word_10AA286C == word_10AA2870) {
                    word_10AA286C += word_100AB3DC;
                    meth_100484F0((unsigned __int16 *)this);
                }
                ++word_10AA2870;
            }
            v7 = v5->field_1C;
            if ((v7 & 0x10) != 0) {
            LABEL_18:
                if ((v7 & 0x800) == 0) {
                    if (!v5->lpVtbl->meth3(v5)) {
                        byte_10AA28A8 = 0;
                        break;
                    }
                    v9 = v5->field_1C;
                    if ((v9 & 0x6000) != 0 &&
                        (this->field_340->field_BC == v2 || (v9 & 0x4000) != 0) &&
                        (__int16)v5->field_2AB4[0] > 0) {
                        v10 = 0;
                        v11 = &v5->field_2AB4[1];
                        do {
                            v12 = this->field_18[(__int16)*v11];
                            v12->lpVtbl->meth3(v12);
                            ++v10;
                            ++v11;
                        } while (v10 < (__int16)v5->field_2AB4[0]);
                        v2 = v19;
                    }
                    v13 = (int(__cdecl *)(unk1E214 *))v5->field_18;
                    if (v13 && !v13(v5))
                        break;
                    v14 = v5->field_1C;
                    if ((v14 & 0x20) != 0 && !dword_10AA28D8 && (v14 & 0x2000) != 0) {
                        v15 = this->field_340;
                        if (v15->field_BC != v2) {
                            v15->field_BC = v2;
                            memset(&this->field_340->field_6C, 0, 0x50u);
                            this->field_340->field_6C = 1;
                        }
                    }
                }
            }
            v19 = ++v2;
            ++v18;
            if (v2 >= this->field_14)
                goto LABEL_36;
        }
        result = 0;
    } else {
    LABEL_36:
        v16 = *(void (**)(void)) & this->field_4[4];
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
