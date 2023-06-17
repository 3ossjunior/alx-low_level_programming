#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: write a program that prints all possible
 * different combinations of two digits
 *
 * Return:Always  0(success)
 */

int main(void)
{
	int dig1 = 0, dig2;

	while (dig1 <= 99)
	{
		dig2 = dig1;
		while (dig2 <= 99)
		{
			if (dig2 != dig1)
			{
				putchar((dig1 / 10) + 48);
				putchar((dig1 % 10) + 48);
				putchar(' ');
				putchar((dig2 / 10) + 48);
				putchar((dig2 / 10) + 48);
				if (dig1 != 98 || dig2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');

	return (0);
}
