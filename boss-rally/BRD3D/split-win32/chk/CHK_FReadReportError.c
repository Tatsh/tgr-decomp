#include "../types-win32.h"
//----- (10003170) --------------------------------------------------------
void *__cdecl CHK_FReadReportError(void *buffer,
                                   size_t elementSize,
                                   size_t elementCount,
                                   CHK_File *fp) {
    CHAR debugMessage[1024]; // [esp+Ch] [ebp-400h] BYREF

    if (!FCHK_FRead_0(buffer, elementSize, elementCount, fp)) {
        sprintf(debugMessage,
                "CHK_FRead(): trying to read %u bytes, but got EOF.\n",
                elementSize * elementCount);
        OutputDebugStringA(debugMessage);
        exit(1);
    }
    return buffer;
}
