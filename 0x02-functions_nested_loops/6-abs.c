#include "main.h"
#include <stdlib.h>

/**
 * _abs - Computes the absolute value of an integer
 * @num: the return value
 *
 * Author: @gadcode
 * Date: 13/09/2023
 *
 * Return: The absolute value.
 *
 */
int _abs(int num)
{
	if (num < 0)
		return (abs(num));
	else if (num > 0)
		return (num);
	else
		return (0);

	return (0);
}

