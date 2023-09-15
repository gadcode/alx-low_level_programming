#include "main.h"

/**
 * print_numbers - Prints, numbers from 0 to 9
 *
 * Author: @gadcode
 * Date: 15/09/2023
 *
 * Return: Print numbers (48 to 57) - ASCII
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		_putchar(num);

	_putchar('\n');
}
