#include "main.h"

/**
** print_alphabet - Entry point
** Return: Always nothing (success)
**/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
