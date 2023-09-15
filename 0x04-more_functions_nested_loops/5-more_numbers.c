#include "main.h"

/**
* more_numbers - Prints numbers (0-14) ten times
*
* Author: @gadcode
* Date: 15/09/2023
*
* Return: The numbers repeated ten times
*/

void more_numbers(void)
{
	int mul, num;

	for (mul = 0; mul <= 9; mul++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
