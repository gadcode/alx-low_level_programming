#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Author: @gadcode
 * Date: 13/09/2023
 *
 * Return: The 9 times table.
 *
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j <= 9; j++)
		{
			result = (i * j);

			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((result % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
