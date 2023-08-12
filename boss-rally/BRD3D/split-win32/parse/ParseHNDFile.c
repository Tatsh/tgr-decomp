#include "types-win32.h"
//----- (10037990) --------------------------------------------------------
int __cdecl ParseHNDFile(char *hndFilepath) {
    CHK_File *v1;      // esi
    char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

    dword_10A99778 = 0;
    gFirstLineHNDFile = 3145728;
    if (CHK_FileExists(hndFilepath)) {
        v1 = CHK_FReadOpen(hndFilepath);
        if (CHK_ReadLine(Buffer, 1024, &v1->pfil)) {
            sscanf(Buffer, "%u", &gFirstLineHNDFile);
            if (CHK_ReadLine(Buffer, 1024, &v1->pfil)) {
                do {
                    sscanf(Buffer,
                           "%u %x %d %d",
                           &gUnk06594.gap4A2C[16 * dword_10A99778 + 204],
                           &gUnk06594.gap4A2C[16 * dword_10A99778 + 208],
                           &gUnk06594.gap4A2C[16 * dword_10A99778 + 212],
                           &gUnk06594.gap4A2C[16 * dword_10A99778 + 216]);
                    ++dword_10A99778;
                } while (dword_10A99778 < 256 && CHK_ReadLine(Buffer, 1024, &v1->pfil));
            }
        }
        CHK_FClose(v1);
    }
    return sub_1002A5A0();
}
// 10A99778: using guessed type int dword_10A99778;
// 11829848: using guessed type int gFirstLineHNDFile;
