//----- (1001B9A0) --------------------------------------------------------
HRESULT ddrawEnum() {
    HRESULT result; // eax
    LPVOID Context; // [esp+0h] [ebp-Ch] BYREF
    int v2;         // [esp+4h] [ebp-8h]
    int v3;         // [esp+8h] [ebp-4h]

    Context = (LPVOID)1;
    v2 = 0;
    v3 = 0;
    result = DirectDrawEnumerateA(ddrawEnumerateCallback, &Context);
    if (result >= 0) {
        if (Context && v2 && dword_104BBE1C == v2)
            result = 0;
        else
            result = -2005522671;
    }
    return result;
}
// 104BBE1C: using guessed type int dword_104BBE1C;
