#include "main.h"

/**
* print_diagonal - Draws adiagonal line on the terminal
* @n: Numbers of times to diagonal will be printed
*
* Author: @gadcode
* Date:15/09/2023
*
* Return: Diagonal line
*/

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
