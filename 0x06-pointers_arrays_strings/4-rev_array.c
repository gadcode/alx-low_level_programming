#include "main.h"

/**
 * rev_array - reverses the content of an array of integers
 * @a: first parameter
 * @n: second parameter
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: The reversed array of integers
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
