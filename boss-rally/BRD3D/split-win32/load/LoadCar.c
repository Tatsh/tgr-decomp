#include "types-win32.h"
//----- (10035520) --------------------------------------------------------
int __cdecl LoadCar(int a1, int carIndex, int a3) {
    int result; // eax

    if (a3) // Never runs
        sub_10008CF0((int)aLoadcar);
    ReadCarFileIntoBuffer((char *)&unk_100C12A0 + 89992 * a1, carIndex);
    sub_1003551B();
    result = a1;
    MEMORY[0x106C6558][a1] = carIndex;
    return result;
}
