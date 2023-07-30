//----- (10002F90) --------------------------------------------------------
DWORD __stdcall CHK_GetFileSize(CHK_File *hFile, LPDWORD lpFileSizeHigh)
{
  int pos; // edi
  int size; // ebx

  pos = ftell(hFile->pfil);
  fseek(hFile->pfil, 0, SEEK_END);
  size = ftell(hFile->pfil);
  fseek(hFile->pfil, pos, SEEK_SET);
  return size;
}
