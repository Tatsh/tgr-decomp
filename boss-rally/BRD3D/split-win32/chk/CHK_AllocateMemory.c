#include "../types-win32.h"
//----- (10003390) --------------------------------------------------------
void *__cdecl CHK_AllocateMemory(size_t size, const char *debugName) {
    void *ptr;               // eax
    CHAR debugMessage[1024]; // [esp+0h] [ebp-400h] BYREF

    ptr = (void *)size;
    if (size) {
        ptr = malloc(size);
        if (!ptr) {
            sprintf(debugMessage,
                    "CHK_AllocateMemory(): Out of memory: couldn't allocate %s\n",
                    debugName);
            OutputDebugStringA(debugMessage);
            exit(1);
        }
    }
    return ptr;
}
