//----- (10047FB0) --------------------------------------------------------
__int16 __thiscall sub_10047FB0(
    int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, __int16 a9) {
    int v9;         // edx
    int v10;        // eax
    __int16 result; // ax

    *(_DWORD *)(this + 10984) = a2;
    v9 = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 28) |= a5;
    v10 = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 36) = a6 | v9;
    *(_DWORD *)(this + 40) = a7 | v10;
    *(_DWORD *)(this + 10600) = a8;
    *(_DWORD *)(this + 64) = a4;
    result = a9;
    *(_DWORD *)(this + 60) = a3;
    *(_WORD *)(this + 10816) = a9;
    *(_WORD *)(this + 123404) = a9;
    return result;
}
