#include "main.h"

/**
 *
 *  * print_rev - a function that prints a string, in reverse
 *
 *   * fcounter is to first count to end, n is to count back
 *
 *    * @s: str input
 *
 *     * Return: string in reverse
 *
 *      */
void rev_string(char *s)
{
char alp;
int i;

i = 0;

while (s[i] != '\0')

{
i++;
}

i = i - 1;

for (i = 0; i < i /2; i++)
{
	alp = s[i];
	s[i] = s[i];
	s[i--] = alp;
}
}
