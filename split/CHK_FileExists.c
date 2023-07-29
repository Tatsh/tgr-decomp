//----- (10003320) --------------------------------------------------------
intptr_t __cdecl CHK_FileExists(char *FileName)
{
  intptr_t result; // eax
  CHAR OutputString[1024]; // [esp+4h] [ebp-400h] BYREF

  if ( debugOutput )
  {
    sprintf(OutputString, "CHK_FileExists(%s)\n", FileName);
    OutputDebugStringA(OutputString);
  }
  result = (intptr_t)fopen(FileName, readBinaryMode);
  if ( result )
  {
    fclose((FILE *)result);
    result = 1;
  }
  return result;
}
// 10220CE0: using guessed type int debugOutput;
