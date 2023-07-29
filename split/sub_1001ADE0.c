//----- (1001ADE0) --------------------------------------------------------
int __thiscall sub_1001ADE0(#478 *this, GUID *a2, char *Source, char *a4, D3DDEVICEDESC *a5, D3DDEVICEDESC *a6)
{
  char *v8; // ebp
  size_t v9; // kr04_4
  size_t v10; // esi
  char *v11; // eax
  char *v12; // ebp
  size_t v13; // kr08_4
  size_t v14; // esi
  char *v15; // eax
  unsigned int v16; // edx

  if ( !a2 )
    return -2147024809;
  *(GUID *)((char *)this + 4) = *a2;
  v8 = Source;
  if ( !Source )
    v8 = aUnknown_0;
  v9 = strlen(v8) + 1;
  v10 = v9 - 1;
  v11 = (char *)malloc(v9);
  *((_DWORD *)this + 5) = v11;
  if ( v11 )
  {
    strncpy(v11, v8, v10);
    *(_BYTE *)(v10 + *((_DWORD *)this + 5)) = 0;
  }
  v12 = a4;
  if ( !a4 )
    v12 = aUnknown_0;
  v13 = strlen(v12) + 1;
  v14 = v13 - 1;
  v15 = (char *)malloc(v13);
  *((_DWORD *)this + 6) = v15;
  if ( v15 )
  {
    strncpy(v15, v12, v14);
    *(_BYTE *)(v14 + *((_DWORD *)this + 6)) = 0;
  }
  if ( a5 )
    qmemcpy((char *)this + 28, a5, 0xFCu);
  if ( a6 )
    qmemcpy((char *)this + 280, a6, 0xFCu);
  v16 = *(_DWORD *)this & 0xFFFFFFFD | 1;
  *((_DWORD *)this + 133) = 0;
  *(_DWORD *)this = v16;
  return 0;
}
