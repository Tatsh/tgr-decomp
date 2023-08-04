#include "../../types-win32.h"
//----- (10002F90) --------------------------------------------------------
DWORD __stdcall CHK_GetFileSize(CHK_File *cFile, void *_unused)
{
  int originalPos; // edi
  int size; // ebx

  originalPos = ftell(cFile->pfil);
  fseek(cFile->pfil, 0, SEEK_END);
  size = ftell(cFile->pfil);
  fseek(cFile->pfil, originalPos, SEEK_SET);
  return size;
}
