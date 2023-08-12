#include "types-win32.h"
//----- (10037B10) --------------------------------------------------------
int __cdecl LoadTrack(int trackIndex) {
    CHK_File *cFile;     // esi
    signed int filesize; // edi
    int trackInstances;  // eax
    int v4;              // edi
    int v5;              // esi
    long double v6;      // st7
    long double v7;      // st7
    int v8;              // ecx
    void *_;             // [esp+0h] [ebp-418h]
    int v11;             // [esp+14h] [ebp-404h] BYREF
    char *trackFilepath; // [esp+18h] [ebp-400h] BYREF
    int v13;             // [esp+1Ch] [ebp-3FCh]

    ParseHNDFileFromIndex(trackIndex);
    dword_10A9977C = -2147329024 - (_DWORD)&gUnk06594.gap4A2C[4300];
    track_1002B9A0(-2147329024, (int)&gUnk06594.gap4A2C[4300]);
    sub_1002B9D0(1);
    strcpy((char *)&trackFilepath, kTracksSlash);
    strcat((char *)&trackFilepath, gTrackFilenames[trackIndex]);
    cFile = CHK_FReadOpen((const char *)&trackFilepath);
    filesize = CHK_GetFileSize(cFile, _);
    ParseTrackHeader((unk00230 *)&gUnk06594.gap1C8[18176], cFile);
    if (filesize > 0x3D0900) // ~3.81 MiB
    {
        printf("Track %d is too big (%d vs. %d)\n", trackIndex, filesize, 0x3D0900);
        exit(1);
    }
    CHK_FReadReportError(&gUnk06594.gap4A2C[4860], 1u, filesize - 560, cFile);
    CHK_FClose(cFile);
    track_10038B20((unk00230 *)&gUnk06594.gap1C8[18176]);
    ReadFilenameToBuffer(&lutBuffer, *(&gTrackDataDesert.skytexLut4Name + 95 * trackIndex), 32);
    ReadFilenameToBuffer(
        &lutBuffer_0,
        (char *)(*((_DWORD *)&gTrackDataDesert.skytexLut4Name + 95 * trackIndex) + 32),
        -1);
    ReadFilenameToBuffer(&ciBuffer, *(&gTrackDataDesert.skytexnLut4Name + 95 * trackIndex), 32);
    ReadFilenameToBuffer(
        &ciBuffer_0,
        (char *)(*((_DWORD *)&gTrackDataDesert.skytexnLut4Name + 95 * trackIndex) + 32),
        -1);
    graphics_10073AC0();
    graphics_10073B00();
    *(_DWORD *)&gUnk06594.gap1C8[8612] =
        &gUnk06594.gap4A2C[-*(_DWORD *)&gUnk06594.gap1C8[18180] + 4300];
    dword_10690BEC = (int)&gUnk06594.gap4A2C[*(_DWORD *)&gUnk06594.gap1C8[18176] + 4300];
    sub_10037E10(&gUnk06594.gap1C8[18176]);
    trackInstances = *(_DWORD *)&gUnk06594.gap4918[20];
    v4 = 0;
    dword_100AA89C = -1;
    dword_100AA8A0 = -1;
    if (*(int *)&gUnk06594.gap4918[20] > 0) {
        v5 = 0;
        do {
            v11 = 1065353216;
            trackFilepath = 0;
            v13 = 0;
            sub_1003B3F0(
                (float *)&v11, (float *)&v11, (float *)(v5 + *(_DWORD *)&gUnk06594.gap4918[16]));
            v6 = sub_1003B170((float *)&v11);
            if (v6 != 0.0) {
                v7 = 1.0 / v6;
                v8 = *(_DWORD *)&gUnk06594.gap4918[16];
                if (v7 * *(float *)(*(_DWORD *)&gUnk06594.gap4918[16] + v5) == 1.0 &&
                    *(float *)(*(_DWORD *)&gUnk06594.gap4918[16] + v5 + 20) * v7 == 1.0 &&
                    *(float *)(*(_DWORD *)&gUnk06594.gap4918[16] + v5 + 40) * v7 == 1.0) {
                    *(_BYTE *)(*(_DWORD *)&gUnk06594.gap4918[16] + v5 + 77) |= 0x20u;
                    v8 = *(_DWORD *)&gUnk06594.gap4918[16];
                }
                *(float *)(v8 + v5 + 64) = v7;
            }
            trackInstances = *(_DWORD *)&gUnk06594.gap4918[20];
            ++v4;
            v5 += 84;
        } while (v4 < *(int *)&gUnk06594.gap4918[20]);
    }
    if (trackInstances > 2048) {
        printf("ERROR: instances (%d) > MAX_INSTANCES (%d)\n", trackInstances, 2048);
        exit(1);
    }
    if (*(_DWORD *)&gUnk06594.gap1C8[18180] != 560) {
        printf("Error: Track header size mismatch(%d != %d)\n",
               *(_DWORD *)&gUnk06594.gap1C8[18180],
               560);
        exit(1);
    }
    track_10061700();
    return sub_10070580(trackIndex);
}
// 10037BBA: variable '_' is possibly undefined
// 100AA89C: using guessed type int dword_100AA89C;
// 100AA8A0: using guessed type int dword_100AA8A0;
// 100B80B8: using guessed type char *gTrackFilenames[15];
// 10690BEC: using guessed type int dword_10690BEC;
// 10A9977C: using guessed type int dword_10A9977C;
