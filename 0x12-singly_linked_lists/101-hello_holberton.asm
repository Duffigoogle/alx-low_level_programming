global main

	extern printf

	;;
	;; Initialized data goes here
	;;
	SECTION .data
	hello		db "Hello, Holberton", 10, 0 ; const char *
	hello_len	equ $ - hello		 ; size_t
	;;
	;; Code goes here
	;;
	SECTION .text

	;;  int main ()
main:
	;; return printf(hello) - hello_len;
		lea	rdi, [hello]
		xor	rax, rax
		call	printf
		sub	rax, hello_len
