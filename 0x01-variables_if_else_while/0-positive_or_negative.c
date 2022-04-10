#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*
* main - entry point
* is_positive -check if number is greater than 0
* is_zero - check is number equals 0
* is_negative - check if number is less than 0
*/
int main(void)
{
int n;

srand(time(0));
n= rand() - RAND_MAX / 2;
printf("input a number :");
scanf("%d", &n);
if (n > 0)
printf("%d is a positive number \n", n);
else if(n < 0)
printf("%d is a negative number \n", n);
else
printf("%d is zero \n", n);
return (0);
}
