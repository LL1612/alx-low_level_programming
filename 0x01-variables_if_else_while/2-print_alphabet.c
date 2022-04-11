#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 afetr printing the function
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
		putchar('\n');
	}

	return (0);
}
