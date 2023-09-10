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
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	return (0);
}
