//----- (100085C0) --------------------------------------------------------
void *__thiscall sub_100085C0(void *this, char a2) {
    sub_100085E0(this);
    if ((a2 & 1) != 0)
        free(this);
    return this;
}
