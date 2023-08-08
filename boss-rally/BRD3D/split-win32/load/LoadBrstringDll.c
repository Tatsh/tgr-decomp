#include "../types-win32.h"
//----- (10073F60) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
HMODULE LoadBrstringDll() {
    HMODULE hMod;      // eax
    CHK_File *cFile;   // esi
    HINSTANCE hInst;   // ebx
    void *brStringMem; // edx
    int v4;            // eax
    UINT v5;           // edi
    _DWORD *v6;        // esi
    int v7;            // eax
    void *_unused;     // [esp-4h] [ebp-10h]

    memset(&unk_11829374, 0, 0x4B8u);
    hMod = (HMODULE)g_brstring;
    if (!g_brstring) {
        cFile = CHK_FReadOpen(kBRStringDLLFilename);
        brStringFileSize = CHK_GetFileSize(cFile, _unused);
        CHK_FClose(cFile);
        hMod = LoadLibraryA(kBRStringDLLFilename);
        hInst = hMod;
        if (hMod) {
            brStringMem = malloc(brStringFileSize);
            g_brstring = brStringMem;
            if (brStringMem) {
                v4 = dword_11829830;
                v5 = 1;
                v6 = &unk_11829374;
                do {
                    v7 = LoadStringA(hInst, v5, (LPSTR)brStringMem + v4, brStringFileSize - v4);
                    brStringMem = g_brstring;
                    if (v7) {
                        v4 = dword_11829830 + v7 + 1;
                        *v6 = (char *)g_brstring + dword_11829830;
                        dword_11829830 = v4;
                    } else {
                        v4 = dword_11829830;
                    }
                    ++v6;
                    ++v5;
                } while ((int)v6 < (int)&g_brstring);
            }
            hMod = (HMODULE)FreeLibrary(hInst);
        }
    }
    return hMod;
}
// 1007402E: positive sp value 4 has been found
// 10073F8E: variable '_unused' is possibly undefined
// 11829830: using guessed type int dword_11829830;
