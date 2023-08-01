//----- (10008C60) --------------------------------------------------------
size_t __stdcall sub_10008C60(FILE *fp, void *buffer, size_t elementCount) {
    size_t result; // eax

    result = freadLock(buffer, 1u, elementCount, fp);
    if (result != elementCount)
        writeToRandomBufferAndExit(aFileReadFailur);
    return result;
}
