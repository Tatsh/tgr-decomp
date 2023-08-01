//----- (10002A80) --------------------------------------------------------
int __cdecl sub_10002A80(char a1)
{
  if ( !a1 || byte_10220CDC )
  {
    if ( !a1 && byte_10220CDC )
    {
      if ( dword_10220CD8 )
        pm_sub_10002AE0();
    }
  }
  else if ( dword_10220CD8 )
  {
    byte_10220CDC = a1;
    pm_sub_10002B40();
    byte_10220CDC = a1;
    return 1;
  }
  byte_10220CDC = a1;
  return 1;
}
// 10220CD8: using guessed type int dword_10220CD8;
// 10220CDC: using guessed type char byte_10220CDC;
