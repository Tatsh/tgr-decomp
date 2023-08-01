//----- (10048470) --------------------------------------------------------
_DWORD *__thiscall sub_10048470(_DWORD *this) {
    this[4] = 0;
    *((_WORD *)this + 10) = 0;
    this[206] = 0;
    this[207] = 0;
    *this = &off_1008F6F8;
    this[1] = 0;
    this[2] = 0;
    this[3] = 0;
    memset(this + 6, 0, 0x320u);
    this[208] = 0;
    *((_WORD *)this + 418) = 0;
    *((_WORD *)this + 419) = 0;
    return this;
}
// 1008F6F8: using guessed type int (__thiscall *off_1008F6F8)(void *Block, char);
