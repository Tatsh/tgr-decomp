#include "../types-win32.h"
//----- (10008B40) --------------------------------------------------------
void __thiscall setPodFilename(Pod *this, const char *a2) {
    if (a2)
        strcpy(this->filename, a2);
}
