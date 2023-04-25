#include "main.h"

/**
 * _printf - function to replicate printf
 * @format: format to be printed.
 *
 * Return: 0 if successful.
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i;

	print_d data[] = {
		{"c", print_char},
		{"s", print_string}
	};

	va_start(arg, format);

	i = 0;
	while (format && *(format + i))
	{
		if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			data[0].f_pr(arg);
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			data[1].f_pr(arg);
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == '%')
		{
			_putchar('%');
			i++;
		}
		else
		{
			_putchar(*(format + i));
		}
		i++;
	}

	va_end(arg);
	return (i - 1);
}
