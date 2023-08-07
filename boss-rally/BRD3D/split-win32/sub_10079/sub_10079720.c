#include "../../types-win32.h"
//----- (10079720) --------------------------------------------------------
BOOL sub_10079720() {
    sub_10079C40();
    return UnregisterClassA(lpClassName, hInst);
}
