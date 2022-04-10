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

	srand(time(0));
	n = rand() - RAND_MAX /2;
	printf("Last digit of ");
	scanf("%d", &n);
	lastDigit = n % 10;
	if (n > 5)
		printf("%d and is greater than 5\n", lastDigit)
			else if (n < 6, n != 0)
			printf("%d and is less than 6 and not 0\n", lastDigit);
	else (n == 0)
		printf("%d is 0\n", lastDigit)
			return (0);
}
