//----- (10008850) --------------------------------------------------------
int __thiscall LoadPod_0(unk1 *this, unsigned int argList, int a3) {
    if (argList >= this->cNumPods)
        writeToRandomBufferAndExit("LoadPod: %i >= m_cNumPods", argList);
    this->vtbl->field_14(this, argList, a3);
    return a3;
}
