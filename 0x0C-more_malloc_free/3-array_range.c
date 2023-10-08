#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Author: @gadcode
 * Date: 08/10/2023
 *
 * Return: the pointer of the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		array[i] = min;

	return (array);
}
