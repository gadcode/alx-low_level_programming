#include "main.h"

/**
 * print_most_numbers - Prints, numbers from 0 to 9; except 2 and 4.
 *
 * Author: @gadcode
 * Date: 15/09/2023
 *
 * Return: Print integers (01356789)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}

	_putchar('\n');
}
