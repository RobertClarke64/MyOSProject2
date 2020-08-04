[org 0x7c00]
mov ah, 0x0e

; having solved the memory offset problem with 'org', this is now the correct answer
mov al, [the_secret]
int 0x10

jmp $ ; infinite loop

the_secret:
	db "X"
	
; zero padding and magic bios number
times 510-($-$$) db 0
dw 0xaa55