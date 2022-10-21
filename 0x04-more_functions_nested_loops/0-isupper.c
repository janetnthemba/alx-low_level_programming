#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks if uppercase
 *@c: character to check
 *Return: gives 1 or 0
 *
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
