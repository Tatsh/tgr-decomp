//----- (10008750) --------------------------------------------------------
int __thiscall GetNumForNameWrapper(unk1 *this, const char *ArgList) {
    int result; // eax

    result = this->vtbl->field_8(this, (unsigned int)ArgList);
    if (result == -1)
        writeToRandomBufferAndExit("GetNumForName: %s not found!", ArgList);
    return result;
}
