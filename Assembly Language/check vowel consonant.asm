.model small
.stack 100h
.data
vowel_msg db "vowel$"
cons_msg db "consonant$"
.code
main proc

mov ax,@data
mov ds,ax

mov ah,1
int 21h
mov bl,al

cmp bl,65
jl check_vowel
cmp bl,90
jg check_vowel
add bl,32

check_vowel:
cmp bl,97
je vowel
cmp bl,101
je vowel
cmp bl,105
je vowel
cmp bl,111
je vowel
cmp bl,117
je vowel

mov ah,9
lea dx,cons_msg
int 21h
jmp exit

vowel:
mov ah,9
lea dx,vowel_msg
int 21h

exit:
mov ah,4ch
int 21h
main endp
end main
