.model small
.stack 100h
.data
.code
main proc

mov ah,1
int 21h
sub al,48

mov ch,0
mov cl,al
mov bl,0
mov al,1

sum_loop:
add bl,al
inc al
loop sum_loop

mov al,bl
aam
add ax,3030h

mov bl,ah
mov bh,al

mov ah,2
cmp bl,48
je print_last
mov dl,bl
int 21h

print_last:
mov dl,bh
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
