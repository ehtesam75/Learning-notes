.model small
.stack 100h
.code

main proc

mov ah,1
int 21h
mov bl,al

mov ah,1
int 21h
mov bh,al

add bl,32
sub bh,32

mov ah,2
mov dl,10

int 21h
mov dl,13
int 21h

mov ah,2
mov dl,bl
int 21h

mov ah,2
mov dl,bh
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main


