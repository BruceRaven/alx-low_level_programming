#include <stdio.h>

/**
 * main - print all combo single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			pitchar(' ');
		}
	putchar('\n');
	return (0);
}
