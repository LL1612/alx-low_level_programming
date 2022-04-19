#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 *
 * Return: Success 1
 * On error, -1 is returned, and error is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
