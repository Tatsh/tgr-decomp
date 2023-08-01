//----- (10048010) --------------------------------------------------------
int __thiscall sub_10048010(_BYTE *this) {
    int v1;     // eax
    int result; // eax

    if ((this[40] & 1) == 0)
        return 1;
    v1 = *((_DWORD *)this + 7);
    if ((v1 & 0x100000) != 0) {
        if (this != (_BYTE *)-11109) {
            (*(void(__thiscall **)(_BYTE *))(*((_DWORD *)this + 2775) + 16))(this + 11100);
            return 1;
        }
        return 1;
    }
    if ((v1 & 0x200000) != 0)
        return 1;
    result = (*(int(__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
    if (result)
        return 1;
    return result;
}
