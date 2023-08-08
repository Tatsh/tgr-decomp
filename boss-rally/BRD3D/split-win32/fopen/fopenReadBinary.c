#include "../types-win32.h"
//----- (10008C20) --------------------------------------------------------
FILE *__stdcall fopenReadBinary(char *FileName) {
    FILE *result; // eax
    int *v2;      // eax
    char *v3;     // eax

    result = fopen(FileName, kFileModeReadBinary);
    if (!result) {
        v2 = _errno();
        v3 = strerror(*v2);
        writeToRandomBufferAndExit("Error opening %s: %s", FileName, v3);
    }
    return result;
}
