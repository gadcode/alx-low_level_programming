#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The parameter
 *
 * Author: @gadcode
 * Date: 19/09/2023
 *
 * Return: Characters of the string halved.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	for (i != 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
