#include "../types-win32.h"
//----- (10002FE0) --------------------------------------------------------
CHK_File *__cdecl CHK_FReadOpen(const char *filename) {
    CHK_File *cFile;         // ebx
    char *filenameBuf;       // edx
    FILE *ret;               // eax
    FILE *logHandle;         // esi
    CHAR debugMessage[1024]; // [esp+Ch] [ebp-400h] BYREF

    cFile = (CHK_File *)CHK_AllocateMemory(8u, aChkFreadopenPf);
    filenameBuf = (char *)CHK_AllocateMemory(strlen(filename) + 1, aChkFreadopenSz);
    cFile->szName = filenameBuf;
    strcpy(filenameBuf, filename);
    if (debugOutput) {
        sprintf(debugMessage, "CHK_FReadOpen(%s)\n", cFile->szName);
        OutputDebugStringA(debugMessage);
    }
    ret = fopen(cFile->szName, kFileModeReadBinary);
    cFile->pfil = ret;
    if (!ret) {
        logHandle = fopen(kFilepathErrorLog, kFileModeWrite);
        sprintf(debugMessage, "CHK_FReadOpen(): error opening file %s.\n", cFile->szName);
        fprintf(logHandle, debugMessage);
        OutputDebugStringA(debugMessage);
        fclose(logHandle);
        exit(1);
    }
    return cFile;
}
// 10220CE0: using guessed type int debugOutput;
