#include "types-win32.h"
//----- (100378B0) --------------------------------------------------------
void __cdecl ReadFilenameToBuffer(void *outBuffer, char *filename, int elementCount) {
    CHK_File *cFile;   // esi
    intptr_t filesize; // eax
    void *v5;          // [esp+0h] [ebp-204h]
    char Buffer[512];  // [esp+4h] [ebp-200h] BYREF

    if (!CHK_FileExists(filename)) {
        sprintf(Buffer, "File %s missing", filename);
        s_noreturn_10008CF0(Buffer);
    }
    cFile = CHK_FReadOpen(filename);
    filesize = elementCount;
    if (elementCount < 0)
        filesize = CHK_GetFileSize(cFile, v5);
    CHK_FReadReportError((void *)elementCount, 1u, filesize, cFile);
    CHK_FClose(cFile);
}
// 10037902: variable 'v5' is possibly undefined
