#include "main.h"

/**
 * factorial - returns he factorial of a given number
 * @n: the given number
 *
 * Author: @gadcode
 * Date: 29/09/2023
 *
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
