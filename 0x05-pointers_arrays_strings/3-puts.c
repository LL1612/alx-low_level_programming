#include "main.h"
/**
 * _puts - print string
 * @str : pointer to int that will be changed
 * Return: always zero
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
