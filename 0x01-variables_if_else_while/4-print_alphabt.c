#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
	char ad;
	char fp;
	char rz;

		for (ad = 'a' ; ad <= 'd' ; ad++) {
		       for (fp = 'f' ; <= 'p'; fp++){
		       for (rz = 'r' ; <= 'z'; rz++){
		putchar (ad,fp,rz);
		       }
		       }
		}

putchar ('\n');
return (0);
}
