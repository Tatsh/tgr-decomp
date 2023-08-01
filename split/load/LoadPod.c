//----- (10008810) --------------------------------------------------------
int __thiscall LoadPod(unk1 *this, unsigned int ArgList) {
    unk1Vtbl *v3; // edi
    size_t v4;    // eax
    int v5;       // ebx

    if (ArgList >= this->cNumPods)
        writeToRandomBufferAndExit("LoadPod: %i >= m_cNumPods", ArgList);
    v3 = this->vtbl;
    v4 = this->vtbl->field_10(this, ArgList);
    v5 = malloc(v4);
    v3->field_14(this, ArgList, v5);
    return v5;
}
