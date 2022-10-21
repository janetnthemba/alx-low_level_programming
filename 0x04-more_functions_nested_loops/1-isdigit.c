#include "main.h"

/**
 *_isdigit - determine if digit
 *@c: character to determine
 * Return: gives boolean
 */

int _isdigit(int c)
{
	int y = 0;
	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
