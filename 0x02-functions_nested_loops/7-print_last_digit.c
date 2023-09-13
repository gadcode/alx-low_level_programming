#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: the argument passed to the function.
 *
 * Author: @gadcode
 * Date: 13/09/2023
 *
 * Return: The value of the last digit
 *
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);
	return (last_digit);
}
