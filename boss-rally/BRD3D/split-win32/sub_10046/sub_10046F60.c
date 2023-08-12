#include "types-win32.h"
//----- (10046F60) --------------------------------------------------------
int __cdecl sub_10046F60(unk1E214 *a1) {
  a1->field_2AE8->lpVtbl->meth7(a1->field_2AE8);
  if (gUnkC8Ptr1)
    gUnkC8Ptr1->lpVtbl->meth0(gUnkC8Ptr1, 1);
  gUnkC8Ptr1 = 0;
  gUnkC8Ptr33 = 0;
  if (gUnkC8Ptr18) {
    gUnkC8Ptr18->lpVtbl->meth0(gUnkC8Ptr18, 1);
    gUnkC8Ptr18 = 0;
  }
  gUnkC8Ptr1 = gUnkC8Ptr6;
  return 0;
}
