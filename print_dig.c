#include "main.h"

/**
 * print_dig_call - collects int value and calls function to print.
 * @arg: argument value here int.
 *
 * Return: n length of int.
 */
int print_dig_call(va_list arg)
{
	long int k = va_arg(arg, int);
	long int n;

	n = print_dig(k, 0);

	return (n);
}


/**
 * print_dig - prints signed integers.
 * @arg: argument value here int.
 *
 * Return: n length of int.
 */
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


/**
 * print_dig_call_u - collects int value and calls function to print.
 * @arg: argument value here int.
 *
 * Return: n length of int.
 */
int print_dig_call_u(va_list arg)
{
	long int k = va_arg(arg, int);
	long int n;

	n = print_dig_u(k, 0);

	return (n);
}


/**
 * print_dig_call_u - prints unsigned integers.
 * @arg: argument value here int.
 *
 * Return: n length of int.
 */
int print_dig_u(long int k, long int n)
{
	if (k < 0)
	{
		k = -k;
		n++;
	}

	if (k / 10)
	{
		n = print_dig_u(k / 10, n++);
	}
	_putchar(k % 10 + '0');
	n++;

	return (n);
}
