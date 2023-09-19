#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: The parameter
 *
 * Author: @gadcode
 * Date: 19/09/2023
 *
 * Return: A reversed string.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
