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

cmp bl,bh
jae sub_ok
xchg bl,bh

sub_ok:
sub bl,bh
add bl,48

mov ah,2
mov dl,bl
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
