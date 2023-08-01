//----- (1001ADA0) --------------------------------------------------------
bool __thiscall sub_1001ADA0(_BYTE *this, const void *a2) {
    if (!a2)
        return 0;
    if ((*this & 1) != 0)
        return memcmp(this + 4, a2, 0x10u) == 0;
    return 0;
}
