#include "main.h"

/**
 * print_address - prints address of inputs in hexa format
 * @l: va list
 * @f: pointer to the func
 * Return: num of char
 */

int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
