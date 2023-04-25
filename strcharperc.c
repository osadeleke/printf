#include "main.h"

/**
 * print_char - print char
 * @arg: argument
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
}

/**
 * print_string - print string
 * @arg: argument
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
