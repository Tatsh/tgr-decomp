//----- (10069C90) --------------------------------------------------------
int __thiscall meth_10069C90(_DWORD *this) {
    int result; // eax

    qmemcpy(this, aE, 0xA8u);
    qmemcpy(this + 42, &unk_100B4140, 0xA8u);
    qmemcpy(this + 84, &unk_100B41E8, 0xA8u);
    qmemcpy(this + 126, &unk_100B4290, 0xA8u);
    this[168] = 0;
    this[169] = this;
    this[170] = 1;
    this[171] = 1;
    this[172] = 1;
    memset(this + 173, 0, 0x104u);
    memset(this + 238, 0, 0x400u);
    this[494] = 640;
    this[495] = 480;
    this[496] = 16;
    this[497] = 0;
    this[498] = 0;
    this[499] = 0;
    this[500] = 0;
    this[501] = 0;
    this[502] = 9;
    this[503] = 9;
    result = 0;
    this[504] = 2;
    this[505] = 0;
    this[506] = 0;
    this[507] = 1;
    this[508] = 1;
    this[509] = 1;
    this[510] = 0;
    this[511] = 3;
    this[512] = 0;
    this[513] = 0;
    this[514] = 4;
    this[515] = 0;
    memset(this + 516, 0, 0x20u);
    memset(this + 524, 0, 0x40u);
    this[540] = 1;
    return result;
}
