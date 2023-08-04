#include "../../types-win32.h"
//----- (1005CB90) --------------------------------------------------------
CHAR *__thiscall sub_1005CB90(CHAR *this)
{
  CHAR *v2; // edx
  int v3; // ebx
  CHAR *v4; // edi
  unsigned int v5; // kr08_4
  CHAR *v6; // esi
  CHAR *v7; // edi

  v2 = this + 4;
  *(_DWORD *)this = &off_1008F788;
  memset(this + 4, 0, 0x6590u);
  v3 = 100;
  do
  {
    v5 = strlen(String2) + 1;
    v4 = &String2[v5++];
    v6 = &v4[1 - v5];
    v7 = v2;
    v2 += 260;
    qmemcpy(v7, v6, v5 - 1);
    --v3;
  }
  while ( v3 );
  return this;
}
// 1008F788: using guessed type int (__thiscall *off_1008F788)(void *Block, char);
