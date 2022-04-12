#include "main.h"
/**
 * print_sign - prints character
 * @m: rep character
 * Return: 1 if letter,lower or uppercase; 0 for otherwise
 */
int print_sign(int m)
{
	if (m > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (m == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
