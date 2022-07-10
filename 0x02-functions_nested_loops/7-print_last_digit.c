#include "main.h"

/**
** print_last_digit - main entry
** @c: paramater for entry
** Return: Always nothing (success)
**/
int print_last_digit(int c)
{
	int last_digit;

	last_digit = (c % 10);
	_putchar(last_digit + '0');
	return (0);
}
