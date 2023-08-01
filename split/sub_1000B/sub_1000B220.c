//----- (1000B220) --------------------------------------------------------
HRESULT __thiscall sub_1000B220(unk0 *this, int a2) {
    int v3;         // eax
    HRESULT result; // eax
    int v5;         // eax

    if (a2) {
        v3 = this->field_24 + 1;
        this->field_24 = v3;
        if (v3 == 1) {
            result = sub_1000B170(this);
            if (result < 0)
                return result;
        }
        return 0;
    }
    v5 = this->field_24;
    if (!v5)
        return -2005522671;
    if (v5 != 1 || (result = sub_1000B1F0(this), result >= 0)) {
        --this->field_24;
        return 0;
    }
    return result;
}
