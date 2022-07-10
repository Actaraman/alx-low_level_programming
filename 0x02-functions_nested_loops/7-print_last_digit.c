#include "main.h"

/**
** print_last_digit - main entry
** @c: paramater for entry
** Return: Always nothing (success)
**/
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		last_digit = -1 * (c % 10);
	}
	else
	{
	last_digit = (c % 10);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
