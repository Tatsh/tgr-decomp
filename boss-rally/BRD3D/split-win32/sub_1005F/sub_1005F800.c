#include "types-win32.h"
//----- (1005F800) --------------------------------------------------------
int sub_1005F800() {
  int v0;      // edi
  _DWORD *v1;  // ecx
  int v2;      // eax
  int v3;      // esi
  int v4;      // edi
  _DWORD *v5;  // ecx
  int v6;      // esi
  int v7;      // eax
  int v8;      // edi
  _DWORD *v9;  // ecx
  int v10;     // esi
  int v11;     // edx
  int v12;     // edi
  _DWORD *v13; // ecx
  int result;  // eax
  int v15;     // esi
  int v16;     // edx

  v0 = 0;
  v1 = &unk_10A9D184;
  do {
    v1 += 4;
    v2 = 16 * (v0 % 8);
    v3 = 16 * (v0 / 8);
    *(v1 - 5) = v2;
    *(v1 - 4) = v3;
    *(v1 - 3) = v2 + 16;
    *(v1 - 2) = v3 + 16;
    ++v0;
  } while ((int)v1 < (int)&unk_10A9D5C4);
  v4 = 0;
  v5 = &unk_10A9D63C;
  do {
    v5 += 4;
    v6 = 44 * (v4 / 5);
    v7 = 39 * (v4 % 5);
    *(v5 - 5) = v7;
    *(v5 - 4) = v6;
    *(v5 - 3) = v7 + 39;
    *(v5 - 2) = v6 + 44;
    ++v4;
  } while ((int)v5 < (int)&unk_10A9D77C);
  v8 = 0;
  v9 = &unk_10A9DA54;
  do {
    v9 += 4;
    v10 = (v8 / 5) << 7;
    v11 = (v8 % 5) << 7;
    *(v9 - 5) = v11;
    *(v9 - 4) = v10;
    *(v9 - 3) = v11 + 128;
    *(v9 - 2) = v10 + 128;
    ++v8;
  } while ((int)v9 < (int)&unk_10A9DB44);
  v12 = 0;
  v13 = &unk_10A9DB44;
  do {
    v13 += 4;
    result = v12 / 3;
    v15 = (v12 / 3) << 7;
    v16 = (v12 % 3) << 7;
    *(v13 - 5) = v16;
    *(v13 - 4) = v15;
    ++v12;
    *(v13 - 3) = v16 + 128;
    *(v13 - 2) = v15 + 128;
  } while (v12 + 15 < 24);
  return result;
}
