#include "main.h"

/**
 * swap_int - swaps two integers' place
 * @a: The first parameter
 * @b: The second parameter
 *
 * Author: @gadcode
 * Date: 19/09/2023
 *
 * Return: The swapped integers
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
