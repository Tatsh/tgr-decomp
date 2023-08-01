//----- (100488C0) --------------------------------------------------------
int __thiscall sub_100488C0(_BYTE *this) {
    int v3;    // ecx
    void *v4;  // esi
    float *v5; // ecx
    float v6;  // edx

    if ((this[8] & 0x10) != 0)
        return 0;
    v3 = 0;
    if (g_Playmusic == 2) {
        v3 = 1;
    } else {
        if (!(dword_10AA2A4C % 120))
            v3 = 1;
        ++dword_10AA2A4C;
    }
    if (v3)
        dword_10AA2A34 = pm_sub_10002910() - 2;
    v4 = dword_10AA2904;
    dword_10AA2904 = (void *)dword_10AA2908;
    v5 = *(float **)(*(_DWORD *)(dword_10AA2908 + 20) + 820);
    v5[15] = (float)*(int *)dword_10AA2E80;
    v6 = *v5;
    v5[16] = (float)*((int *)dword_10AA2E80 + 1);
    (*(void (**)(void))(LODWORD(v6) + 12))();
    dword_10AA2904 = v4;
    if (!dword_10AA2874)
        (*(void(__thiscall **)(_BYTE *))(*(_DWORD *)this + 20))(this);
    return 1;
}
// 100940A4: using guessed type int g_Playmusic;
// 10AA2874: using guessed type int dword_10AA2874;
// 10AA2908: using guessed type int dword_10AA2908;
// 10AA2A34: using guessed type int dword_10AA2A34;
// 10AA2A4C: using guessed type int dword_10AA2A4C;
