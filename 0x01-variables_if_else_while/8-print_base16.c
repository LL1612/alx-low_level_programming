#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 aftre printing the function
 */
int main(void)
{
	int n;
	char a;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (a = 'a' ; a <= 'f' ; a++)
	{
		putchar(a);
	}

	putchar ('\n');
	return (0);
}
