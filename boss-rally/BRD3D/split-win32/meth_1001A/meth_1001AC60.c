#include "../types-win32.h"
//----- (1001AC60) --------------------------------------------------------
LPPALETTEENTRY __thiscall meth_1001AC60(unk334 *this) {
    if (this->field_27 != (void *)108)
        return 0;
    if ((this->field_30 & 0x1000) == 0)
        return 0;
  if ( this->? == (LPDIRECTDRAWPALETTE)32 )
      return this->? ;
  return 0;
}
