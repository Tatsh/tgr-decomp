#include "types-win32.h"
//----- (1005D110) --------------------------------------------------------
int __thiscall meth_unk06594_3(unk06594 *this, char *Str1, int a3) {
    int v3;           // ebx
    unsigned int v4;  // esi
    char *v5;         // edx
    int i;            // ecx
    char v7;          // al
    size_t v8;        // ebx
    const char *v9;   // ebp
    char *j;          // esi
    unsigned int v11; // kr1C_4
    unsigned int v12; // edx
    char *v13;        // esi
    char v14;         // al
    char *v15;        // ecx
    int v16;          // esi
    int result;       // eax
    __int16 v18;      // [esp+10h] [ebp-41Ch]
    int v19;          // [esp+10h] [ebp-41Ch]
    unk06594 *v20;    // [esp+18h] [ebp-414h] BYREF
    char v21[260];    // [esp+1Ch] [ebp-410h] BYREF
    char String[260]; // [esp+120h] [ebp-30Ch] BYREF
    char v23[260];    // [esp+224h] [ebp-208h] BYREF
    char v24[260];    // [esp+328h] [ebp-104h] BYREF

    v20 = this;
    memset(v21, 0, sizeof(v21));
    memset(String, 0, sizeof(String));
    memset(v24, 0, sizeof(v24));
    v3 = 0;
    memset(v23, 0, sizeof(v23));
    v18 = 0;
    strcpy(v21, Str1);
    v4 = 0;
    if (strlen(Str1)) {
        v5 = Str1;
        for (i = v24 - Str1;; i = v24 - Str1) {
            v7 = *v5;
            if (*v5 == 88 || v7 == 120) {
                *v5 = 48;
            } else {
                if (v3)
                    goto LABEL_11;
                if (v7 != 46) {
                    v5[i] = v7;
                    ++v18;
                    goto LABEL_11;
                }
            }
            v3 = 1;
        LABEL_11:
            ++v4;
            ++v5;
            if (v4 >= strlen(Str1))
                break;
        }
    }
    v8 = v18;
    v9 = (const char *)&v20->field_4;
    v19 = 100;
    do {
        if (!strncmp(Str1, v9, v8) && strcmp(Str1, v9) < 0)
            strcpy(v21, v9);
        v9 += 260;
        --v19;
    } while (v19);
    for (j = (char *)&v20 + strlen(v21) + 3; j != v21; --j) {
        if (*j == 46)
            break;
    }
    if (j != v21) {
        v11 = strlen(v21) + 1;
        qmemcpy(v23, j, v21 - j + v11 - 1);
        v23[v21 - j - 1 + v11] = 0;
    }
    v12 = v8;
    if (v8 < strlen(v21)) {
        v13 = &String[v8];
        do {
            v14 = v21[v12];
            if (v14 < 48)
                break;
            if (v14 > 57)
                break;
            v15 = &v13[-v8];
            ++v12;
            ++v13;
            *v15 = v14;
        } while (v12 < strlen(v21));
    }
    v16 = atoi(String) + 1;
    memset(String, 0, sizeof(String));
    _itoa(v16 & 0xFF000000, String, 10);
    _itoa(v16 & 0xFF0000, &String[1], 10);
    _itoa(v16 & 0xFF00, &String[2], 10);
    _itoa((unsigned __int8)v16, &String[3], 10);
    strcpy(*(char **)a3, v24);
    result = 0;
    strcat(*(char **)a3, String);
    strcat(*(char **)a3, v23);
    return result;
}
