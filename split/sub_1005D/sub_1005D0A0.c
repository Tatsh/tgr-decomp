//----- (1005D0A0) --------------------------------------------------------
int __stdcall sub_1005D0A0(LPCSTR lpFileName) {
    int result; // eax
    void *v2;   // ebx
    int v3;     // edi
    int i;      // esi
    int v5[70]; // [esp+4h] [ebp-118h] BYREF

    result = _findfirst(lpFileName, (int)v5);
    v2 = (void *)result;
    if (result != -1) {
        v3 = 0;
        for (i = 1; i < 100; ++i) {
            if (_findnext(v2, (int)v5))
                break;
            ++v3;
        }
        _findclose((intptr_t)v2);
        result = v3;
    }
    return result;
}
