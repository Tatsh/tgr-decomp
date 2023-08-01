//----- (1001C690) --------------------------------------------------------
int __cdecl sub_1001C690(unsigned int a1) {
    int result; // eax
    int v3;     // eax
    int v4;     // ebx
    _DWORD *v5; // esi
    __int64 v6; // rax
    int v7;     // [esp+10h] [ebp-8h]
    int v8;     // [esp+14h] [ebp-4h]
    float v9;   // [esp+20h] [ebp+8h]
    float v10;  // [esp+20h] [ebp+8h]
    float v11;  // [esp+20h] [ebp+8h]

    if (a1 >= (unsigned int)flt_104C16D0 && a1 < (unsigned int)flt_104C4CD0) {
        result = *(_DWORD *)(a1 + 104);
        if (result != -1)
            return result;
        *(_DWORD *)(a1 + 104) = g_vertexCount;
        v3 = dword_104C5190;
        dword_104C0BC0[dword_104C5190] = a1;
        dword_104C5190 = v3 + 1;
    }
    v4 = g_vertexCount++;
    v9 = *(float *)(a1 + 12) * 255.0;
    v8 = (int)v9;
    v10 = *(float *)(a1 + 16) * 255.0;
    v7 = (int)v10;
    v11 = *(float *)(a1 + 20) * 255.0;
    v5 = (_DWORD *)((char *)&g_vertices + 32 * v4);
    *v5 = *(_DWORD *)a1;
    v5[1] = *(_DWORD *)(a1 + 4);
    v5[2] = *(_DWORD *)(a1 + 8);
    v5[3] = *(_DWORD *)(a1 + 32);
    v5[4] = (int)v11 | ((v7 | ((v8 | 0xFFFFFF00) << 8)) << 8);
    v6 = (__int64)(flt_104C15C8 * *(float *)(a1 + 32));
    if ((int)v6 < dword_104BBE30)
        LODWORD(v6) = 0;
    if ((int)v6 > 255)
        LODWORD(v6) = 255;
    v5[5] = (_DWORD)v6 << 24;
    v5[6] = *(_DWORD *)(a1 + 36);
    v5[7] = *(_DWORD *)(a1 + 40);
    return v4;
}
// 104BBE30: using guessed type int dword_104BBE30;
// 104C15C8: using guessed type float flt_104C15C8;
// 104C5188: using guessed type int g_vertexCount;
// 104C5190: using guessed type int dword_104C5190;
