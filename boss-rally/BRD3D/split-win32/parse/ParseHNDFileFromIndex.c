#include "types-win32.h"
//----- (10037A90) --------------------------------------------------------
int __cdecl ParseHNDFileFromIndex(int trackIndex) {
    char trackHndFilepath[1024]; // [esp+8h] [ebp-400h] BYREF

    sprintf(trackHndFilepath, "%s%s", kTracksSlash, gTrackFilenames[trackIndex]);
    strcpy(strrchr(trackHndFilepath, 46), kHND);
    return ParseHNDFile(trackHndFilepath);
}
// 100B80B8: using guessed type char *gTrackFilenames[15];
