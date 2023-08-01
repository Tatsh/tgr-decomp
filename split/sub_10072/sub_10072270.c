//----- (10072270) --------------------------------------------------------
int sub_10072270()
{
  int result; // eax

  result = dword_11828D18;
  if ( dword_11828D18 )
  {
    SetEvent(dword_11826B00);
    WaitForSingleObject(dword_11828D1C, 0xFFFFFFFF);
    CloseHandle(dword_11828D1C);
    dword_11828D1C = 0;
    result = CloseHandle(dword_11826B00);
    dword_11826B00 = 0;
    dword_11828D18 = 0;
  }
  return result;
}
// 11828D18: using guessed type int dword_11828D18;
