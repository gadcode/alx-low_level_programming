#include "main.h"

/**
 * _puts - Prints a string to the standard output
 * @str: The parameter
 *
 * Author: @gadcode
 * Date: 19/09/2023
 *
 * Return: The string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
