#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
int num1, num2, num3;

for (num1 = 0; num1 < 8; num1++)
{
for (num2 = 0; num2 < 9; num2++)
{
for (num3 = 0; num3 < 10; num3++)
{
putchar((num1 % 10) + '0');
putchar((num2 % 10) + '0');
putchar((num3 % 10) + '0');
if (num1 != num2 && num2 != num3 && num3 != num1)
	continue;
putchar(',');
putchar(' ');
}}}
putchar('\n');
return (0);
}
