#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase and return 0 otherwise
 * @c: character
 * Return: 0 for uppercase, 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
