#include "main.h"

int print_dig_call(va_list arg)
{
	long int k = va_arg(arg, int);
	long int n;

	n = print_dig (k, 0);

	return (n);
}

int print_dig(long int k, long int n)
{
	if (k < 0)
	{
		_putchar('-');
		k = -k;
		n++;
	}
	if (k / 10)
	{
		n = print_dig(k / 10, n++);
	}
	_putchar(k % 10 + '0');
	n++;

	return (n);
}
