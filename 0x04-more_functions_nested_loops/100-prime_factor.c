#include <stdio.h>
#include <math.h>

/**
* largest_prime_factor - Finds the largest prime factor of a number.
*
* Author: @gadcode
* Date: 15/09/2023
* Time: 11:16 PM
*
* Return: The largest prime factor of n.
*/

void largest_prime_factor(void)
{
	long num = 612852475143;
	long largestPrime = -1;
	long i;

	while (num % 2 == 0)
	{
		largestPrime = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largestPrime = i;
			num /= i;
		}
	}

	if (num > 1)
		largestPrime = num;

	printf("%ld\n", largestPrime);
}
