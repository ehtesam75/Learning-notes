.model small
.stack 100h
.data
msg db "division by 0$"
.code
main proc

mov ax,@data
mov ds,ax

mov ah,1
int 21h
mov bl,al

mov ah,1
int 21h
mov bh,al

sub bl,48
sub bh,48

cmp bh,0
je invalid

mov ax,0
mov al,bl
div bh

add al,48
add ah,48

mov bl,al
mov bh,ah

mov ah,2
mov dl,bl
int 21h

mov dl,32
int 21h

mov dl,bh
int 21h
jmp exit

invalid:
mov ah,9
lea dx,msg
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
