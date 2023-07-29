//----- (10001FF0) --------------------------------------------------------
int __thiscall sub_10001FF0(#482 *this)
{
  char *v2; // eax
  _DWORD *v3; // edi
  int result; // eax

  v2 = (char *)this + 10112;
  if ( g_GameMode != 5 )
    v2 = (char *)this + 10044;
  *((_DWORD *)this + 2509) = v2;
  *((_DWORD *)this + 2510) = v2;
  v3 = (_DWORD *)((char *)this + 10160);
  sub_1003AFE0((int)this + 10160, (int)this + 48, (int)this + 32, 4.0);
  if ( dword_106909E0 )
    sub_1003B020((int)this + 10160, (int)this, 10.0);
  sub_1003AF10((float *)this + 2540, (float *)this);
  *((_DWORD *)this + 2574) = *v3;
  *((_DWORD *)this + 2575) = *((_DWORD *)this + 2541);
  *((_DWORD *)this + 2576) = *((_DWORD *)this + 2542);
  *((_DWORD *)this + 2619) = *v3;
  *((_DWORD *)this + 2620) = *((_DWORD *)this + 2541);
  *((_DWORD *)this + 2621) = *((_DWORD *)this + 2542);
  *((_DWORD *)this + 2622) = 0;
  *((_DWORD *)this + 2624) = *v3;
  result = *((_DWORD *)this + 2541);
  *((_DWORD *)this + 2625) = result;
  *((_DWORD *)this + 2626) = *((_DWORD *)this + 2542);
  *((_DWORD *)this + 2615) = 0x40000000;
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 106909E0: using guessed type int dword_106909E0;
