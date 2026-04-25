.model small
.stack 100h
.data
.code
main proc

mov ah,1
int 21h
mov bl,al

mov ah,1
int 21h
mov bh,al

sub bl,48
sub bh,48

mov al,bl
mul bh
aam
add ax,3030h

mov bl,ah
mov bh,al

mov ah,2
cmp bl,48
je one_digit
mov dl,bl
int 21h

one_digit:
mov dl,bh
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
