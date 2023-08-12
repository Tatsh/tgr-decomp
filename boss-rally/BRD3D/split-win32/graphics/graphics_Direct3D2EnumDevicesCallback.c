#include "types-win32.h"
//----- (1001AB90) --------------------------------------------------------
int __stdcall graphics_Direct3D2EnumDevicesCallback(GUID *a2,
                                                    LPSTR lpDeviceDescription,
                                                    LPSTR deviceName,
                                                    LPD3DDEVICEDESC desc,
                                                    LPD3DDEVICEDESC a6,
                                                    LPVOID userArg) {
  int *v6;       // ebx
  unk00334 *v7;  // ebp
  unk00228 *v8;  // eax
  unk00228 *v9;  // edx
  DWORD v10;     // eax
  unk00228 *v11; // edi

  v6 = (int *)userArg;
  if (userArg) {
    v7 = (unk00334 *)*((_DWORD *)userArg + 2);
    if (v7) {
      v8 = (unk00228 *)malloc(0x228u);
      v9 = v8;
      if (v8) {
        v10 = v8->field_0;
        LOBYTE(v10) = v9->field_0 & 0xFC;
        v9->field_0 = v10;
        v9->sourceString0 = 0;
        v9->sourceString1 = 0;
        memset(&v9->deviceDesc0, 0, 0xFCu);
        v9->deviceDesc0.dwSize = 0xFC;
        memset(&v9->deviceDesc1, 0, 0xFCu);
        v9->deviceDesc1.dwSize = 0xFC;
        v6 = (int *)userArg;
        v9->field_214 = 0;
        v9->field_218 = 0;
        v9->field_21C = 0;
        v9->field_220 = 0;
        v9->last = 0;
        v11 = v9;
      } else {
        v11 = 0;
      }
      if (v11 && meth_unk00228_1001ADE0(v11, a2, lpDeviceDescription, deviceName, desc, a6) >= 0 &&
          meth_unk00334_1001B630(v7, v11) >= 0) {
        ++v6[1];
      }
    }
  }
  return 1;
}
