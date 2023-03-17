#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
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
		a++;
	}

	putchar(10);

	return (0);
}
