#include "types-win32.h"
//----- (10021560) --------------------------------------------------------
int *__cdecl graphics_10021560(unsigned int a1, unsigned int a2, int a3, int a4) {
    double v4;    // st6
    double v5;    // st4
    double v6;    // st2
    double v7;    // st6
    double v8;    // st3
    double v9;    // st7
    double v10;   // st2
    double v11;   // st4
    double v12;   // st2
    double v13;   // st6
    double v14;   // rt1
    double v15;   // st2
    double v16;   // st7
    double v17;   // st5
    double v18;   // rtt
    int v19;      // eax
    int v20;      // ecx
    int v21;      // edx
    double v22;   // st6
    double v23;   // st5
    double v24;   // st7
    double v25;   // st4
    double v26;   // st6
    int v27;      // eax
    int v28;      // ecx
    int v29;      // edx
    int v30;      // eax
    int *v31;     // ecx
    int v32;      // edi
    int *result;  // eax
    __int64 v34;  // [esp+98h] [ebp-1BCh]
    __int64 v35;  // [esp+98h] [ebp-1BCh]
    float v36;    // [esp+98h] [ebp-1BCh]
    float v37;    // [esp+98h] [ebp-1BCh]
    float v38;    // [esp+98h] [ebp-1BCh]
    float v39;    // [esp+98h] [ebp-1BCh]
    int v40;      // [esp+98h] [ebp-1BCh]
    int v41;      // [esp+98h] [ebp-1BCh]
    int v42;      // [esp+98h] [ebp-1BCh]
    float v43;    // [esp+98h] [ebp-1BCh]
    float v44;    // [esp+A0h] [ebp-1B4h]
    float v45;    // [esp+A0h] [ebp-1B4h]
    float v46;    // [esp+A0h] [ebp-1B4h]
    char v47[68]; // [esp+A4h] [ebp-1B0h] BYREF
    int v48;      // [esp+E8h] [ebp-16Ch]
    int v49;      // [esp+ECh] [ebp-168h]
    int v50;      // [esp+F0h] [ebp-164h]
    int v51;      // [esp+F4h] [ebp-160h]
    float v52;    // [esp+F8h] [ebp-15Ch]
    int v53;      // [esp+FCh] [ebp-158h]
    int v54;      // [esp+100h] [ebp-154h]
    int v55;      // [esp+104h] [ebp-150h]
    int v56;      // [esp+108h] [ebp-14Ch]
    char v57[68]; // [esp+110h] [ebp-144h] BYREF
    int v58;      // [esp+154h] [ebp-100h]
    int v59;      // [esp+158h] [ebp-FCh]
    int v60;      // [esp+15Ch] [ebp-F8h]
    int v61;      // [esp+160h] [ebp-F4h]
    int v62;      // [esp+164h] [ebp-F0h]
    int v63;      // [esp+168h] [ebp-ECh]
    int v64;      // [esp+16Ch] [ebp-E8h]
    int v65;      // [esp+170h] [ebp-E4h]
    int v66;      // [esp+174h] [ebp-E0h]
    char v67[68]; // [esp+17Ch] [ebp-D8h] BYREF
    int v68;      // [esp+1C0h] [ebp-94h]
    int v69;      // [esp+1C4h] [ebp-90h]
    int v70;      // [esp+1C8h] [ebp-8Ch]
    int v71;      // [esp+1CCh] [ebp-88h]
    int v72;      // [esp+1D0h] [ebp-84h]
    int v73;      // [esp+1D4h] [ebp-80h]
    int v74;      // [esp+1D8h] [ebp-7Ch]
    int v75;      // [esp+1DCh] [ebp-78h]
    int v76;      // [esp+1E0h] [ebp-74h]
    char v77[68]; // [esp+1E8h] [ebp-6Ch] BYREF
    int v78;      // [esp+22Ch] [ebp-28h]
    int v79;      // [esp+230h] [ebp-24h]
    float v80;    // [esp+234h] [ebp-20h]
    int v81;      // [esp+238h] [ebp-1Ch]
    float v82;    // [esp+23Ch] [ebp-18h]
    float v83;    // [esp+240h] [ebp-14h]
    int v84;      // [esp+244h] [ebp-10h]
    int v85;      // [esp+248h] [ebp-Ch]
    int v86;      // [esp+24Ch] [ebp-8h]

    v34 = a2;
    LODWORD(v34) = a4;
    v4 = (double)v34;
    v35 = a1;
    LODWORD(v35) = a3;
    v5 = (double)v35;
    *(float *)&v35 = (float)a2;
    v6 = v4;
    v7 = *(float *)&v35;
    *(float *)&v35 = v6;
    v8 = *(float *)&v35 / 4.0;
    *(float *)&v35 = (float)gWidth;
    v9 = *(float *)&v35;
    *(float *)&v35 = (float)gHeight;
    v44 = (float)a1;
    v10 = v5;
    v11 = v44;
    v45 = v10;
    v12 = v7 / 4.0;
    v13 = v45 / 4.0;
    v14 = *(float *)&v35 - v12;
    v15 = v9 / 2.0;
    v16 = *(float *)&v35 - v8;
    v46 = v15;
    *(float *)&v35 = *(float *)&v35 / 2.0;
    v17 = (v14 - *(float *)&v35) / *(float *)&v35 / *(float *)&dword_100A79E8;
    v18 = (v16 - *(float *)&v35) / *(float *)&v35 / *(float *)&dword_100A79E8;
    *(float *)&v35 = (v11 / 4.0 - v46) / v46 / *(float *)&dword_100A79E8;
    v19 = v35;
    *(float *)&v35 = v17;
    v20 = v35;
    *(float *)&v35 = (v13 - v46) / v46 / *(float *)&dword_100A79E8;
    v21 = v35;
    v78 = v19;
    *(float *)&v35 = v18;
    v58 = v19;
    v79 = v20;
    v48 = v21;
    v49 = v20;
    v59 = v35;
    v68 = v21;
    v69 = v35;
    *(float *)&v70 = *(float *)&dword_104C5174 / *(float *)&dword_100A79E8;
    v60 = v70;
    v50 = v70;
    v80 = *(float *)&v70;
    *(float *)&v73 = 1.0 / *(float *)&dword_100A79E8;
    v63 = v73;
    v53 = v73;
    v83 = *(float *)&v73;
    if (dword_104C0DC0) {
        v54 = LODWORD(flt_104BBF04);
        v84 = LODWORD(flt_104BBF04);
        v55 = LODWORD(flt_104C0BAC);
        v85 = LODWORD(flt_104C0BAC);
        v56 = LODWORD(flt_104BBEB8);
        v86 = LODWORD(flt_104BBEB8);
        v74 = LODWORD(flt_104C5154);
        v64 = LODWORD(flt_104C5154);
        v75 = LODWORD(flt_104C5160);
        v65 = LODWORD(flt_104C5160);
        v76 = LODWORD(flt_104C1690);
        v66 = LODWORD(flt_104C1690);
    } else {
        v74 = 1065353216;
        v64 = 1065353216;
        v54 = 1065353216;
        v84 = 1065353216;
        v75 = 1065353216;
        v65 = 1065353216;
        v55 = 1065353216;
        v85 = 1065353216;
        v76 = 1065353216;
        v66 = 1065353216;
        v56 = 1065353216;
        v86 = 1065353216;
    }
    v36 = (float)dword_118AA080;
    v22 = v36;
    v37 = (float)dword_1182983C;
    v23 = v37;
    v38 = (float)dword_11829838;
    v24 = v38;
    v39 = (float)dword_118A9870;
    v25 = v22;
    v26 = v39;
    *(float *)&v40 = v25 * 8.0;
    v27 = v40;
    *(float *)&v41 = v23 * 8.0;
    v28 = v41;
    *(float *)&v42 = v24 * 8.0;
    v29 = v42;
    v81 = v27;
    v43 = v26 * 8.0;
    v51 = v28;
    v82 = v43;
    v52 = v43;
    v61 = v27;
    v62 = v29;
    v71 = v28;
    v72 = v29;
    if (dword_10277370) {
        if (gIndexedPrimitiveIndexCount) {
            g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                       D3DPT_TRIANGLELIST,
                                                       D3DVT_TLVERTEX,
                                                       &gVertices,
                                                       gVertexCount,
                                                       &g_indexedPrimitiveIndices,
                                                       gIndexedPrimitiveIndexCount,
                                                       12);
            v30 = 0;
            if (dword_104C5190 > 0) {
                v31 = dword_104C0BC0;
                do {
                    v32 = *v31;
                    ++v30;
                    ++v31;
                    *(_DWORD *)(v32 + 104) = -1;
                } while (v30 < dword_104C5190);
            }
            gIndexedPrimitiveIndexCount = 0;
            gVertexCount = 0;
            dword_104C5190 = 0;
        }
        if ((dword_10277370 & 1) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ZWRITEENABLE, renderState_0);
            dword_102773F8 = renderState_0;
        }
        if ((dword_10277370 & 2) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHATESTENABLE, renderState);
            dword_102773FC = renderState;
        }
        if ((dword_10277370 & 4) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_SRCBLEND, dword_10277380);
            dword_10277400 = dword_10277380;
        }
        if ((dword_10277370 & 8) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_DESTBLEND, dword_10277384);
            dword_10277404 = dword_10277384;
        }
        if ((dword_10277370 & 0x10) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_CULLMODE, dword_10277388);
            dword_10277408 = dword_10277388;
        }
        if ((dword_10277370 & 0x20) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ZFUNC, dword_1027738C);
            dword_1027740C = dword_1027738C;
        }
        if ((dword_10277370 & 0x40) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHAREF, dword_10277390);
            dword_10277410 = dword_10277390;
        }
        if ((dword_10277370 & 0x80u) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHAFUNC, dword_10277394);
            dword_10277414 = dword_10277394;
        }
        if ((dword_10277370 & 0x100) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(
                g_D3DDevice2, D3DRS_FOGSTART | D3DRS_FILLMODE, dword_10277398);
            dword_10277418 = dword_10277398;
        }
        if ((dword_10277370 & 0x200) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(
                g_D3DDevice2, D3DRS_FOGEND | D3DRS_FILLMODE, dword_1027739C);
            dword_1027741C = dword_1027739C;
        }
        if ((dword_10277370 & 0x400) != 0) {
            g_D3DDevice2->lpVtbl->SetRenderState(
                g_D3DDevice2, D3DRS_ALPHABLENDENABLE, dword_102773A0);
            dword_10277420 = dword_102773A0;
        }
        dword_10277370 = 0;
    }
    if ((dword_104C5178 & 0x1000) != 0) {
        graphics_1001D420((int)v77, (int)v47, (int)v57);
        result = graphics_1001D420((int)v47, (int)v67, (int)v57);
    } else {
        graphics_1001D420((int)v57, (int)v47, (int)v77);
        result = graphics_1001D420((int)v57, (int)v67, (int)v47);
    }
    return result;
}
// 100A79E8: using guessed type int dword_100A79E8;
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
// 10277370: using guessed type int dword_10277370;
// 10277378: using guessed type int renderState_0;
// 1027737C: using guessed type int renderState;
// 10277380: using guessed type int dword_10277380;
// 10277384: using guessed type int dword_10277384;
// 10277388: using guessed type int dword_10277388;
// 1027738C: using guessed type int dword_1027738C;
// 10277390: using guessed type int dword_10277390;
// 10277394: using guessed type int dword_10277394;
// 10277398: using guessed type int dword_10277398;
// 1027739C: using guessed type int dword_1027739C;
// 102773A0: using guessed type int dword_102773A0;
// 102773F8: using guessed type int dword_102773F8;
// 102773FC: using guessed type int dword_102773FC;
// 10277400: using guessed type int dword_10277400;
// 10277404: using guessed type int dword_10277404;
// 10277408: using guessed type int dword_10277408;
// 1027740C: using guessed type int dword_1027740C;
// 10277410: using guessed type int dword_10277410;
// 10277414: using guessed type int dword_10277414;
// 10277418: using guessed type int dword_10277418;
// 1027741C: using guessed type int dword_1027741C;
// 10277420: using guessed type int dword_10277420;
// 104BBEB8: using guessed type float flt_104BBEB8;
// 104BBF04: using guessed type float flt_104BBF04;
// 104C0BAC: using guessed type float flt_104C0BAC;
// 104C0DC0: using guessed type int dword_104C0DC0;
// 104C1690: using guessed type float flt_104C1690;
// 104C5154: using guessed type float flt_104C5154;
// 104C5160: using guessed type float flt_104C5160;
// 104C5174: using guessed type int dword_104C5174;
// 104C5178: using guessed type int dword_104C5178;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 11829838: using guessed type int dword_11829838;
// 1182983C: using guessed type int dword_1182983C;
// 118A9870: using guessed type int dword_118A9870;
// 118AA080: using guessed type int dword_118AA080;
