#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * a square matrix of integers
 *
 * @a: array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n",  sum2);
}
