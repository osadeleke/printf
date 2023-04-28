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
	int i, j, no_c = 0;

	print_d data[] = {
		{"c", print_char}, {"s", print_string}, {"%", print_perc},
		{"d", print_dig_call}, {"u", print_dig_call_u}, {"i", print_dig_call}
	}; /** add print dig call and all after **/
	va_start(arg, format);
	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			no_c++;
		}
		else
		{
			if (!format[i + 1] || format[i + 1] == ' ')
				return (-1);
			for (j = 0; j < 6; j++) /** changed j < 3 to j < 6 **/
			{
				if (format[i + 1] == *(data[j].c))
					break;
			}
			if (j < 6) /** changed j < 3 to j < 6 **/
			{
				no_c = no_c + data[j].f_pr(arg);
				i++;
			}
			else
			{
				_putchar(format[i]);
				no_c++;
			}
		}
	}
	va_end(arg);
	return (no_c);
}
