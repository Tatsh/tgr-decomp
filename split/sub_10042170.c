//----- (10042170) --------------------------------------------------------
int __cdecl sub_10042170(int a1, int *a2)
{
  FILE *v2; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int *v7; // edi
  int *v8; // eax
  unsigned __int16 v9; // bp
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  char Buffer[4]; // [esp+10h] [ebp-10Ch] BYREF
  int v15; // [esp+14h] [ebp-108h]
  char FileName[260]; // [esp+18h] [ebp-104h] BYREF

  dword_10AA28E0 = 0;
  g_GameMode = 0;
  sub_1003E680();
  dword_10690A18 = 0;
  strcpy(byte_10AA2518, String2);
  strcpy(byte_10A9D618, String2);
  strcpy(FileName, aRallyseason);
  _itoa(*a2, Buffer, 10);
  strcat(FileName, Buffer);
  strcat(FileName, aBrf);
  v2 = fopen(FileName, aR);
  if ( !v2 )
    return 0;
  fclose(v2);
  strcpy(aCRallyseasonDatFilepath_ptr, FileName);
  if ( !sub_10071130(4, (FILE *)1) )
    sub_1003E260(7);
  qmemcpy(&dword_10AA26F0, dword_10ACED34, 0x14Cu);
  dword_10AA28E0 = 1;
  v15 = *(_DWORD *)dword_10ACED34->gap0;
  dword_10AA28A0 = v15;
  v4 = (unsigned __int8)dword_10ACED34->gap0[5];
  dword_10AA28AC = v4;
  dword_10AA28A4 = v4;
  LOBYTE(dword_10AA28B8) = dword_10ACED34->gap0[4];
  dword_10AA2A08 = dword_10AD0978;
  dword_100AC64C = dword_10AD097C;
  dword_100AC650 = dword_10AD0980;
  dword_100AC654 = dword_10AD0984;
  dword_100AC65C = dword_10AD0988;
  dword_10AA289C = 1;
  sub_1003E310();
  sub_1003E510();
  v5 = 0;
  v6 = 4;
  v7 = (int *)&word_10AA270E[4 * (char)dword_10AA28B8];
  v8 = v7;
  do
  {
    v9 = *(_WORD *)v8;
    v8 = (int *)((char *)v8 + 2);
    v5 += v9;
    --v6;
  }
  while ( v6 );
  v10 = *(int *)((char *)&dword_10AA26F4[(char)dword_10AA28B8] + 2);
  dword_10AA28C4 = v5;
  v11 = dword_10AA28A4;
  v12 = 0;
  for ( dword_10AA26E8 = v10; v12 < v11; ++v12 )
    ++*((_BYTE *)&dword_10AA26E8 + v12);
  v13 = v7[1];
  dword_10A9D068 = *v7;
  dword_10A9D06C = v13;
  sprintf(byte_10AA2518, "%d", v15 + 1);
  sprintf(byte_10A9D618, "%d", v4 + 1);
  return 1;
}
// 100AA010: using guessed type int g_GameMode;
// 100AC64C: using guessed type int dword_100AC64C;
// 100AC650: using guessed type int dword_100AC650;
// 100AC654: using guessed type int dword_100AC654;
// 100AC65C: using guessed type int dword_100AC65C;
// 10690A18: using guessed type int dword_10690A18;
// 10A9D068: using guessed type int dword_10A9D068;
// 10A9D06C: using guessed type int dword_10A9D06C;
// 10AA26E8: using guessed type int dword_10AA26E8;
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA270E: using guessed type __int16 word_10AA270E[];
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28A0: using guessed type int dword_10AA28A0;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA28E0: using guessed type int dword_10AA28E0;
// 10AA2A08: using guessed type int dword_10AA2A08;
// 10AD0978: using guessed type int dword_10AD0978;
// 10AD097C: using guessed type int dword_10AD097C;
// 10AD0980: using guessed type int dword_10AD0980;
// 10AD0984: using guessed type int dword_10AD0984;
// 10AD0988: using guessed type int dword_10AD0988;
