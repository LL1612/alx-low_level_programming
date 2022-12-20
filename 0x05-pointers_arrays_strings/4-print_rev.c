#include "main.h"
/**
 * print_rev - print string
 * @s : str to print
 *
 * Return: void if awnser is ok
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
