#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints all possible diffrent combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstdigit = 0, secondDigit;
while (firstdigit <= 99)
{
secondDigit = firstdigit;
while (secondDigit <= 99)
{
if (secondDigit != firstdigit)
{
putchar((firstdigit / 10) + 48);
putchar((firstdigit % 10) + 48);
putchar(' ');
putchar((secondDigit / 10) + 48);
putchar((secondDigit % 10) + 48);
if (firstdigit != 98 || secondDigit != 99)
{
	putchar(',');
	putchar(' ');
}
}
secondDigit++;
}
firstdigit++;
}
putchar('\n');
return (0);
}

