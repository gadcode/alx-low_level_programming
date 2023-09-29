#include "main.h"

/**
 * prime_found - found prime number
 * @x: dividend
 * @y: divider
 *
 * Return: 1, if the input integer is prime number, otherwise 0.
 */

int prime_found(int x, int y)
{
	if (y != 1)
	{
		if (x == y)
		{
			return (1);
		}
		else if (y % x == 0 || y <= 1)
		{
			return (0);
		}
		else
		{
			return (prime_found(x + 1, y));
		}
	}
	return (0);
}

/**
 * is_prime_number - shows if number is a prime number
 * @n: the given number
 *
 * Author: @gadcode
 * Date: 29/09/2023
 *
 * Return: if the input integer is prime or not
 */

int is_prime_number(int n)
{
	int num = 2;

	return (prime_found(num, n));
}
