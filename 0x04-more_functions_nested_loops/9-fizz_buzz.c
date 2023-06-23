#include "main.h"

/**
 * main - prints numbers from 1 to 100
 * if numbers are multiple of 3 print Fizz
 * if numbers are multiple of 5 print Buzz
 * if numbers are multiple of 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

