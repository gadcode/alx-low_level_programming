#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array
 * @size: the size of array
 * @action: pointer to the function to be executed
 *
 * Author: @gadcode
 * Date: 11/10/2023
 *
 * Return: the iterated array.
 */

void array_iterator(int *array, size_t size, void (*action))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
