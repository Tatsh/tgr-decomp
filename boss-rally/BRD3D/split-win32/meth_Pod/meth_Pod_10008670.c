#include "types-win32.h"
//----- (10008670) --------------------------------------------------------
int __thiscall meth_Pod_10008670(Pod *this, int a2) {
  char *v3;        // ecx
  unsigned int v4; // esi
  int result;      // eax
  _DWORD *i;       // ecx
  int v7[16];      // [esp+10h] [ebp-40h] BYREF

  this->lpVtbl->meth1(this, a2, v7);
  v3 = (char *)this->unkInstance;
  v4 = this->header.m_cNumPods;
  result = 0;
  if (!v4)
      return -1;
  for (i = v3 + 16; *(i - 1) != v7[0] || *i != v7[1] || i[1] != v7[2] || i[2] != v7[3] ||
                    i[3] != v7[4] || i[4] != v7[5] || i[5] != v7[6] || i[6] != v7[7] ||
                    i[7] != v7[8] || i[8] != v7[9] || i[9] != v7[10] || i[10] != v7[11] ||
                    i[11] != v7[12] || i[12] != v7[13] || i[13] != v7[14] || i[14] != v7[15];
       i += 19) {
      if (++result >= v4)
          return -1;
  }
  return result;
}
