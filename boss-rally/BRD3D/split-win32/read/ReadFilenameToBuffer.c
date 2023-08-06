#include "../../types-win32.h"
//----- (100378B0) --------------------------------------------------------
void __cdecl ReadFilenameToBuffer(void *outBuffer, char *filename, int elementCount)
{
  int v3; // eax
  CHK_File *cFile; // esi
  intptr_t filesize; // eax
  void *v6; // [esp+0h] [ebp-204h]
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  LOBYTE(v3) = CHK_FileExists(filename);
  if ( !v3 )
  {
    sprintf(Buffer, "File %s missing", filename);
    sub_10008CF0((int)Buffer);
  }
  cFile = CHK_FReadOpen(filename);
  filesize = elementCount;
  if ( elementCount < 0 )
    filesize = CHK_GetFileSize(cFile, v6);
  CHK_FReadReportError((void *)elementCount, 1u, filesize, cFile);
  CHK_FClose(cFile);
}
// 100378C9: variable 'v3' is possibly undefined
// 10037902: variable 'v6' is possibly undefined
