//----- (100033F0) --------------------------------------------------------
void *__cdecl CHK_ReAllocateMemory_0(void *ptr, size_t size, char *debugName) {
    void *result;            // eax
    CHAR debugMessage[1024]; // [esp+8h] [ebp-400h] BYREF

    result = realloc(ptr, size);
    if (!size)
        return 0;
    if (!result) {
        sprintf(debugMessage,
                "CHK_ReAllocateMemory(): Out of memory: couldn't reallocate %s\n",
                debugName);
        OutputDebugStringA(debugMessage);
        exit(1);
    }
    return result;
}
