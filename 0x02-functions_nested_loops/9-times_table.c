#include "main.h"

/**
** times_table - main entry
** Return: Always nothing (success)
**/
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if ((a * b) < 9)
			{
				write(a * b);
				_putchar(',');
				_putchar('  ');
			}
			else
			{
				write(a * b);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
