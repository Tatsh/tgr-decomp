#include "types-win32.h"
//----- (10073F60) --------------------------------------------------------
HMODULE text_LoadBRstringDLL() {
    HMODULE hMod;      // eax
    CHK_File *cFile;   // esi
    HINSTANCE hInst;   // ebx
    LPSTR brStringMem; // edx
    int offset;        // eax
    UINT id;           // edi
    char **brStrPtr;   // esi
    int loadStringRes; // eax
    void *_unused;     // [esp+0h] [ebp-Ch]

    memset(gBrStrings, 0, sizeof(gBrStrings));
    hMod = (HMODULE)gBrstringModule;
    if (!gBrstringModule) {
        cFile = CHK_FReadOpen(kBrStringDll);
        gBrStringFileSize = CHK_GetFileSize(cFile, _unused);
        CHK_FClose(cFile);
        hMod = LoadLibraryA(kBrStringDll);
        hInst = hMod;
        if (hMod) {
            brStringMem = (LPSTR)malloc(gBrStringFileSize);
            gBrstringModule = brStringMem;
            if (brStringMem) {
                offset = gBrStringOffset;
                id = 1;
                brStrPtr = (char **)gBrStrings;
                do {
                    loadStringRes =
                        LoadStringA(hInst, id, &brStringMem[offset], gBrStringFileSize - offset);
                    brStringMem = gBrstringModule;
                    if (loadStringRes) {
                        offset = gBrStringOffset + loadStringRes + 1;
                        *brStrPtr = &gBrstringModule[gBrStringOffset];
                        gBrStringOffset = offset;
                    } else {
                        offset = gBrStringOffset;
                    }
                    ++brStrPtr;
                    ++id;
                } while ((int)brStrPtr < (int)&gBrstringModule);
            }
            hMod = (HMODULE)FreeLibrary(hInst);
        }
    }
    return hMod;
}
// 10073F8E: variable '_unused' is possibly undefined
// 11829830: using guessed type int gBrStringOffset;
