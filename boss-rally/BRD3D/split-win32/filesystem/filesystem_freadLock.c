#include "types-win32.h"
//----- (1007CF10) --------------------------------------------------------
size_t __cdecl filesystem_freadLock(void *buffer,
                                    size_t elementSize,
                                    size_t elementCount,
                                    FILE *fp) {
    size_t v4; // edi

    _lock_file(fp);
    v4 = fread(buffer, elementSize, elementCount, fp);
    _unlock_file(fp);
    return v4;
}
