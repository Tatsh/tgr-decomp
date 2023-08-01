//----- (100088B0) --------------------------------------------------------
int __thiscall meth_100088B0(int *this, int a2, int a3) {
    int v4; // edi
    int v5; // eax

    v4 = *this;
    v5 = (*(int(__thiscall **)(int *, int, int))(*this + 12))(this, a2, a3);
    return (*(int(__thiscall **)(int *, int))(v4 + 28))(this, v5);
}
