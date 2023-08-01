//----- (10008BE0) --------------------------------------------------------
FILE *__stdcall fopenWriteBinary(char *FileName) {
    FILE *result; // eax
    int *v2;      // eax
    char *v3;     // eax

    result = fopen(FileName, aWb);
    if (!result) {
        v2 = _errno();
        v3 = strerror(*v2);
        writeToRandomBufferAndExit("Error opening %s: %s", FileName, v3);
    }
    return result;
}
