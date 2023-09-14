#include "main.h"

/**
 * largest_number - Returns the largest of 3 numbers.
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b))
	{
		largest = a;
	}
	else if ((b > a && a > c) || (b > c && c > a))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
