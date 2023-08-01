//----- (10071680) --------------------------------------------------------
void __stdcall __noreturn sub_10071680(LPVOID lpThreadParameter)
{
  DWORD v1; // eax

  while ( 1 )
  {
    v1 = sub_100713A0();
    dword_11828D10 = v1;
    if ( v1 < dword_11826B48 )
    {
      Sleep(dword_11826B48 - v1);
    }
    else
    {
      sub_100716E0();
      sub_10071870();
      sub_10071B80();
      sub_10071C10();
      sub_10072170(&unk);
      dword_11826B48 += 1000;
    }
  }
}
// 11826B48: using guessed type int dword_11826B48;
// 11828D10: using guessed type int dword_11828D10;
