#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: 0 Always (Success)
*/

void print_numbers(void)
{
	int i, num = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}

