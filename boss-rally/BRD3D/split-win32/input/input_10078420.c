#include "types-win32.h"
//----- (10078420) --------------------------------------------------------
char __cdecl input_10078420(int a1) {
  char result;         // al
  unsigned __int8 *v2; // edx
  unsigned int v3;     // ecx

  result = 0;
  v2 = (unsigned __int8 *)gConfigJoystickPtr + 6 * a1;
  v3 = *(_WORD *)v2 & 0xFF00;
  if (v3 <= 0x100) {
    if (v3 == 256) {
      result = byte_118ABB10[272 * dword_118ABAB8 + *v2] & 0x80;
    } else if ((*(_WORD *)v2 & 0xFF00) == 0) {
      result = byte_118AB8B8[256 * dword_118ABAD8 + *v2] & 0x80;
    }
    goto LABEL_49;
  }
  if ((*(_WORD *)v2 & 0xFF00u) > 0x8000) {
    if ((*(_WORD *)v2 & 0xFF00u) > 0x8200) {
      if ((*(_WORD *)v2 & 0xFF00u) > 0x8400) {
        if ((*(_WORD *)v2 & 0xFF00u) > 0x8600) {
          if ((*(_WORD *)v2 & 0xFF00u) > 0x8800) {
              if (v3 == 35072) {
                  if (dword_118ABD3C[7 * dword_118ABD80] <= 50)
                      goto LABEL_49;
              } else if (v3 == 35328) {
                  if (dword_118ABD40[7 * dword_118ABD80] >= -50)
                      goto LABEL_49;
              } else if (v3 != 35584 || dword_118ABD40[7 * dword_118ABD80] <= 50) {
                  goto LABEL_49;
              }
          } else if (v3 == 34816) {
              if (dword_118ABD3C[7 * dword_118ABD80] >= -50)
                  goto LABEL_49;
          } else if (v3 != 34560 || dword_118ABD38[7 * dword_118ABD80] <= 50) {
              goto LABEL_49;
          }
        } else if (v3 == 34304) {
          if (dword_118ABD38[7 * dword_118ABD80] >= -50)
              goto LABEL_49;
        } else if (v3 != 34048 || dword_118ABAE8[68 * dword_118ABAB8] <= 50) {
          goto LABEL_49;
        }
      } else if (v3 == 33792) {
        if (dword_118ABAE8[68 * dword_118ABAB8] >= -50)
          goto LABEL_49;
      } else if (v3 != 33536 || dword_118ABAE4[68 * dword_118ABAB8] <= 50) {
        goto LABEL_49;
      }
    } else if (v3 == 33280) {
      if (dword_118ABAE4[68 * dword_118ABAB8] >= -50)
        goto LABEL_49;
    } else if (v3 != 33024 || dword_118ABAE0[68 * dword_118ABAB8] <= 50) {
      goto LABEL_49;
    }
  LABEL_48:
    result = 0x80;
    goto LABEL_49;
  }
  if (v3 == 0x8000) {
    if (dword_118ABAE0[68 * dword_118ABAB8] >= -50)
      goto LABEL_49;
    goto LABEL_48;
  }
  if (v3 == 768)
    result = byte_118ABD50[28 * dword_118ABD80 + *v2] & 0x80;
LABEL_49:
  if (!v2[3])
    result |= byte_118AB8B8[256 * dword_118ABAD8 + v2[2]] & 0x80;
  if (!v2[5])
    result |= byte_118AB8B8[256 * dword_118ABAD8 + v2[4]] & 0x80;
  return result;
}
// 118ABAB8: using guessed type int dword_118ABAB8;
// 118ABAD8: using guessed type int dword_118ABAD8;
// 118ABAE0: using guessed type int dword_118ABAE0[];
// 118ABAE4: using guessed type int dword_118ABAE4[];
// 118ABAE8: using guessed type int dword_118ABAE8[];
// 118ABD38: using guessed type int dword_118ABD38[];
// 118ABD3C: using guessed type int dword_118ABD3C[];
// 118ABD40: using guessed type int dword_118ABD40[];
// 118ABD80: using guessed type int dword_118ABD80;
