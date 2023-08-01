//----- (10042E80) --------------------------------------------------------
int sub_10042E80()
{
  int result; // eax

  if ( dword_10AA33D4 )
  {
    if ( ++dword_10AA2A08 > 1 )
      dword_10AA2A08 = 0;
  }
  else if ( dword_10AA33D0 )
  {
    if ( --dword_10AA2A08 < 0 )
      dword_10AA2A08 = 1;
  }
  result = 1;
  g_TransmissionType = dword_100AC518[dword_10AA2A08];
  return result;
}
// 10042E80: using guessed type int sub_10042E80();
// 10094354: using guessed type int g_TransmissionType;
// 100AC518: using guessed type int dword_100AC518[];
// 10AA2A08: using guessed type int dword_10AA2A08;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
