#include "types-win32.h"
//----- (10079720) --------------------------------------------------------
BOOL main_UnregisterClass() {
    main_DestroyWindow_gUnk8C();
    return UnregisterClassA(lpClassName, hInstance);
}
