//----- (10042020) --------------------------------------------------------
int __cdecl sub_10042020(int a1, int *a2)
{
  int v2; // edx
  int v3; // ebx
  FILE *v5; // eax
  char Buffer[4]; // [esp+4h] [ebp-108h] BYREF
  char FileName[260]; // [esp+8h] [ebp-104h] BYREF

  v2 = *a2;
  v3 = 0;
  if ( *a2 < 0 )
    return 0;
  dword_10AA29CC = a1;
  Value = v2;
  if ( a1 + 1080 * v2 != -53 )
  {
    strcpy(FileName, aRallyseason);
    _itoa(v2, Buffer, 10);
    strcat(FileName, Buffer);
    strcat(FileName, aBrf);
  }
  v5 = fopen(FileName, aR);
  if ( v5 )
    fclose(v5);
  else
    v3 = 1;
  unknown_libname_9();
  if ( v3 )
    sub_10041A00(dword_10AA29C0);
  else
    *(_DWORD *)(*(_DWORD *)(dword_10AA29C0 + 10984) + 112) = 1;
  return 1;
}
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29CC: using guessed type int dword_10AA29CC;
