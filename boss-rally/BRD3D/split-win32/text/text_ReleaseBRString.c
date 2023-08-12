#include "types-win32.h"
//----- (10074050) --------------------------------------------------------
void text_ReleaseBRString() {
    if (gBrstringModule) {
        free(gBrstringModule);
        gBrstringModule = 0;
        gBrStringOffset = 0;
        gBrStringFileSize = 0;
    }
}
// 11829830: using guessed type int gBrStringOffset;
