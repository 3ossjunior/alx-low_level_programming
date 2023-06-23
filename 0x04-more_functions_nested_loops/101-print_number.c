#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: the integer to be printed
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;

	}
	if ((num / 10) > 0)
		print_number(num / 10);
		_putchar((num % 10) + 48);
}


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	void print_number(n);

	return (0);
}

