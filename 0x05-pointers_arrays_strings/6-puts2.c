#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The parameter
 *
 * Name: @gadcode
 * Date: 19/09/2023
 *
 * Return: The characters of the argument
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
