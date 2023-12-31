#include "types-win32.h"
//----- (10009AD0) --------------------------------------------------------
unsigned __int8 *__cdecl sub_10009AD0(char *filename,
                                      int expectedChecksum,
                                      char **outFilename,
                                      int *outBuff) {
    CHK_File *fp;       // ebx
    size_t elementSize; // esi
    int cksum;          // eax
    int flag_;          // edi
    int seed;           // eax
    int *v9;            // edx
    int buf;            // [esp+Ch] [ebp-4h] BYREF

    fp = CHK_FReadOpen(filename);
    CHK_FReadReportError(&filename, 4u, 1u, fp);
    CHK_FReadReportError(&buf, 4u, 1u, fp);
    elementSize = 2 * (_DWORD)filename * buf;
    CHK_FReadReportError(::buf, 4u, 1u, fp);
    memset(::buf, 0, 0x20000u);
    CHK_FReadReportError(::buf, elementSize, 1u, fp);
    CHK_FClose(fp);
    flag_ = expectedChecksum;
    if (expectedChecksum) {
        seed = CalculateChecksum(0, 0, 0);
        cksum = CalculateChecksum(seed, ::buf, elementSize);
        if (cksum != flag_)
            exit(1);
    }
    sub_10009A50(cksum, out_a2, ::buf, 0x10000);
    graphics_100098A0(out_a2, out_a2, 0x40000, 11);
    v9 = outBuff;
    *outFilename = filename;
    *v9 = buf;
    return out_a2;
}
// 10009B8E: variable 'cksum' is possibly undefined
