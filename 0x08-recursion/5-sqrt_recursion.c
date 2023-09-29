#include "main.h"

/**
 * square_root - finds the natural square root
 * @x: number
 * @y: incrementor
 *
 * Author: @gadcode
 * Date: 29/09/2023
 *
 * Return: the number found.
 */

int square_root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (square_root(x + 1, y));
	}
}

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
	int num = 1;

	return (square_root(num, n));
}
