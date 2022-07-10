#include <ctype.h>
#include "main.h"

/**
** _isalpha - main entry
** @c: paramater for entry
** Return: Always nothing (success)
**/
int _isalpha(int c);
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
