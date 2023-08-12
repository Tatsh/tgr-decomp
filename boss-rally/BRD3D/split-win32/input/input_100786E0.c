#include "types-win32.h"
//----- (100786E0) --------------------------------------------------------
char __cdecl input_100786E0(int a1) {
  char result;         // al
  unsigned __int8 *v2; // esi
  unsigned int v3;     // ecx
  int v4;              // eax
  bool v5;             // zf
  int v6;              // ecx
  int v7;              // ecx
  int v8;              // ebp
  int v9;              // ecx
  int v10;             // ecx

  result = 0;
  v2 = (unsigned __int8 *)gConfigJoystickPtr + 6 * a1;
  v3 = *(_WORD *)v2 & 0xFF00;
  if (v3 <= 0x100) {
    if (v3 == 256) {
      v6 = *v2;
      if ((byte_118ABB10[272 * dword_118ABD7C + v6] & 0x80) == 0 &&
          (byte_118ABB10[272 * dword_118ABAB8 + v6] & 0x80) != 0) {
        result = 1;
        goto LABEL_68;
      }
    } else {
      if ((*(_WORD *)v2 & 0xFF00) != 0)
        goto LABEL_68;
      v4 = *v2;
      if ((byte_118AB8B8[256 * gDIEffectSpring.dwStartDelay + v4] & 0x80) == 0) {
        v5 = byte_118AB8B8[256 * dword_118ABAD8 + v4] >= 0;
        goto LABEL_14;
      }
    }
    goto LABEL_16;
  }
  if ((*(_WORD *)v2 & 0xFF00u) > 0x8000) {
    if ((*(_WORD *)v2 & 0xFF00u) > 0x8200) {
      if ((*(_WORD *)v2 & 0xFF00u) > 0x8400) {
        if ((*(_WORD *)v2 & 0xFF00u) > 0x8600) {
          if ((*(_WORD *)v2 & 0xFF00u) > 0x8800) {
              if (v3 == 35072) {
                  if (dword_118ABD3C[7 * dword_118ABAD4] > 50 ||
                      dword_118ABD3C[7 * dword_118ABD80] <= 50)
                      goto LABEL_68;
              } else if (v3 == 35328) {
                  if (dword_118ABD40[7 * dword_118ABAD4] < -50 ||
                      dword_118ABD40[7 * dword_118ABD80] >= -50)
                      goto LABEL_68;
              } else if (v3 != 35584 || dword_118ABD40[7 * dword_118ABAD4] > 50 ||
                         dword_118ABD40[7 * dword_118ABD80] <= 50) {
                  goto LABEL_68;
              }
          } else if (v3 == 34816) {
              if (dword_118ABD3C[7 * dword_118ABAD4] < -50 ||
                  dword_118ABD3C[7 * dword_118ABD80] >= -50)
                  goto LABEL_68;
          } else if (v3 != 34560 || dword_118ABD38[7 * dword_118ABAD4] > 50 ||
                     dword_118ABD38[7 * dword_118ABD80] <= 50) {
              goto LABEL_68;
          }
        } else if (v3 == 34304) {
          if (dword_118ABD38[7 * dword_118ABAD4] < -50 || dword_118ABD38[7 * dword_118ABD80] >= -50)
              goto LABEL_68;
        } else if (v3 != 34048 || dword_118ABAE8[68 * dword_118ABD7C] > 50 ||
                   dword_118ABAE8[68 * dword_118ABAB8] <= 50) {
          goto LABEL_68;
        }
      } else if (v3 == 33792) {
        if (dword_118ABAE8[68 * dword_118ABD7C] < -50 || dword_118ABAE8[68 * dword_118ABAB8] >= -50)
          goto LABEL_68;
      } else if (v3 != 33536 || dword_118ABAE4[68 * dword_118ABD7C] > 50 ||
                 dword_118ABAE4[68 * dword_118ABAB8] <= 50) {
        goto LABEL_68;
      }
    } else if (v3 == 33280) {
      if (dword_118ABAE4[68 * dword_118ABD7C] < -50 || dword_118ABAE4[68 * dword_118ABAB8] >= -50)
        goto LABEL_68;
    } else if (v3 != 33024 || dword_118ABAE0[68 * dword_118ABD7C] > 50 ||
               dword_118ABAE0[68 * dword_118ABAB8] <= 50) {
      goto LABEL_68;
    }
  LABEL_67:
    result = 0x80;
    goto LABEL_68;
  }
  if (v3 != 0x8000) {
    if (v3 != 768)
      goto LABEL_68;
    v7 = *v2;
    if ((byte_118ABD50[28 * dword_118ABAD4 + v7] & 0x80) == 0) {
      v5 = byte_118ABD50[28 * dword_118ABD80 + v7] >= 0;
    LABEL_14:
      if (!v5) {
        result = 1;
        goto LABEL_68;
      }
    }
  LABEL_16:
    result = 0;
    goto LABEL_68;
  }
  if (dword_118ABAE0[68 * dword_118ABD7C] >= -50 && dword_118ABAE0[68 * dword_118ABAB8] < -50)
    goto LABEL_67;
LABEL_68:
  if (v2[3]) {
    v8 = dword_118ABAD8;
  } else {
    v8 = dword_118ABAD8;
    v9 = v2[2];
    if ((byte_118AB8B8[256 * gDIEffectSpring.dwStartDelay + v9] & 0x80) == 0 &&
        (byte_118AB8B8[256 * dword_118ABAD8 + v9] & 0x80) != 0) {
      result |= 1u;
    }
  }
  if (!v2[5]) {
    v10 = v2[4];
    if ((byte_118AB8B8[256 * gDIEffectSpring.dwStartDelay + v10] & 0x80) == 0 &&
        (byte_118AB8B8[256 * v8 + v10] & 0x80) != 0) {
      result |= 1u;
    }
  }
  return result;
}
// 118ABAB8: using guessed type int dword_118ABAB8;
// 118ABAD4: using guessed type int dword_118ABAD4;
// 118ABAD8: using guessed type int dword_118ABAD8;
// 118ABAE0: using guessed type int dword_118ABAE0[];
// 118ABAE4: using guessed type int dword_118ABAE4[];
// 118ABAE8: using guessed type int dword_118ABAE8[];
// 118ABD38: using guessed type int dword_118ABD38[];
// 118ABD3C: using guessed type int dword_118ABD3C[];
// 118ABD40: using guessed type int dword_118ABD40[];
// 118ABD7C: using guessed type int dword_118ABD7C;
// 118ABD80: using guessed type int dword_118ABD80;
