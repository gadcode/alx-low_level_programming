#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Print all single digit numbers of
 * base 10, starting from 0.
 *
 */
int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
