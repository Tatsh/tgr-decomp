//----- (10003290) --------------------------------------------------------
void __cdecl CHK_FClose(CHK_File *Block)
{
  CHAR OutputString[1024]; // [esp+8h] [ebp-400h] BYREF

  if ( debugOutput )
  {
    sprintf(OutputString, "CHK_FClose(%s)\n", Block->szName);
    OutputDebugStringA(OutputString);
  }
  if ( fclose(Block->pfil) == -1 )
  {
    sprintf(OutputString, "CHK_FClose(): error closing file %s.\n", Block->szName);
    OutputDebugStringA(OutputString);
    exit(1);
  }
  free((void *)Block->szName);
  free(Block);
}
// 10220CE0: using guessed type int debugOutput;
