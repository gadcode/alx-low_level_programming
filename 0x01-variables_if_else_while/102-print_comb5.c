#include <stdio.h>

/**
 * main - Prints all the possible combinations of two two-digit numbers.
 *
 * Author: @gadcode
 * Date: 12/09/2023
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
