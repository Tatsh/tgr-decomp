//----- (10035FA0) --------------------------------------------------------
int __thiscall sub_10035FA0(int *this, int a2) {
    int v2;     // edx
    int result; // eax

    v2 = *this;
    this[1] |= *this & a2;
    result = v2 & ~a2;
    *this = result;
    return result;
}