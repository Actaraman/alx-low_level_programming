#include <stdio.h>

/**
 **main - Entry point
 ** Return: Always 1 (success)
 **/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'q' || c == 'e')
	{

	}
	else
	{
	putchar(c);
	}
}
	putchar('\n');
	return (0);
}
