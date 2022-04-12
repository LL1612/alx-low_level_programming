#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes in character
 * Return: 1 if letter, lowercase or uppercase; Return: 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
