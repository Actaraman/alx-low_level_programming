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
	putchar("%c ", c);
}

}
