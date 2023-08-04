#include "../../types-win32.h"
//----- (10037A90) --------------------------------------------------------
int __cdecl ParseHNDFileFromIndex(int trackIndex)
{
  char trackHndFilepath[1024]; // [esp+8h] [ebp-400h] BYREF

  sprintf(trackHndFilepath, "%s%s", aTracks, off_100B80B8[trackIndex]);
  strcpy(strrchr(trackHndFilepath, 46), aHnd);
  return ParseHNDFile(trackHndFilepath);
}
// 100B80B8: using guessed type char *off_100B80B8[15];
