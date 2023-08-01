//----- (1000B280) --------------------------------------------------------
int __thiscall sub_1000B280(int this, _DWORD *a2) {
    if (!a2)
        return -2147024809;
    *(_DWORD *)(this + 136) = a2;
    sub_10001140(a2, this);
    if ((*(_BYTE *)(this + 28) & 0x1F) == 31)
        sub_10001160(*(int **)(this + 136));
    return 0;
}
