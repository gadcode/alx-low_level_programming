#include "funtion_pointers.h"

/**
 * int_index - searches for an intetger
 * @array: array to search through
 * @size: size of array
 * @cmp: function pointer
 *
 * Author: @gadcode
 * Date: 12/10/2023
 *
 * Return: first index for which cmp does not return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
