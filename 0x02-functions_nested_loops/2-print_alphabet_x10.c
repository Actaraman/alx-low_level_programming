#include "main.h"

/**
** print_alphabet_x10 - Entry point
** Return: Always nothing (success)
**/
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}

}
