#include "../types-win32.h"
//----- (100085E0) --------------------------------------------------------
void __thiscall setPodVtbl(Pod *this) {
    this->lpVtbl = &gPodVtbl;
    debugPrint(&this->lpVtbl + 1);
}
