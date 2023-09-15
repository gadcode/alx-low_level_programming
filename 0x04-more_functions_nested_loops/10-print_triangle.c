#include "main.h"

/**
* print_triangle - Prints a triangle
* @size: The size of he triangle
*
* Author: @gadcode
* Date: 15/09/2023
*
* Return: A triangle
*/

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < size - (a + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
