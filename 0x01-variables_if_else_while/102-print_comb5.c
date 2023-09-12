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
		for (j = i; j < 100; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}

			if (i == 97 && j == 98)
			{
				break;
			}
		}
	}

	putchar('\n');

	return (0);
}
