#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
	char za;

	for (za = 'z' ; za >= 'a' ; za--)
	{
		putchar(za);
	}
	putchar ('\n');
	return (0);
}
