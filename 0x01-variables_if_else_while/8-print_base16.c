#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char letter = 'a';
	int num = 0;

	while (letter <= 'f')
	{
		while (num < 10)
		{
			putchar('0' + num);
			num++;
		}
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
