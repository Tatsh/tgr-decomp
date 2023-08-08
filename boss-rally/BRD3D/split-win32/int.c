#include "types-win32.h"
//----- (1001C820) --------------------------------------------------------
int(__cdecl *__cdecl sub_1001C820(int a1, int a2))(int) {
    int v2;                     // edx
    int(__cdecl * result)(int); // eax

    v2 = 0;
    dword_104C0DC0 = 0;
    if (a1 == -50331649 && a2 == -198532) {
        dword_104C0BB4 = -1;
        goto LABEL_35;
    }
    if (a1 == -50331649 && a2 == -100036) {
        if (dword_106C6618) {
            off_100A79EC = sub_1001C690;
            goto LABEL_41;
        }
    LABEL_40:
        off_100A79EC = sub_1001BC90;
        goto LABEL_41;
    }
    if (a1 == -61440340 && a2 == -3079)
        goto LABEL_34;
    if (a1 == -50358273 && a2 == -13762817) {
        if (dword_106C6618) {
            off_100A79EC = sub_1001C690;
            goto LABEL_41;
        }
        goto LABEL_40;
    }
    if (a1 == -50331649) {
        if (a2 == -134407) {
            if (dword_106C6618) {
                off_100A79EC = sub_1001C690;
                goto LABEL_41;
            }
            goto LABEL_40;
        }
        if (a2 == -35911) {
            dword_104C0BB4 = -1;
            goto LABEL_35;
        }
    }
    if (a1 != -65896952 || a2 != -201329928) {
        if (a1 == -63865342 && (a2 == 1610544122 || a2 == 1375663098)) {
            off_100A79EC = sub_1001C690;
            if (!dword_106C6618)
                off_100A79EC = sub_1001BC90;
            v2 = 1;
            dword_104C0DC0 = 1;
            goto LABEL_41;
        }
        if (a1 != -65896449 || a2 != -1992) {
            if (dword_106C6618) {
                off_100A79EC = sub_1001C690;
                goto LABEL_41;
            }
            goto LABEL_40;
        }
    LABEL_34:
        dword_104C0BB4 = -16777216;
    LABEL_35:
        if (dword_106C6618)
            off_100A79EC = (int(__cdecl *)(_DWORD))sub_1001CA90;
        else
            off_100A79EC = (int(__cdecl *)(_DWORD))sub_1001CA10;
        goto LABEL_41;
    }
    if (dword_106C661C || dword_106C6624) {
        if (dword_106C6618) {
            off_100A79EC = sub_1001C690;
            goto LABEL_41;
        }
        goto LABEL_40;
    }
LABEL_41:
    result = off_100A7A00[0];
    if (v2) {
        if ((_DWORD * (__cdecl *)(_DWORD *)) off_100A7A00[0] == sub_10021E80)
            off_100A7A00[0] = (int(__cdecl *)(int))sub_10022480;
    } else if ((_DWORD * (__cdecl *)(_DWORD *)) off_100A7A00[0] == sub_10022480) {
        off_100A7A00[0] = (int(__cdecl *)(int))sub_10021E80;
    }
    return result;
}
// 1001C8E7: conditional instruction was optimized away because of '%arg_0.4==FCFFFFFF'
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
// 100A7A00: using guessed type int (__cdecl *off_100A7A00[180])(int);
// 104C0BB4: using guessed type int dword_104C0BB4;
// 104C0DC0: using guessed type int dword_104C0DC0;
// 106C6618: using guessed type int dword_106C6618;
// 106C661C: using guessed type int dword_106C661C;
// 106C6624: using guessed type int dword_106C6624;
