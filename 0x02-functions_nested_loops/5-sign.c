#include "main.h"

/**
 * print_sign - Prints 1 and '+' if 'n' is greater than zero
 * Prints 1 and '+' if 'n' is greater than zero
 * Prints 1 and '+' if 'n' is greater than zero
 * @n: The conditional value
 *
 * Author: @gadcode
 * Date: 13/09/2023
 *
 * Return: Always 0 (Success)
 *
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
