#include "types-win32.h"
//----- (100489A0) --------------------------------------------------------
int __thiscall meth_unk000C8_3(unk000C8 *this) {
  unk000C8Vtbl *v2; // eax
  unk000C8 *v4;     // edi
  int v5;           // ebx
  bool v6;          // zf
  int *v7;          // edi
  unk00348 *v8;     // eax
  unk000C8Vtbl *v9; // edi

  if (!this->field_68) {
      sub_1003E310();
      meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
      v2 = this->lpVtbl;
      *(&this->field_10 + 1) = 0;
      v2->meth6(this, 0);
      return 0;
  }
  this->lpVtbl->meth1(this);
  v4 = gUnkC8Ptr1;
  gUnkC8Ptr1 = gUnkC8Ptr6;
  sub_10060260();
  gUnkC8Ptr1 = v4;
  sub_1005FFB0();
  v5 = 0;
  g_unkC8AreSamePtr = gUnkC8Ptr1 == gUnkC8Ptr6;
  v6 = this->field_10 == 0;
  *(&this->field_10 + 1) = 0;
  if (!v6) {
      v7 = &this->field_6C;
      do {
          v8 = (unk00348 *)*(v7 - 22);
          this->field_64 = v8;
          if (!v8)
              return 0;
          *(&this->field_10 + 1) = v5;
          if (*v7) {
              if (!this->field_64->lpVtbl->meth1(this->field_64))
                  return 0;
          }
          ++v5;
          ++v7;
      } while (v5 < this->field_10);
  }
  v9 = this->lpVtbl;
  this->lpVtbl->meth2(this);
  if (!this->field_68) {
      sub_1003E310();
      meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
      *(&this->field_10 + 1) = 0;
      v9->meth6(this, 0);
      return 0;
  }
  return 1;
}
// 10AA2868: using guessed type int g_unkC8AreSamePtr;
