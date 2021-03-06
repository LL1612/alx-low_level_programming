#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * and_is_greater_than_5 - if last digit is greater than 5
 * and_is_0 - if last digit is 0
 * and_is_less_than_6_and_not_0 - if last digit is less than 6 and not 0
 *
 * Return: 0 after printing the function
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
	printf("Last digit of %i is %d and is greater than 5\n", n, n % 10);
}

else if (n % 10 == 0)
{
	printf("Last digit of %i is %d and is 0\n", n, n % 10);
}

else
{ printf("Last digit of %i is %d and is less than 6 and not 0\n", n, n % 10);
}

return (0);
}
