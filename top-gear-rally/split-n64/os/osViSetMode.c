#include "../../types-n64.h"
//----- (80264A60) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall osViSetMode(int mode) {
    int v1; // $v0

    v1 = sub_80268540();
    dword_802A61F8 = mode;
    word_802A61F0 = 1;
    dword_802A61FC = MEMORY[4];
    sub_80268560(v1);
}
// 80264A88: write access to const memory at 802A61F8 has been detected
// 80264A98: write access to const memory at 802A61F0 has been detected
// 80264AB0: write access to const memory at 802A61FC has been detected
// 802A61F0: using guessed type __int16 word_802A61F0;
// 802A61F8: using guessed type int dword_802A61F8;
// 802A61FC: using guessed type int dword_802A61FC;
// 802A6224: using guessed type __int16 *off_802A6224;
