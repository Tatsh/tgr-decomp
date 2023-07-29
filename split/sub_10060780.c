//----- (10060780) --------------------------------------------------------
__int16 __usercall sub_10060780@<ax>(int a1@<ebx>, char *a2, unsigned int a3, char a4)
{
  int v4; // eax

  LOBYTE(a1) = a4;
  BYTE1(a1) = a4;
  v4 = a1 << 16;
  LOWORD(v4) = a1;
  memset32(a2, v4, a3 >> 2);
  memset(&a2[4 * (a3 >> 2)], a4, a3 & 3);
  return v4;
}
