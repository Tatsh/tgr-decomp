//----- (10002FE0) --------------------------------------------------------
CHK_File *__cdecl CHK_FReadOpen(const char *filename)
{
  CHK_File *filenameBufPtr; // ebx
  char *filenameBuf; // edx
  FILE *ret; // eax
  FILE *logHandle; // esi
  CHAR OutputString[1024]; // [esp+Ch] [ebp-400h] BYREF

  filenameBufPtr = (CHK_File *)CHK_AllocateMemory(8u, aChkFreadopenPf);
  filenameBuf = (char *)CHK_AllocateMemory(strlen(filename) + 1, aChkFreadopenSz);
  filenameBufPtr->szName = filenameBuf;
  strcpy(filenameBuf, filename);
  if ( debugOutput )
  {
    sprintf(OutputString, "CHK_FReadOpen(%s)\n", filenameBufPtr->szName);
    OutputDebugStringA(OutputString);
  }
  ret = fopen(filenameBufPtr->szName, readBinaryMode);
  filenameBufPtr->pfil = ret;
  if ( !ret )
  {
    logHandle = fopen(g_errorLogFile, writeableMode);
    sprintf(OutputString, "CHK_FReadOpen(): error opening file %s.\n", filenameBufPtr->szName);
    fprintf(logHandle, OutputString);
    OutputDebugStringA(OutputString);
    fclose(logHandle);
    exit(1);
  }
  return filenameBufPtr;
}
// 10220CE0: using guessed type int debugOutput;
