//----- (10047D30) --------------------------------------------------------
int __thiscall sub_10047D30(_DWORD *this) {
    int v2;     // edi
    int v3;     // ebp
    DWORD v4;   // eax
    DWORD v5;   // ecx
    int v6;     // edx
    int v7;     // eax
    char v8;    // al
    double v9;  // st7
    double v10; // st7
    char v11;   // al
    double v12; // st7
    double v13; // st7

    v2 = 0;
    v3 = 0;
    if (!this[3590])
        return 1;
    v4 = getTicks();
    if ((int)this[3594] <= 0)
        this[3594] = v4;
    v5 = v4 - this[3594];
    v6 = this[3595];
    this[3594] = v4;
    v7 = this[3585];
    this[3595] = v5 + v6;
    if (!v7)
        goto LABEL_12;
    v8 = *((_BYTE *)this + 14348);
    if (v8 == -1) {
        v10 = *((float *)this + 12) -
              ((double(__thiscall *)(_DWORD *, _DWORD)) * (_DWORD *)(*this + 40))(this, this[3595]);
        *((float *)this + 15) = v10;
        if (v10 <= *((float *)this + 3588)) {
            v2 = 1;
            this[15] = this[3588];
        }
        goto LABEL_13;
    }
    if (v8) {
        if (v8 == 1) {
            v9 = ((double(__thiscall *)(_DWORD *, _DWORD)) * (_DWORD *)(*this + 40))(this,
                                                                                     this[3595]) +
                 *((float *)this + 12);
            *((float *)this + 15) = v9;
            if (v9 >= *((float *)this + 3588)) {
                v2 = 1;
                this[15] = this[3588];
            }
        }
    } else {
    LABEL_12:
        v2 = 1;
    }
    if (!this[3586])
        goto LABEL_21;
LABEL_13:
    v11 = *((_BYTE *)this + 14349);
    if (v11 == -1) {
        v13 = *((float *)this + 13) -
              ((double(__thiscall *)(_DWORD *, _DWORD)) * (_DWORD *)(*this + 40))(this, this[3595]);
        *((float *)this + 16) = v13;
        if (v13 <= *((float *)this + 3589)) {
            v3 = 1;
            this[16] = this[3589];
        }
        goto LABEL_22;
    }
    if (v11) {
        if (v11 == 1) {
            v12 = ((double(__thiscall *)(_DWORD *, _DWORD)) * (_DWORD *)(*this + 40))(this,
                                                                                      this[3595]) +
                  *((float *)this + 13);
            *((float *)this + 16) = v12;
            if (v12 >= *((float *)this + 3589)) {
                v3 = 1;
                this[16] = this[3589];
            }
        }
    } else {
    LABEL_21:
        v3 = 1;
    }
LABEL_22:
    if (v2 && v3) {
        this[3595] = 0;
        this[3590] = 0;
    }
    return 1;
}
