#include <ctype.h>
#include "main.h"

/**
** _islower - main entry
** @c: paramater for entry
** Return: Always nothing (success)
**/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
