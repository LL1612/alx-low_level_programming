#include "main.h"
/**
 * rev_string - a function that prints a reverse string
 * @s: str input
 *
 * Return: string in reverse
 **/
void rev_string(char *s)
{
char alp;
int i, j;

i = 0;
j = 0;

while (s[i] != '\0')

{
i++;
}

j = i - 1;

for (i = 0; i < j / 2; i++)
{
	alp = s[i];
	s[i] = s[j];
	s[j--] = alp;
}
}
