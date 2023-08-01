//----- (10008B90) --------------------------------------------------------
unsigned int __stdcall basename(const char *path, char *out) {
    const char *p;       // edi
    unsigned int result; // eax

    for (p = &path[strlen(path) - 1]; p != path; --p) {
        if (*(p - 1) == '\\')
            break;
    }
    result = strlen(p) + 1;
    qmemcpy(out, p, result);
    return result;
}
