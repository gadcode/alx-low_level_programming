#include "main.h"

/**
* _isdigit - Checks whether a number is a digit
* @c: The parameter
*
* Author: @gadcode
* Date: 15/09/2023
*
* Return: 1 if digit, otherwise 0.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
