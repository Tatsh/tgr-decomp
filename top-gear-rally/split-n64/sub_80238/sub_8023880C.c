#include "types-n64.h"
//----- (8023880C) --------------------------------------------------------
int sub_8023880C() {
    int result; // $v0

    sub_8022F4F8();
    sub_8022F520();
    sub_8022F5D0(15);
    sub_80238714("%15TOTAL TIME", (int)"%ww", MEMORY[0xFA0], 296, 2045259652);
    if (MEMORY[0xF78] < 3)
        result = sub_80238714("%15LAP TIME", (int)"%ww", MEMORY[0xF80], 296, 2045259682);
    else
        result = sub_80238714("%15BEST LAP", (int)"%ww", MEMORY[0xF98], 296, 2045259682);
    return result;
}
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8031B2CC: using guessed type int dword_8031B2CC;
