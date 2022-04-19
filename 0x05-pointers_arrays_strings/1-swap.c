#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: interger on
 * @b: intergr two
 *
 * Return: always zero
 */

void swap_int(int *a, int *b)
{
	int f;
		f = *a;
		*a = *b;
	*b = f;
}
