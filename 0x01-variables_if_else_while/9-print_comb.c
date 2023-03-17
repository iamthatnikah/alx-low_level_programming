#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers with commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}

	putchar(10);

	return (0);
}
