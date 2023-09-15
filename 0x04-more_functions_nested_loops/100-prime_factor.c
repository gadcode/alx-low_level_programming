#include <stdio.h>

/**
* largest_prime_factor - Finds the largest prime factor of a number.
* @n: The number to find the largest prime factor of.
*
* Author: @gadcode
* Date: 15/09/2023
* Time: 11:16 PM
*
* Return: The largest prime factor of n.
*/

long largest_prime_factor(long n)
{
	long largest = -1;
	long i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 1)
		largest = n;

	return (largest);
}
