#include "types-win32.h"
//----- (10003320) --------------------------------------------------------
bool __cdecl CHK_FileExists(char *filename) {
    FILE *fp;                // eax
    CHAR debugMessage[1024]; // [esp+4h] [ebp-400h] BYREF

    if (debugOutput) {
        sprintf(debugMessage, "CHK_FileExists(%s)\n", filename);
        OutputDebugStringA(debugMessage);
    }
    fp = fopen(filename, kFileModeReadBinary);
    if (fp) {
        fclose(fp);
        LOBYTE(fp) = 1;
    }
    return (char)fp;
}
// 10220CE0: using guessed type int debugOutput;
