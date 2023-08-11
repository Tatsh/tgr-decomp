#include "types-win32.h"
//----- (10008C90) --------------------------------------------------------
size_t __stdcall fwriteLockHandleError(FILE *Stream, void *Buffer, size_t ElementCount) {
    size_t result; // eax

    result = fwriteLock(Buffer, 1u, ElementCount, Stream);
    if (result != ElementCount)
        s_noreturn_writeToBufferExit(aFileReadFailur);
    return result;
}
