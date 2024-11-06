fcn(int32_t arg_4h, int32_t arg_8h, const char *arg_2ch);
; var const char *s1 @ stack - 0x24
; var const char *s2 @ stack - 0x18
; var int32_t var_ch @ stack - 0xc
; arg int32_t arg_4h @ stack + 0x4
; arg int32_t arg_8h @ stack + 0x8
; arg const char *arg_2ch @ stack + 0x2c
sub     esp, 0x24
lea     eax, [s2]
lea     ecx, [arg_8h]
push    ebx
push    ebp
push    esi
mov     esi, dword [arg_8h]
push    edi
push    esi
push    eax
push    ecx
mov     ebp, 0x8000
call    subABCDEFGHIJKLMNOPQRSTUVWXYZ
add     esi, 0xffffffc4
lea     edx, [var_ch]
push    esi
lea     eax, [arg_8h]
push    edx
push    eax
call    subABCDEFGHIJKLMNOPQRSTUVWXYZ
mov     ebx, dword [arg_4h]
add     esp, 0x18
xor     edi, edi
test    edi, edi
jne     0x1001986b
mov     esi, 0x100a1b1c
jmp     0x10019881
cmp     edi, 1     ; 1
jne     0x10019877
mov     esi, 0x100a1acc
jmp     0x10019881
cmp     edi, 2     ; 2
jne     0x10019881
mov     esi, 0x100a1af4
xor     eax, eax
mov     ecx, dword [esi]
inc     eax
add     esi, 4
cmp     eax, 0xa   ; 10
mov     dl, byte [ecx + ebx]
mov     byte [esp + eax + 0xf], dl
jl      0x10019883
lea     eax, [s2]
push    0xa        ; 10 ; size_t n
lea     ecx, [s1]
push    eax        ; const char *s2
push    ecx        ; const char *s1
call    sub.MSVCR90.dll_strncmp
add     esp, 0xc
test    eax, eax
je      0x100198c5
lea     edx, [arg_2ch]
push    0xa        ; 10 ; size_t n
lea     eax, [s1]
push    edx        ; const char *s2
push    eax        ; const char *s1
call    sub.MSVCR90.dll_strncmp
add     esp, 0xc
test    eax, eax
jne     0x100198c7
mov     ebp, edi
inc     edi
cmp     edi, 3     ; 3
jl      0x10019860
pop     edi
mov     eax, ebp
pop     esi
pop     ebp
pop     ebx
add     esp, 0x24
ret
