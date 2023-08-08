#include "types-win32.h"
//----- (1007D150) --------------------------------------------------------
size_t __cdecl fwriteLock(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream) {
    size_t v4; // edi

    _lock_file(Stream);
    v4 = fwrite(Buffer, ElementSize, ElementCount, Stream);
    _unlock_file(Stream);
    return v4;
}
