#include "main.h"

/**
 * _isdigit - check for a digit through 0 to 9
 *
 * @c: input of the digit
 *
 * Return: 1 if it's a digit, 0 is not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
