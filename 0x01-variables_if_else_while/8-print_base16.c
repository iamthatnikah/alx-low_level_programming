#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 48)
	{
		if (a < 10)
			putchar(a + '0');
		else if (a > 41)
			putchar(a - 10 + 'A');
		a++;
	}
	putchar(10);

	return (0);
}
