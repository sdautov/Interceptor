void __cdecl remainder(int32_t arg_4h, int32_t arg_8h)
{
    *(int32_t *)arg_4h = arg_8h % 10;
    *(int32_t *)(arg_4h + 4) = (arg_8h - arg_8h % 10) / 10;
    return;
}

void __cdecl subABCDEFGHIJKLMNOPQRSTUVWXYZ(int32_t arg_4h, int32_t arg_8h, int32_t arg_ch)
{
    undefined4 *puVar1;
    int32_t *piVar2;
    int32_t iVar3;
    int32_t iVar4;
    int32_t iVar5;
    int32_t var_50h;
    int32_t var_48h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_30h;
    int32_t var_28h;
    
    puVar1 = (undefined4 *)__gmtime32(&arg_ch);
    remainder((int32_t)&var_30h, puVar1[1]);
    remainder((int32_t)&var_38h, puVar1[2]);
    remainder((int32_t)&var_40h, puVar1[5]);
    remainder((int32_t)&var_48h, puVar1[4] + 1);
    remainder((int32_t)&var_50h, puVar1[3]);
    piVar2 = &var_50h;
    *(undefined4 *)arg_4h = *puVar1;
    iVar5 = *(int32_t *)arg_4h;
    iVar4 = 10;
    do {
        iVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        iVar5 = iVar5 + iVar3;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(int32_t *)arg_4h = iVar5;
    iVar5 = 0;
    do {
        iVar4 = iVar5 + 4;
        *(int32_t *)((int32_t)&var_28h + iVar5) = (*(int32_t *)((int32_t)&var_50h + iVar5) << 1) % 10;
        iVar5 = iVar4;
    } while (iVar4 < 0x28);
    piVar2 = &var_28h;
    iVar5 = 0;
    do {
        iVar4 = *piVar2;
        iVar3 = iVar5 + 1;
        piVar2 = piVar2 + 1;
        *(char *)(iVar5 + arg_8h) = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[iVar4];
        iVar5 = iVar3;
    } while (iVar3 < 10);
    return;
}

int unk_100A1B1C[10] = { 6, 9, 14, 17, 19, 20, 26, 31, 32, 38 };
int unk_100A1ACC[10] = { 3, 6, 11, 13, 17, 22, 25, 27, 31, 35 };
int unk_100A1AF4[10] = { 2, 7, 10, 14, 17, 18, 23, 29, 36, 39 };


int32_t __cdecl fcn(int32_t arg_4h, int32_t arg_8h, char *arg_2ch)
{
    int32_t iVar1;
    int32_t iVar2;
    int32_t iVar3;
    int32_t iVar4;
    int32_t *piVar5;
    int32_t iVar6;
    char *s1;
    char *s2;
    int32_t var_ch;
    
    iVar6 = arg_8h;
    iVar4 = 0x8000;
    subABCDEFGHIJKLMNOPQRSTUVWXYZ((int32_t)&arg_8h, (int32_t)&s2, arg_8h);
    subABCDEFGHIJKLMNOPQRSTUVWXYZ((int32_t)&arg_8h, (int32_t)&var_ch, iVar6 + -0x3c);
    iVar6 = 0;
    piVar5 = (int32_t *)arg_8h;
    do {
        if (iVar6 == 0) {
            piVar5 = (int32_t *)unk_100A1B1C;
        } else if (iVar6 == 1) {
            piVar5 = (int32_t *)unk_100A1ACC;
        } else if (iVar6 == 2) {
            piVar5 = (int32_t *)unk_100A1AF4;
        }
        iVar3 = 0;
        do {
            iVar1 = *piVar5;
            iVar2 = iVar3 + 1;
            piVar5 = piVar5 + 1;
            *(undefined *)((int32_t)&s1 + iVar3) = *(undefined *)(iVar1 + arg_4h);
            iVar3 = iVar2;
        } while (iVar2 < 10);
        iVar3 = strncmp(&s1, &s2, 10);
        if (iVar3 == 0) {
code_r0x100198c5:
            iVar4 = iVar6;
        } else {
            iVar3 = strncmp(&s1, &var_ch, 10);
            if (iVar3 == 0) goto code_r0x100198c5;
        }
        iVar6 = iVar6 + 1;
        if (2 < iVar6) {
            return iVar4;
        }
    } while( true );
}
