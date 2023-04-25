#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* structures */
typedef struct
{
	char *c;
	void (*f_pr)(va_list arg);
} print_d;

/* function prototypes */
int printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list arg);
void print_string(va_list arg);

#endif /* MAIN_H */
