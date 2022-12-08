#include <stdio.h>
#include <unistd.h>
/**
 * main - write it out the quote
 * return: 1 if success
 */
int main(void) 
{
	write(2, "and that piece of art is useful"" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
