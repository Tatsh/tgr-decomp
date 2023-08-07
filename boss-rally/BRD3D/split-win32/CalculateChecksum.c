#include "../types-win32.h"
//----- (10001000) --------------------------------------------------------
int __cdecl CalculateChecksum(unsigned int seed, unsigned __int8 *buf, unsigned int elementSize) {
    unsigned __int8 *buf_1; // esi
    unsigned int sum2;      // ecx
    unsigned int sum1;      // edi
    unsigned int i;         // ebx
    int chunkSize;          // eax
    unsigned int v9;        // ebp
    int v10;                // edx
    int v11;                // ecx
    int v12;                // edi
    int v13;                // ecx
    int v14;                // edi
    int v15;                // ecx
    int v16;                // edi
    int v17;                // ecx
    int v18;                // edi
    int v19;                // ecx
    int v20;                // edi
    int v21;                // ecx
    int v22;                // edi
    int v23;                // ecx
    int v24;                // edi
    int v25;                // ecx
    int v26;                // edi
    int v27;                // ecx
    int v28;                // edi
    int v29;                // ecx
    int v30;                // edi
    int v31;                // ecx
    int v32;                // edi
    int v33;                // ecx
    int v34;                // edi
    int v35;                // ecx
    int v36;                // edi
    int v37;                // ecx
    int v38;                // edi
    int v39;                // ecx
    int v40;                // edi

    buf_1 = buf;
    sum2 = (unsigned __int16)seed;
    sum1 = HIWORD(seed);
    if (!buf)
        return 1;
    for (i = elementSize; i; sum1 %= 0xFFF1u) {
        chunkSize = i;
        if (i >= 0x15B0)
            chunkSize = 0x15B0;
        i -= chunkSize;
        if (chunkSize >= 0x10) {
            v9 = (unsigned int)chunkSize >> 4;
            do {
                chunkSize -= 0x10;
                v10 = *buf_1;
                buf_1 += 0x10;
                v11 = v10 + sum2;
                v12 = v11 + sum1;
                v13 = *(buf_1 - 15) + v11;
                v14 = v13 + v12;
                v15 = *(buf_1 - 14) + v13;
                v16 = v15 + v14;
                v17 = *(buf_1 - 13) + v15;
                v18 = v17 + v16;
                v19 = *(buf_1 - 12) + v17;
                v20 = v19 + v18;
                v21 = *(buf_1 - 11) + v19;
                v22 = v21 + v20;
                v23 = *(buf_1 - 10) + v21;
                v24 = v23 + v22;
                v25 = *(buf_1 - 9) + v23;
                v26 = v25 + v24;
                v27 = *(buf_1 - 8) + v25;
                v28 = v27 + v26;
                v29 = *(buf_1 - 7) + v27;
                v30 = v29 + v28;
                v31 = *(buf_1 - 6) + v29;
                v32 = v31 + v30;
                v33 = *(buf_1 - 5) + v31;
                v34 = v33 + v32;
                v35 = *(buf_1 - 4) + v33;
                v36 = v35 + v34;
                v37 = *(buf_1 - 3) + v35;
                v38 = v37 + v36;
                v39 = *(buf_1 - 2) + v37;
                v40 = v39 + v38;
                sum2 = *(buf_1 - 1) + v39;
                sum1 = sum2 + v40;
                --v9;
            } while (v9);
        }
        for (; chunkSize; --chunkSize) {
            sum2 += *buf_1++;
            sum1 += sum2;
        }
        sum2 %= 0xFFF1u;
    }
    return sum2 | (sum1 << 16);
}
