#include "../../types-win32.h"
//----- (100087B0) --------------------------------------------------------
size_t __thiscall ReadPod(Pod *this, unsigned int argList, void *buffer) {
    unsigned int *offsetAndElementCount; // edi

    if (argList >= this->header.m_cNumPods)
        writeToRandomBufferAndExit("ReadPod: %i >= cNumPods", argList);
    offsetAndElementCount = (unsigned int *)((char *)this->unkInstance + 76 * argList);
    fseek(this->fp, *offsetAndElementCount, SEEK_SET);
    return freadLockHandleError(this->fp, buffer, offsetAndElementCount[1]);
}
