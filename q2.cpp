uint32_t fcn_10019820 (void) {
    eax = s2;
    ecx = arg_8h;
    esi = *(arg_8h);
    ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0 (ecx, eax, esi, edi, esi, ebp);
    esi += 0xffffffc4;
    edx = var_ch;
    eax = arg_8h;
    eax = ABCDEFGHIJKLMNOPQRSTUVWXYZ_100196e0 (eax, edx, esi);
    ebx = *(arg_4h);
    esi = *(arg_8h);
    edi = 0;
label_0:
    if (edi == 0) {
        esi = 0x100a1b1c;
    } else {
        if (edi == 1) {
            esi = 0x100a1acc;
        } else {
            if (edi != 2) {
                goto label_1;
            }
            esi = 0x100a1af4;
        }
    }
label_1:
    eax = 0;
    do {
        ecx = *(esi);
        eax++;
        esi += 4;
        dl = *((ecx + ebx));
        *((esp + eax + 0xf)) = dl;
    } while (eax < 0xa);
    eax = s2;
    ecx = s1;
    eax = strncmp (ecx, eax, 0xa);
    if (eax != 0) {
        edx = arg_2ch;
        eax = s1;
        eax = strncmp (eax, edx, 0xa);
        if (eax != 0) {
            goto label_2;
        }
    }
label_2:
    edi++;
    if (edi < 3) {
        goto label_0;
    }
    eax = ebp;
    return eax;
}
