#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the given number
 *
 * Author: @gadcode
 * Date: 29/09/2023
 *
 * Return: -1, if 'n' does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (((n * n) % 2) != 0)
	{
		return (-1);
	}

	return (_sqrt_recursion(n * n));
}
