//----- (1001AC60) --------------------------------------------------------
int __thiscall sub_1001AC60(__unk0 *this) {
    if (this->field_46 != 108)
        return 0;
    if ((this->field_45 & 0x1000) == 0)
        return 0;
    if (this->field_27 == 32)
        return this->bitDepth0;
    return 0;
}
