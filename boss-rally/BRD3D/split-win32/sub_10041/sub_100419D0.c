#include "../types-win32.h"
//----- (100419D0) --------------------------------------------------------
unkC8 *__cdecl sub_100419D0(LPCSTR a1) {
    unkC8 *result; // eax
    unk1E214 *v2;  // ecx

    result = g_unkC8Ptr1;
    v2 = g_unkC8Ptr1->field_14[0]->field_18[dword_10A9DBD0];
    if (v2)
        result = (unkC8 *)((int(__thiscall *)(unk1E214 *, LPCSTR, int, int, void *))
                               v2->field_0->field_34)(v2, a1, 1, 1, &unk_100AB558);
    return result;
}
// 10A9DBD0: using guessed type int dword_10A9DBD0;
