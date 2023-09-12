#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Author: @gadcode
 * Date: 12/09/2023
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	int first_char = 'a';
	int last_char = 'z';

	while (first_char <= last_char)
	{
		_putchar(first_char);
		first_char++;
	}

	_putchar('\n');
}
