fcn.0e766140(int32_t arg_4h, int32_t arg_8h, int32_t arg_ch);
; var int32_t var_ch @ stack - 0xc
; arg int32_t arg_4h @ stack + 0x4
; arg int32_t arg_8h @ stack + 0x8
; arg int32_t arg_ch @ stack + 0xc
mov     eax, dword [arg_ch]
sub     esp, 0xc
lea     ecx, [esp]
lea     edx, [arg_ch]
push    ebx
push    esi
push    eax
push    ecx
push    edx
call    sub.ABCDEFGHIJKLMNOPQRSTUVWXYZ_e7661e0 ; sub.ABCDEFGHIJKLMNOPQRSTUVWXYZ_e7661e0
mov     esi, dword [arg_8h]
mov     eax, dword [arg_ch]
push    esi
push    eax
call    sub.ABCDEFGHIJKLMNOPQRSTUVWXYZ_e7662a0 ; sub.ABCDEFGHIJKLMNOPQRSTUVWXYZ_e7662a0
mov     eax, dword [arg_4h]
add     esp, 0x14
cmp     eax, 1     ; 1
jne     0xe766193
xor     eax, eax
mov     ecx, 0xe7757ac
mov     bl, byte [esp + eax + 8]
mov     edx, dword [ecx]
inc     eax
add     ecx, 4
cmp     eax, 0xa   ; 10
mov     byte [esi + edx], bl
jl      0xe76617b
pop     esi
pop     ebx
add     esp, 0xc
ret
cmp     eax, 2     ; 2
jne     0xe7661b7
xor     eax, eax
mov     ecx, 0xe7757d4
mov     bl, byte [esp + eax + 8]
mov     edx, dword [ecx]
inc     eax
add     ecx, 4
cmp     eax, 0xa   ; 10
mov     byte [esi + edx], bl
jl      0xe76619f
pop     esi
pop     ebx
add     esp, 0xc
ret
test    eax, eax
jne     0xe7661d2
mov     ecx, 0xe7757fc
mov     bl, byte [esp + eax + 8]
mov     edx, dword [ecx]
inc     eax
add     ecx, 4
cmp     eax, 0xa   ; 10
mov     byte [esi + edx], bl
jl      0xe7661c0
pop     esi
pop     ebx
add     esp, 0xc
ret
nop
nop
nop
nop
nop
nop
nop
nop
