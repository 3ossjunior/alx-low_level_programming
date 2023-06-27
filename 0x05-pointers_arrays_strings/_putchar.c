#include <unistd.h>
/***
 * _putchar - writes the charachter c to stdout
 * @c: the character to print
 *
 * Return: on succes 1.
 * on error, -1 is reutrned, and errno is set appropiately
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
