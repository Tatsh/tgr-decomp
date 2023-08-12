#include "types-win32.h"
//----- (1007F3C0) --------------------------------------------------------
char *__cdecl getcwd(char *buffer, int maxlen) {
  char *fullPath; // esi

  _lock(_ENV_LOCK);
  fullPath = _getdcwd_lk(0, buffer, maxlen);
  _unlock(_ENV_LOCK);
  return fullPath;
}
