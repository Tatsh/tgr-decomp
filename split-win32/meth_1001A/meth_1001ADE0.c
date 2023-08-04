#include "../../types-win32.h"
//----- (1001ADE0) --------------------------------------------------------
int __thiscall meth_1001ADE0(unk0 *this, GUID *a2, char *Source, char *a4, #469 *a5, #469 *a6)
{
  char *v8; // ebp
  size_t v9; // kr04_4
  size_t v10; // esi
  char *v11; // eax
  char *v12; // ebp
  size_t v13; // kr08_4
  size_t v14; // esi
  char *v15; // eax
  void *v16; // edx

  if ( !a2 )
    return -2147024809;
  *(GUID *)&this->field_30 = *a2;
  v8 = Source;
  if ( !Source )
    v8 = aUnknown_0;
  v9 = strlen(v8) + 1;
  v10 = v9 - 1;
  v11 = (char *)malloc(v9);
  this->unkMeth1 = (int)v11;
  if ( v11 )
  {
    strncpy(v11, v8, v10);
    *(_BYTE *)(v10 + this->unkMeth1) = 0;
  }
  v12 = a4;
  if ( !a4 )
    v12 = aUnknown_0;
  v13 = strlen(v12) + 1;
  v14 = v13 - 1;
  v15 = (char *)malloc(v13);
  this->field_19 = (int)v15;
  if ( v15 )
  {
    strncpy(v15, v12, v14);
    *(_BYTE *)(v14 + this->field_19) = 0;
  }
  if ( a5 )
    qmemcpy(&this->field_1C, a5, 0xFCu);
  if ( a6 )
    qmemcpy(&this[2], a6, 0xFCu);
  v16 = (void *)((int)this->field_27 & 0xFFFFFFFD | 1);
  this[3].field_3 = 0;
  this->field_27 = v16;
  return 0;
}
