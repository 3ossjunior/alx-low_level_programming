#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s:string input parameter
 *
 * Return: converted integer from string
 */

int _Atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do (
			if (*s == '-')
			sign *= -1;
			else if (*s

