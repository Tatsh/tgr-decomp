//----- (10041B50) --------------------------------------------------------
void sub_10041B50()
{
  struct_dword_10ACED34 *v0; // edx

  v0 = dword_10ACED34;
  if ( dword_10ACED34 )
  {
    strcpy(aCRallyseasonDatFilepath_ptr, aAutosaveBrf);
    if ( !v0->gap0[4] && !v0->gap0[5] )
    {
      memset(&v0->gap0[6], 0, 0x18u);
      memset(&dword_10ACED34->gap0[30], 0, 0x30u);
      memset(&dword_10ACED34->gap0[80], 0, 0x60u);
    }
    sub_100709A0();
  }
}
