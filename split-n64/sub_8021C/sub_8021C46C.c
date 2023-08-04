#include "../../types-n64.h"
//----- (8021C46C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *sub_8021C46C()
{
  int *result; // $v0

  dword_8028ADFC = 0;
  dword_8028ADF8 = 0;
  dword_8028AE00 = 0;
  result = &dword_8028AAD4;
  dword_8028AAD4 = 0;
  dword_8028AAD0 = 0;
  dword_8028AADC = 0;
  flt_8028AAD8 = 0.0;
  return result;
}
// 8021C478: write access to const memory at 8028ADFC has been detected
// 8021C47C: write access to const memory at 8028ADF8 has been detected
// 8021C488: write access to const memory at 8028AE00 has been detected
// 8021C494: write access to const memory at 8028AAD0 has been detected
// 8021C4A4: write access to const memory at 8028AADC has been detected
// 8021C4B0: write access to const memory at 8028AAD8 has been detected
// 8021C490: write access to const memory at 8028AAD4 has been detected
// 8028AAD0: using guessed type int dword_8028AAD0;
// 8028AAD4: using guessed type int dword_8028AAD4;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028AADC: using guessed type int dword_8028AADC;
// 8028ADF8: using guessed type int dword_8028ADF8;
// 8028ADFC: using guessed type int dword_8028ADFC;
// 8028AE00: using guessed type int dword_8028AE00;
