#include "main.h"


/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string parameter
 *
 * Author: @gadcode
 * Date: 29/09/2023
 *
 * Return: A string, followed by a new line.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
