#include "../../types-n64.h"
//----- (8023A1C8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *sub_8023A1C8()
{
  float v1; // [sp+ACh] [-3Ch] BYREF
  float v2; // [sp+B0h] [-38h]
  float v3; // [sp+B4h] [-34h]

  sub_80239D84();
  dword_8028C804 = 512;
  sub_8022494C(&v1, (float *)0xC5B10E66, (float *)0xC5B10E36, 3.0);
  sub_80239CF0();
  flt_803634B8 = v1;
  flt_803634C4 = v1;
  flt_803634BC = v2;
  flt_803634C8 = v2;
  flt_803634C0 = v3;
  flt_803634CC = v3;
  dword_8028C824 = 1;
  return &flt_803634B8;
}
// 8023A268: write access to const memory at 8028C804 has been detected
// 8023A2E8: write access to const memory at 8028C824 has been detected
// 8023A374: write access to const memory at 8028C810 has been detected
// 8023A3CC: write access to const memory at 8028C814 has been detected
// 8023A3E0: write access to const memory at 8028C810 has been detected
// 8023A3F4: write access to const memory at 8028C814 has been detected
// 8023A2D0: write access to const memory at 803634B8 has been detected
// 8023A2D4: write access to const memory at 803634C4 has been detected
// 8023A2D8: write access to const memory at 803634BC has been detected
// 8023A2DC: write access to const memory at 803634C8 has been detected
// 8023A2E0: write access to const memory at 803634C0 has been detected
// 8023A2E4: write access to const memory at 803634CC has been detected
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028C804: using guessed type int dword_8028C804;
// 8028C808: using guessed type float flt_8028C808;
// 8028C80C: using guessed type float flt_8028C80C;
// 8028C824: using guessed type int dword_8028C824;
// 803634B8: using guessed type float flt_803634B8;
// 803634BC: using guessed type float flt_803634BC;
// 803634C0: using guessed type float flt_803634C0;
// 803634C4: using guessed type float flt_803634C4;
// 803634C8: using guessed type float flt_803634C8;
// 803634CC: using guessed type float flt_803634CC;
