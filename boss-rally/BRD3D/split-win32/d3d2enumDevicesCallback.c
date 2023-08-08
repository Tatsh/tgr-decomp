#include "types-win32.h"
//----- (1001AB90) --------------------------------------------------------
int __stdcall d3d2enumDevicesCallback(GUID *a2,
                                      LPSTR lpDeviceDescription,
                                      LPSTR deviceName,
                                      LPD3DDEVICEDESC desc,
                                      LPD3DDEVICEDESC a6,
                                      LPVOID userArg) {
    int *v6;     // ebx
    unk334 *v7;  // ebp
    unk228 *v8;  // eax
    unk228 *v9;  // edx
    int v10;     // eax
    unk228 *v11; // edi

    v6 = (int *)userArg;
    if (userArg) {
        v7 = (unk334 *)*((_DWORD *)userArg + 2);
        if (v7) {
            v8 = (unk228 *)malloc(0x228u);
            v9 = v8;
            if (v8) {
                v10 = v8->field_0;
                LOBYTE(v10) = v9->field_0 & 0xFC;
                v9->field_0 = v10;
                *(_DWORD *)&v9->gap4[16] = 0;
                *(_DWORD *)&v9->gap4[20] = 0;
                memset(&v9->gap4[24], 0, 0xFCu);
                *(_DWORD *)&v9->gap4[24] = 0xFC;
                memset(&v9->gap3D[219], 0, 0xFCu);
                *(_DWORD *)&v9->gap3D[219] = 0xFC;
                v6 = (int *)userArg;
                *(_DWORD *)&v9->gap3D[471] = 0;
                *(_DWORD *)&v9->gap3D[475] = 0;
                *(_DWORD *)&v9->gap3D[479] = 0;
                v9->field_220 = 0;
                v9->last = 0;
                v11 = v9;
            } else {
                v11 = 0;
            }
            if (v11 && meth_1001ADE0(v11, a2, lpDeviceDescription, deviceName, desc, a6) >= 0 &&
                meth_1001B630(v7, v11) >= 0)
                ++v6[1];
        }
    }
    return 1;
}
