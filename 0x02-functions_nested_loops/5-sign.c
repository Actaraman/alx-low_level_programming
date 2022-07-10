#include <ctype.h>
#include "main.h"

/**
** print_sign - main entry
** @n: paramater for entry
** Return: Always nothing (success)
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('-');
		_putchar(' ');
		return (0);
	}
	else
	{
		return (-1);
	}
}
