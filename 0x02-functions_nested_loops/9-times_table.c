
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0,. ..
 * 0, 1, 2,. ..
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			if (i * j <= 9)
				_putchar(' ');
			else
			_putchar(((i * j) / 10) + 48);

			_putchar(((i * j) % 10) + 48);
		}
	_putchar('\n');
	}
}
