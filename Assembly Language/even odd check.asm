.model small
.stack 100h
.data
even_msg db "even$"
odd_msg db "odd$"
.code
main proc

mov ax,@data
mov ds,ax

mov ah,1
int 21h
sub al,48

and al,1
cmp al,0
je even_num

mov ah,9
lea dx,odd_msg
int 21h
jmp exit

even_num:
mov ah,9
lea dx,even_msg
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
