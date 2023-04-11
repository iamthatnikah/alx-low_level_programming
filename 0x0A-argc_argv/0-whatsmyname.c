#include <stdio.h>
/**
 * main - This program that prints its name, followed by a new line.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
