#include "main.h"

/**
* print_line - Draws straight line in the terminal
* @n: The number of times the character '_' should be printed
*
* Author: @gadcode
* Date: 15/09/2023
*
* Return: The straight line
*/

void print_line(int n)
{
	int num = 1;

	while (num <= n)
	{
		_putchar(95);
		num++;
	}

	_putchar('\n');
}
