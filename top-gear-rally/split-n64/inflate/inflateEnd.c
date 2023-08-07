#include "../../types-n64.h"
//----- (8023FFF0) --------------------------------------------------------
int __fastcall inflateEnd(z_streamp z) {
    z_streamp z_2;                // $a3
    struct internal_state *state; // $a1
    free_func zf;                 // $v0
    int *v4;                      // $a0
    int result;                   // $v0
    int *v6;                      // $a2
    void *v7;                     // $a0
    int v8;                       // [sp+24h] [-4h] BYREF
    z_stream *zs;                 // [sp+28h] [+0h]
    z_streamp z_1;                // [sp+28h] [+0h]

    z_2 = z;
    if (!z)
        return -2;
    state = z->state;
    if (!state)
        return -2;
    zf = z->zfree;
    if (!zf)
        return -2;
    v4 = (int *)state->blocks;
    v6 = &v8;
    if (v4) {
        zs = z_2;
        sub_8023FED8(v4, z_2, &v8);
        z_2 = zs;
        state = zs->state;
        zf = zs->zfree;
        v7 = zs->opaque;
    } else {
        v7 = z_2->opaque;
    }
    z_1 = z_2;
    ((void(__fastcall *)(void *, struct internal_state *, int *))zf)(v7, state, v6);
    result = 0;
    z_1->state = 0;
    return result;
}
// 8024004C: variable 'v6' is possibly undefined
