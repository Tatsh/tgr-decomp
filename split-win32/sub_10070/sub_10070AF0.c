#include "../../types-win32.h"
//----- (10070AF0) --------------------------------------------------------
bool __cdecl sub_10070AF0(char *FileName, int a2)
{
  FILE *v2; // eax
  FILE *v3; // ebx
  int v4; // eax
  size_t v5; // eax
  void *v6; // eax
  char *v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned __int8 *v11; // eax
  unsigned int v12; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  char *v17; // [esp-8h] [ebp-1Ch]
  FILE *v18; // [esp-4h] [ebp-18h]
  char *v19; // [esp-4h] [ebp-18h]
  char *Buffer; // [esp+Ch] [ebp-8h] BYREF
  int v21; // [esp+10h] [ebp-4h] BYREF

  v2 = fopen(FileName, kFileModeReadBinary);
  v3 = v2;
  if ( !v2 )
    goto LABEL_20;
  if ( freadLock(Str1, 1u, 4u, v2) != 4 )
    goto LABEL_18;
  v4 = strncmp(Str1, aRgho, 4u);
  v18 = v3;
  if ( v4 )
    goto LABEL_19;
  if ( freadLock(&Buffer, 4u, 1u, v3) != 1 )
    goto LABEL_18;
  if ( (unsigned int)Buffer < 0xC )
  {
    v18 = v3;
    if ( !Buffer )
    {
      if ( freadLock(&FileName, 1u, 4u, v3) == 4 )
        goto LABEL_9;
LABEL_18:
      v18 = v3;
    }
LABEL_19:
    fclose(v18);
LABEL_20:
    dword_10AA28C8 = 0;
    dword_10680738 = -1;
    dword_10AA28CC = 0;
    dword_1068073C = -1;
    dword_10680740 = -1;
    dword_10680744 = -1;
    return (_BYTE)a2 != 0;
  }
  FileName = Buffer;
LABEL_9:
  FileName -= 4;
  if ( freadLock(&v21, 1u, 4u, v3) != 4 )
    goto LABEL_18;
  if ( (unsigned int)Buffer < 0xC )
  {
    FileName -= 4;
    if ( freadLock(&dword_10AA28CC, 1u, 4u, v3) != 4 )
      goto LABEL_18;
    FileName -= 4;
    if ( freadLock(&dword_10AA28C8, 1u, 4u, v3) != 4 )
      goto LABEL_18;
  }
  FileName -= 16;
  v5 = freadLock(&dword_10680738, 1u, 0x10u, v3);
  v18 = v3;
  if ( v5 != 16 )
    goto LABEL_19;
  v17 = FileName;
  v6 = sub_1006ADF0();
  v7 = (char *)freadLock(v6, 1u, (size_t)v17, v3);
  if ( v7 != FileName )
    goto LABEL_18;
  v8 = CalculateChecksum(0, 0, 0);
  if ( (unsigned int)Buffer < 0xC )
  {
    v9 = CalculateChecksum(v8, (unsigned __int8 *)&dword_10AA28CC, 4u);
    v8 = CalculateChecksum(v9, (unsigned __int8 *)&dword_10AA28C8, 4u);
  }
  v10 = CalculateChecksum(v8, (unsigned __int8 *)&dword_10680738, 0x10u);
  v19 = FileName;
  v11 = (unsigned __int8 *)sub_1006ADF0();
  v12 = CalculateChecksum(v10, v11, (unsigned int)v19);
  if ( v21 != v12 )
    goto LABEL_18;
  ElementCount = 16;
  v14 = sub_1006AE00((unsigned int)FileName);
  if ( (unsigned int)Buffer >= 0xC )
  {
    dword_10AA28CC = 0;
    a2 = v14 - 204;
    *(float *)&dword_10AA28C8 = (double)(int)(v14 - 204) * 0.033333335;
  }
  *((_WORD *)dword_10ACED34 + 121) |= 1 << dword_10680738;
  *((_WORD *)dword_10ACED34 + 120) |= 1 << SBYTE1(dword_10680738);
  fseek(v3, 0, 2);
  v15 = ftell(v3);
  fseek(v3, v15 - 152, 0);
  freadLock(&dword_10AD0978, 4u, 1u, v3);
  freadLock(&dword_10AD097C, 4u, 1u, v3);
  freadLock(&dword_10AD0980, 4u, 1u, v3);
  freadLock(&dword_10AD0984, 4u, 1u, v3);
  freadLock(&dword_10AD0988, 4u, 1u, v3);
  freadLock(&dword_10AD098C, 4u, 1u, v3);
  fseek(v3, 0, 2);
  v16 = ftell(v3);
  fseek(v3, v16 - 128, 0);
  freadLock(byte_10AD0990, 1u, 0x80u, v3);
  qmemcpy(&unk_10AD34F8, byte_10AD0990, 0x80u);
  fclose(v3);
  return 1;
}
// 10680738: using guessed type int dword_10680738;
// 1068073C: using guessed type int dword_1068073C;
// 10680740: using guessed type int dword_10680740;
// 10680744: using guessed type int dword_10680744;
// 10AA28C8: using guessed type int dword_10AA28C8;
// 10AA28CC: using guessed type int dword_10AA28CC;
// 10AD0978: using guessed type int dword_10AD0978;
// 10AD097C: using guessed type int dword_10AD097C;
// 10AD0980: using guessed type int dword_10AD0980;
// 10AD0984: using guessed type int dword_10AD0984;
// 10AD0988: using guessed type int dword_10AD0988;
// 10AD098C: using guessed type int dword_10AD098C;
