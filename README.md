# _printf
----------------------------------------------------------
**The _printf function is a custom implementation of the C programming function printf. It returns the number of characters printed and writes the output to stdout. It includes the conversion specifiers : c, s, %, d, x, X, u, o, rot13 and i.**
-----------------------------------------------------------
-------------------------------------------------------------

==***Project Requirements***==

All files will be compiled on Ubuntu 14.04 LTS

Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

Your code should use the Betty style

You are not allowed to use global variables

Authorized functions and macros:

write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)

va_start (man 3 va_start)

va_end (man 3 va_end)

va_copy (man 3 va_copy)

va_arg (man 3 va_arg)

__Files and functions__
-------------------------------------------
- [x] _putchar.c:

- [x] int _putchar(char c) - function to print char

- [x] _strlen.c:

- [x] int _strlen(char *string) - gets string length

- [x] get_bin.c:

- [x] int _bin(va_list bin) - function to print binary

- [x] get_char.c:

- [x] int ch(va_list character) - function to return char

- [x] get_hex.c:

- [x] int _hex_str(unsigned int n, unsigned int hex, char alpha) - converts the number from base 10 to hex

- [x] get_int.c:

- [x] int _int(va_list integ) - function to print integers

- [x] get_oct.c:

- [x] int _oct(va_list octo) - function to print octal

- [x] get_rot13.c:

- [x] int _rot13(va_list rot) - prints rot13 version

- [x] get_str.c:

- [x] int str(va_list *s) - prints string to stdout

- [x] get_unsigned.c:

- [x] int _ui(va_list unsign) - unsigned int print to stdout

- [x] main.h: header file

- [x] _printf.c: main custom _printf function

- [x] int print_op(const char *format, fmt_t *print_arr, va_list list) - function to check which specifier to print

- [x] int _printf(const char *format, ...) - prints output according to format

## Notes

Our program does not handle buffer handling, flag characters, field width, precision, or length modifiers.

__***Authors***__
---------------------------------------------
Jeffrey DAVAKAN and Eudoxie ABOUTA