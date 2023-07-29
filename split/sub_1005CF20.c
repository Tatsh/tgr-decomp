//----- (1005CF20) --------------------------------------------------------
int __thiscall sub_1005CF20(void *this, LPCSTR lpFileName)
{
  void *v3; // esi
  FILE *v5; // edi
  int v6; // eax
  int i; // ebx
  FILE *v8; // esi
  int v9; // eax
  void *v10; // [esp+10h] [ebp-224h]
  void (__thiscall *v11)(void *, char *, char *); // [esp+14h] [ebp-220h]
  char Buffer[260]; // [esp+18h] [ebp-21Ch] BYREF
  int v13[5]; // [esp+11Ch] [ebp-118h] BYREF
  char FileName[260]; // [esp+130h] [ebp-104h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  v3 = (void *)_findfirst(lpFileName, (int)v13);
  v10 = v3;
  if ( v3 == (void *)-1 )
    return 0;
  v5 = fopen(FileName, aR);
  fseek(v5, 0, 2);
  v6 = ftell(v5);
  fseek(v5, v6 - 128, 0);
  freadLock(Buffer, 1u, 0x80u, v5);
  fclose(v5);
  v11 = *(void (__thiscall **)(void *, char *, char *))(*(_DWORD *)this + 24);
  v11(this, FileName, Buffer);
  for ( i = 1; i < 100; ++i )
  {
    memset(Buffer, 0, sizeof(Buffer));
    if ( _findnext(v3, (int)v13) )
      break;
    v8 = fopen(FileName, aR);
    fseek(v8, 0, 2);
    v9 = ftell(v8);
    fseek(v8, v9 - 128, 0);
    freadLock(Buffer, 1u, 0x80u, v8);
    v11(this, FileName, Buffer);
    fclose(v8);
    v3 = v10;
  }
  _findclose((intptr_t)v3);
  return 1;
}
