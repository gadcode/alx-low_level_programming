#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 10)
	{
		putchar('0' + num);
		num++;
		if (num == 10)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
