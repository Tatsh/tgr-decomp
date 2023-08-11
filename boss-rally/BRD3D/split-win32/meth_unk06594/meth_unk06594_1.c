#include "types-win32.h"
//----- (1005CF20) --------------------------------------------------------
int __thiscall meth_unk06594_1(unk06594 *this, char *lpFileName) {
  int v3;                                             // esi
  FILE *fp;                                           // edi
  int v6;                                             // eax
  int i;                                              // ebx
  FILE *v8;                                           // esi
  int v9;                                             // eax
  int v10;                                            // [esp+10h] [ebp-224h]
  void(__thiscall * v11)(unk06594 *, char *, char *); // [esp+14h] [ebp-220h]
  char Buffer[260];                                   // [esp+18h] [ebp-21Ch] BYREF
  int v13[5];                                         // [esp+11Ch] [ebp-118h] BYREF
  char FileName[260];                                 // [esp+130h] [ebp-104h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  v3 = _findfirst(lpFileName, (int)v13);
  v10 = v3;
  if (v3 == -1)
    return 0;
  fp = fopen(FileName, Mode);
  fseek(fp, 0, 2);
  v6 = ftell(fp);
  fseek(fp, v6 - 128, 0);
  freadLock(Buffer, 1u, 0x80u, fp);
  fclose(fp);
  v11 = this->lpVtbl->meth6;
  v11(this, FileName, Buffer);
  for (i = 1; i < 100; ++i) {
    memset(Buffer, 0, sizeof(Buffer));
    if (_findnext((HANDLE)v3, (int)v13))
        break;
    v8 = fopen(FileName, Mode);
    fseek(v8, 0, 2);
    v9 = ftell(v8);
    fseek(v8, v9 - 128, 0);
    freadLock(Buffer, 1u, 0x80u, v8);
    v11(this, FileName, Buffer);
    fclose(v8);
    v3 = v10;
  }
  _findclose(v3);
  return 1;
}
