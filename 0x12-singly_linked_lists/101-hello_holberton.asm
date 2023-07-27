	extern	printf		; The C function, to be called

		section .data
message:  	db "Hello, Holberton,", 0   	; Null-terminated string with the message
format: 	db "%s", 10, 0             	; Format string for printf, "\n",'0'

		section .text

		global main			; The stardard gcc entry point
main:
		push rbp

    		mov rdi,format  	; The first argument (format) is the format string
		mov rsi,message   	; The second argument (string) is the message
    		mov rax,0     		; Clear RAX register for the varargs (no floating-point args)
    		call printf		; Call C function

    		pop rbp      		; restore stack

		mov rax,0    		; normal, no error, return value
		ret      		; return
