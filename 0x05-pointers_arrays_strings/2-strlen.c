#include "main.h"

/**
 * _strlen - function returns the length of a string
 *  
 * Return: Always zero
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
