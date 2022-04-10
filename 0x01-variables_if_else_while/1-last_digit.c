#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * and_is_greater_than_5 - if last digit is greater than 5
 * and_is_0 - if last digit is 0
 * and_is_less_than_6_and_not_0 - if last digit is lees than 6 and not 0
 *
 * Return: 0 after printing the function
 */
int main(void)
{
	int n;
       int l;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	l = n % 10;

if (l > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, l);
}
else if (l == 0)
{
printf("Last digit of %i is %i and is 0\n", n, l);
}
else
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
}

return (0);
}
