#include "main.h"

/**
 * malloc_checked - prints a string
 * @b:number of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == null)
{
exit(98);
}
return (p);
}
