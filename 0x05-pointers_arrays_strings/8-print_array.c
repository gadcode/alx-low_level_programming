#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints 'n' elements of an array integers
 * @a: int type array pointer
 * @n: int type pointer
 *
 * Author: @gadcode
 * Date: 19/09/2023
 *
 * Return: elements of an array integers.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
