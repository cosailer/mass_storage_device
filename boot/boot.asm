bits 16

mov ax, 0x07C0
mov ds, ax
mov ax, 0x07E0
mov ss, ax
mov sp, 0x2000

call clearscreen

push 0x0000
call movecursor
add sp, 2

push msg1
call print
add sp, 2

push msg2
call print
add sp, 2

; ##### read memory at 0x1FD #####

;mov ax, 0x0E42
;mov ah, 0x0E
;mov al, [0x1FE]
;int 0x10

; ##### read hdd 2nd sector to memory   #####

;mov ah, 0x0E
;mov al, [0x1000]
;int 0x10

;mov ah, 0x0E
;mov al, [0x1001]
;int 0x10

; ##### main function #####
call print_hdd_repeat

ret

cli
hlt

clearscreen:
    push bp
    mov bp, sp
    pusha
    
    mov ah, 0x07
    mov al, 0x00
    mov bh, 0x0E
    mov cx, 0x00
    mov dh, 0x18
    mov dl, 0x4f
    int 0x10
    
    popa
    mov sp, bp
    pop bp
    ret
    
movecursor:
    push bp
    mov bp, sp
    pusha
    
    mov dx, [bp+4]
    mov ah, 0x02
    mov bh, 0x00
    int 0x10
    
    popa
    mov sp, bp
    pop bp
    ret
    
print:
    push bp
    mov bp, sp
    pusha
    mov si, [bp+4]
    mov bh, 0x00
    mov bl, 0x00
    mov ah, 0x0E
    
.char:
    mov al, [si]
    add si, 1
    or al, 0
    je .return
    int 0x10
    jmp .char
    
.return:
    popa
    mov sp, bp
    pop bp
    ret
    
; ##### main function  #####

print_hdd_repeat:

.key:
    mov ah, 0x01  ;BIOS.testkey
    int 0x16
    jz .start
    mov ah, 0x00  ;BIOS.getkey
    int 0x16
    cmp al, 0x6C  ;is it 'l' ?
    jz .write_hdd

.start:
    
    mov ax, 0
    mov bx, 0x8C00  ; buffer destination
    mov ch, 0x00    ; cylinder 0
    mov cl, 0x02    ; starting from sector 2
    mov dh, 0x00    ; head 0
    mov dl, 0x80    ; drive number
    mov ah, 0x02    ; disk read
    mov al, 0x01    ; load 1 sector
    int 0x13
    
    ; delay
    mov al, 0
    mov ah, 0x86
    mov cx, 0x09
    mov dx, 0
    int 15h
    
    call print_hdd
    push newline
    call print
    jmp .key
    
.write_hdd: ;write sector 2 of the HDD

    push msg3
    call print
    mov ax, 0
    mov bx, 0x8C00  ; buffer source
    mov es, ax      ; ES <-0
    mov ch, 0x00    ; cylinder 0
    mov cl, 0x02    ; destination sector 2
    mov dh, 0x00    ; head 0
    mov dl, 0x80    ; drive number
    mov ah, 0x03    ; disk write
    mov al, 0x01    ; write 1 sector
    int 0x13
    jmp .key


print_hdd: ;print contents copied from hdd to ram until reaches 0

mov ecx, 0x1000

.start:
    mov ah, 0x0E
    mov al, [ecx]
    or al, 0
    je .end
    int 0x10
    add ecx, 0x01
    jmp .start

.end:
   retn


msg1: db "atmega32u4 demo", 0x0D, 0xA, 0
msg2: db "press 'l' to toggle onboard led", 0x0D, 0xA, 0
msg3: db ">> command sent !", 0x0D, 0xA, 0
newline: db 0x0D, 0xA, 0

   
times 510-($-$$) db 0x00
dw 0xAA55
dw 0x6568
dw 0x6C6C
dw 0x006F
times 506 db 0x00


