#include "main.h"

/**
** print_alphabet - Entry point
** Return: Always nothing (success)
**/
void print_alphabet(void)
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
