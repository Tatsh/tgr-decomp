#include "types-win32.h"
//----- (10070E80) --------------------------------------------------------
char sub_10070E80() {
    int v0;        // eax
    int v1;        // eax
    int v2;        // eax
    int *v3;       // eax
    FILE *v4;      // eax
    FILE *v5;      // esi
    char result;   // al
    size_t v7;     // eax
    size_t v8;     // eax
    size_t v9;     // eax
    size_t v10;    // eax
    size_t v11;    // eax
    size_t v12;    // eax
    int *v13;      // eax
    size_t v14;    // edi
    size_t v15;    // eax
    int v16;       // [esp-8h] [ebp-18h]
    int v17;       // [esp-4h] [ebp-14h]
    FILE *v18;     // [esp-4h] [ebp-14h]
    FILE *v19;     // [esp-4h] [ebp-14h]
    int v20;       // [esp+8h] [ebp-8h] BYREF
    size_t Buffer; // [esp+Ch] [ebp-4h] BYREF

    v0 = CalculateChecksum(0, 0, 0);
    v1 = CalculateChecksum(v0, &dword_10AA28CC, 4u);
    v2 = CalculateChecksum(v1, &dword_10AA28C8, 4u);
    v20 = CalculateChecksum(v2, (unsigned __int8 *)dword_10680738, 0x10u);
    v17 = sub_1006ABA0();
    v3 = sub_1006AB90();
    v20 = CalculateChecksum(v20, (unsigned __int8 *)v3, v17);
    Buffer = sub_1006ABA0() + ElementCount + 12;
    v4 = fopen(aCRallyghostDatFilepath, kFileModeWriteBinary);
    v5 = v4;
    if (!v4)
        return 0;
    v7 = filesystem_fwriteLock(aRgho, 1u, 4u, v4);
    v18 = v5;
    if (v7 == 4 && (v8 = filesystem_fwriteLock(&unk_1008FC1C, 4u, 1u, v5), v18 = v5, v8 == 1)) {
        if (filesystem_fwriteLock(&Buffer, 1u, 4u, v5) == 4) {
            v9 = filesystem_fwriteLock(&v20, 1u, 4u, v5);
            v19 = v5;
            if (v9 != 4)
                goto LABEL_16;
            v10 = filesystem_fwriteLock(&dword_10AA28CC, 4u, 1u, v5);
            v19 = v5;
            if (v10 != 1)
                goto LABEL_16;
            v11 = filesystem_fwriteLock(&dword_10AA28C8, 4u, 1u, v5);
            v19 = v5;
            if (v11 != 1)
                goto LABEL_16;
            v12 = filesystem_fwriteLock(dword_10680738, 1u, ElementCount, v5);
            v19 = v5;
            if (v12 != ElementCount)
                goto LABEL_16;
            v16 = sub_1006ABA0();
            v13 = sub_1006AB90();
            v14 = filesystem_fwriteLock(v13, 1u, v16, v5);
            v19 = v5;
            if (v14 != sub_1006ABA0())
                goto LABEL_16;
            filesystem_fwriteLock(&dword_10AA2A08, 4u, 1u, v5);
            filesystem_fwriteLock(&dword_100AC64C, 4u, 1u, v5);
            filesystem_fwriteLock(&dword_100AC650, 4u, 1u, v5);
            filesystem_fwriteLock(&dword_100AC654, 4u, 1u, v5);
            filesystem_fwriteLock(&dword_100AC65C, 4u, 1u, v5);
            filesystem_fwriteLock(&dword_100AC658, 4u, 1u, v5);
            v15 = filesystem_fwriteLock(gBuffer1, 1u, 0x80u, v5);
            v19 = v5;
            if (v15 == 128) {
                fclose(v5);
                result = 1;
            } else {
            LABEL_16:
                fclose(v19);
                result = 0;
            }
        } else {
            fclose(v5);
            result = 0;
        }
    } else {
        fclose(v18);
        result = 0;
    }
    return result;
}
// 100AC64C: using guessed type int dword_100AC64C;
// 100AC650: using guessed type int dword_100AC650;
// 100AC654: using guessed type int dword_100AC654;
// 100AC658: using guessed type int dword_100AC658;
// 100AC65C: using guessed type int dword_100AC65C;
// 10AA2A08: using guessed type int dword_10AA2A08;
