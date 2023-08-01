//----- (10061010) --------------------------------------------------------
int __cdecl sub_10061010(int carIndex, int a2) {
    _BYTE *v2;           // ebx
    _BYTE *mem;          // esi
    int *v4;             // ebp
    int *mem_1;          // eax
    int result;          // eax
    int v7;              // [esp+10h] [ebp-408h]
    int v8;              // [esp+14h] [ebp-404h]
    char filename[1024]; // [esp+18h] [ebp-400h] BYREF

    v8 = 30;
    v2 = (char *)&unk_100ADFD0 + 1200 * carIndex;
    do {
        if (!*(_DWORD *)v2) {
            if (*((_DWORD *)v2 + 9)) {
                sprintf(filename, "Paint\\%s", *((const char **)v2 + 9));
                if (CHK_FileExists(filename)) {
                    *(_DWORD *)v2 = LoadImageWrapper(filename);
                    filename[8] = 100;
                    if (CHK_FileExists(filename)) {
                        mem = LoadImageWrapper(filename);
                        if (*(_DWORD *)v2) {
                            if (mem) {
                                sub_10061210(*(unsigned __int8 **)v2, g_bmWidth, g_bmHeight, mem);
                                free(mem);
                            }
                        }
                    }
                    if (*(_DWORD *)v2 && *((int *)v2 + 4) >= 0 && a2 && dword_100ADFC8) {
                        v7 = 1;
                        v4 = (int *)(v2 + 4);
                        do {
                            mem_1 = (int *)malloc(4 * g_bmWidth * g_bmHeight);
                            *v4 = (int)mem_1;
                            if (mem_1) {
                                qmemcpy(mem_1, *(const void **)v2, 4 * g_bmWidth * g_bmHeight);
                                sub_10061290(v7, *v4, g_bmWidth, g_bmHeight);
                            }
                            ++v4;
                            ++v7;
                        } while (v7 < 4);
                    }
                }
            }
        }
        v2 += 40;
        result = --v8;
    } while (v8);
    return result;
}
// 100ADFC8: using guessed type int dword_100ADFC8;
// 10AA3464: using guessed type int g_bmWidth;
// 10AA3468: using guessed type int g_bmHeight;
