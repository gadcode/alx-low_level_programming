#include <stdio.h>

/**
 * main - Enrry point
 *
 * Return: Always 0 (Success)
 *
 * Task: Print alphabets in lowercase and uppercase
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
