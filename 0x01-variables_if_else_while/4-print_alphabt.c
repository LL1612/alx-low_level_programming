#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
	char ad;
		for (ad = 'a' ; ad <= 'd' ; ad++)
		{
		if (ad == 'q')
		continue;
		
		else if (ad == 'e')
		continue;
	
		putchar (ad);
		}

putchar ('\n');
return (0);
}
