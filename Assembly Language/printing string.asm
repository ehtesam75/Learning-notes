.model small
.stack 100h
.data
    name_msg db 'Your name: Ehtesam Zunnuryn$', 
    roll_msg db 'Your roll: 30$', 
    batch_msg db 'Your batch: D-83$', 
.code
main proc
    mov ax, @data
    mov ds, ax
    mov ah, 09h
    lea dx, name_msg
    int 21h
    
    mov ah, 2
    mov dl, 10
    int 21h
    mov dl, 13
    int 21h

    mov ah, 9
    lea dx, roll_msg
    int 21h
    
    mov ah, 2
    mov dl, 10
    int 21h
    mov dl, 13
    int 21h
    mov ah, 9
    lea dx, batch_msg
    int 21h

exit:
mov ax, 4Ch
int 21h
main endp
end main
