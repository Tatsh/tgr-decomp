//----- (10067880) --------------------------------------------------------
char *__cdecl sub_10067880(const void **a1, char *a2, int a3) {
    const void **v3; // edx
    char *v4;        // eax
    const void *v5;  // esi
    const void **v6; // ebx
    char *result;    // eax
    char Buffer[80]; // [esp+10h] [ebp-50h] BYREF

    v3 = a1;
    v4 = a2;
    v5 = *a1;
    if (*a1) {
        v6 = a1;
        do {
            v3 += 2;
            qmemcpy(v4, v5, (unsigned int)v6[1]);
            v5 = *v3;
            v4 = &v4[(_DWORD)v6[1]];
            v6 = v3;
        } while (*v3);
    }
    result = (char *)(v4 - a2);
    if ((int)result > a3) {
        sprintf(Buffer, "VAR SAVE OVERFLOW (%d avail, %d used)", a3, result);
        sub_10035BBA((int)Buffer);
    }
    return result;
}
