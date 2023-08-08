#include "../types-win32.h"
//----- (1001A990) --------------------------------------------------------
BOOL __stdcall ddrawEnumerateCallback(GUID *lpGUID, LPSTR a2, LPSTR Source, LPVOID a4) {
    unk334 *mem;  // eax
    unk334 *memo; // edx
    void *v6;     // eax
    unk334 *v7;   // edi

    if (a4) {
        mem = (unk334 *)malloc(0x334u);
        memo = mem;
        if (mem) {
            v6 = mem->field_27;
            LOBYTE(v6) = (int)memo->field_27 & 0xFE;
            memo->field_27 = v6;
            memset(&memo->field_1C, 0, 0x17Cu);
            memo->field_1C = 0x17C;
            memset(&memo->ddCaps0, 0, sizeof(memo->ddCaps0));
            memo->ddCaps0.dwSize = 0x17C;
            memo->field_314 = 0;
            memo->field_318 = 0;
            memo->field_31C = 0;
            memo->field_320 = 0;
            memo->field_324 = 0;
            memo->field_328 = 0;
            memo->field_32C = 0;
            memo->last = 0;
            v7 = memo;
        } else {
            v7 = 0;
        }
        if (v7) {
            if (meth_1001B090(v7, lpGUID, Source, a2) < 0 || sub_1001BA10(v7) < 0) {
                meth_1001B280(v7);
                free(v7);
                return 1;
            }
            ++*((_DWORD *)a4 + 1);
        }
    }
    return 1;
}
