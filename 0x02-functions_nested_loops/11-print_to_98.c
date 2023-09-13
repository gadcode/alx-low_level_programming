#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The starting point
 *
 * Author: @gadcode
 * Date: 13/09/2023
 *
 * Return: All natural numbers from n to 98.
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}

	printf("98\n");
}
