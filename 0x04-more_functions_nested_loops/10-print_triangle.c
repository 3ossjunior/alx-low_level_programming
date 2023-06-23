#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size:  is the size of the triangle
*/

void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = (size - 1); j >= 0; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
