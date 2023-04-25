#include "main.h"

void print_char(va_list arg)
{
	char c = va_arg(arg, int);
	_putchar(c);
}

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
