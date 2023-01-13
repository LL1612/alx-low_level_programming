#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 **_calloc - allocates memory for an array
 * @nmemb: array of elements
 * @size: the size of the memory to print
 *
 * Return:Always succses
 **/

void *_calloc(unsigned int nmemb, unsigned int size);
{
char *ptr;
if(nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
