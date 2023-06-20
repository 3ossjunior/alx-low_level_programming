
#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 *                      the alphabet a - z
 *
*/

void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 1; i <= 10; i++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
}

