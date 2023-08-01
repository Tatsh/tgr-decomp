//----- (10008970) --------------------------------------------------------
int __thiscall meth_10008970(_DWORD *this) {
    int result; // eax

    if (this[7])
        fclose((FILE *)this[7]);
    if (this[6])
        free((void *)this[6]);
    result = 0;
    this[6] = 0;
    this[7] = 0;
    this[264] = 0;
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    memset(this + 8, 0, 0x400u);
    return result;
}
