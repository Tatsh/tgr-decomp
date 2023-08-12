#include "types-win32.h"
//----- (1005CE30) --------------------------------------------------------
int __thiscall meth_unk06594_6(unk06594 *this, const char *a2) {
  int v2;          // edx
  unk06594 *v3;    // ecx
  char String[32]; // [esp+8h] [ebp-20h] BYREF
  const char *v6;  // [esp+30h] [ebp+8h]

  if (dword_10AA2848) {
    strcpy(String, &a2[strlen(aRallyseason)]);
    v2 = 65 * atoi(String);
    v3 = gUnkC8Ptr6->field_C0;
  } else {
    strcpy(String, &a2[strlen(aTimeattack)]);
    v2 = 65 * atoi(String);
    v3 = gUnkC8Ptr6->last;
  }
  strcpy((char *)&v3->field_4 + 4 * v2, v6);
  return 1;
}
// 10AA2848: using guessed type int dword_10AA2848;
