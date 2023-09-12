#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10.
 *
 * Author: @gadcode
 * Date: 12/09/2023
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
