//----- (10047660) --------------------------------------------------------
int __usercall sub_10047660 @<eax>(int result @<eax>) {
    const char *v1; // edx
    char **v2;      // ebp
    int v3;         // ecx
    int v4;         // edi

    v1 = off_100AC6AC;
    if (off_100AC6AC) {
        v2 = &off_100AC6AC;
        do {
            v3 = strlen(v1);
            v4 = 0;
            if (v3 <= 0) {
            LABEL_7:
                result = ((int (*)(void)) * (v2 - 1))();
            } else {
                result = dword_10AA2A48;
                while (v1[result - dword_10AA2A48] ==
                       LOBYTE(dword_10A9E150[((_BYTE)result - (_BYTE)v3) & 0x1F])) {
                    ++v4;
                    ++result;
                    if (v4 >= v3)
                        goto LABEL_7;
                }
            }
            v1 = v2[2];
            v2 += 2;
        } while (v1);
    }
    return result;
}
// 100AC6AC: using guessed type char *off_100AC6AC;
// 10A9E150: using guessed type int dword_10A9E150[];
// 10AA2A48: using guessed type int dword_10AA2A48;
