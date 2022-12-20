#include "main.h"
/**
 * print_rev - print string
 * len is to count to end
 * @s : str input 
 * Return: string in reverse
 */

void print_rev(char *s);
{
int len = 0;
int i, n, len;
for (i = 0; s[i] != '\0'; i++)
{
	len++;
}
for (n = (len -1); n >= 0; n--)
{
	_putchar(s[n]);
}
_putchar('\n');
}
