//----- (1005BC10) --------------------------------------------------------
int __thiscall sub_1005BC10(char *this, char *Source, int a3, int a4, int a5, int a6) {
    int result;           // eax
    char *v8;             // edx
    unsigned int v9;      // eax
    char *v10;            // edi
    char *v11;            // esi
    char v12;             // cl
    unsigned int v13;     // ebx
    const char *v14;      // edi
    char *v15;            // edi
    char *v16;            // eax
    int v17;              // eax
    __int16 v18;          // ax
    void (*v19)(void);    // eax
    unsigned __int16 v20; // ax
    double v21;           // st7
    char v23;             // c0
    __int64 v24;          // rax

    if (!Source)
        return 0;
    if (*((_WORD *)this + 54422) >= 0x64u) {
        (*(void(__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 44))(this, 0);
        *((_WORD *)this + 54422) = 99;
    }
    if (a6) {
        v9 = strlen(Source) + 1;
        v8 = &this[1080 * *((unsigned __int16 *)this + 54422) + 53];
        qmemcpy(v8, Source, 4 * (v9 >> 2));
        v11 = &Source[4 * (v9 >> 2)];
        v10 = &v8[4 * (v9 >> 2)];
        v12 = v9;
    } else {
        strncpy(&this[1080 * *((unsigned __int16 *)this + 54422) + 53], Source, 0xAu);
        v13 = strlen(SrcStr) + 1;
        v14 = &this[1080 * *((unsigned __int16 *)this + 54422) + 53];
        v15 = (char *)&v14[strlen(v14)];
        qmemcpy(v15, SrcStr, 4 * (v13 >> 2));
        v11 = &SrcStr[4 * (v13 >> 2)];
        v10 = &v15[4 * (v13 >> 2)];
        v12 = v13;
    }
    qmemcpy(v10, v11, v12 & 3);
    *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 48] |= a3;
    this[1080 * *((unsigned __int16 *)this + 54422) + 52] = a4;
    *(_WORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1096] = 0;
    *(_WORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1080] = 0;
    *(_WORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1078] = 0;
    *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1104] = *(_DWORD *)a5;
    *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1112] = *(_DWORD *)(a5 + 8);
    *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1108] =
        19 * *((unsigned __int16 *)this + 54422) + (__int64)*((float *)this + 8);
    *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1116] =
        *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1108] + 18;
    *(float *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1084] = (float)*(int *)a5;
    *(float *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1088] =
        (float)*(int *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1108];
    *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1092] = 0;
    *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 1100] = 0;
    if ((_BYTE)a4 == 3)
        (*(void(__thiscall **)(char *))(
            *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 44] + 8))(
            &this[1080 * *((unsigned __int16 *)this + 54422) + 44]);
    else
        (*(void(__thiscall **)(char *))(
            *(_DWORD *)&this[1080 * *((unsigned __int16 *)this + 54422) + 44] + 4))(
            &this[1080 * *((unsigned __int16 *)this + 54422) + 44]);
    v16 = &this[1080 * *((unsigned __int16 *)this + 54422)];
    *((_WORD *)v16 + 548) = *((_WORD *)v16 + 556) - *((_WORD *)v16 + 552) - 16;
    v17 = *((_DWORD *)this + 6);
    ++*((_WORD *)this + 54422);
    if ((v17 & 0x800000) == 0)
        goto LABEL_26;
    v18 = *((_WORD *)this + 54423) + *((_WORD *)this + 54424);
    if (v18 >= 100)
        v18 = *((_WORD *)this + 54422) - 1;
    result = _strcmpi(&this[1080 * v18 + 53], String2);
    if (result) {
        if ((__int16)++*((_WORD *)this + 54423) >= (int)*((unsigned __int16 *)this + 54422))
            *((_WORD *)this + 54423) = *((_WORD *)this + 54422) - 1;
        v19 = (void (*)(void)) * ((_DWORD *)this + 3);
        if (v19)
            v19();
        v20 = *((_WORD *)this + 54422) - 1;
        if (*((_WORD *)this + 54422) == 1)
            v20 = 1;
        v21 = *((float *)this + 27252) / (double)v20 + *((float *)this + 27244);
        *((float *)this + 27244) = v21;
        if (v23) {
            *((_DWORD *)this + 27244) = *((_DWORD *)this + 27250);
        } else if (v21 > *((float *)this + 27251)) {
            *((_DWORD *)this + 27244) = *((_DWORD *)this + 27251);
        }
        v24 = (__int64)*((float *)this + 27244);
        *((_DWORD *)this + 27236) = v24;
        *((_DWORD *)this + 27238) = v24 + 16;
    LABEL_26:
        result = 1;
    }
    return result;
}
// 1005BFA4: variable 'v23' is possibly undefined
