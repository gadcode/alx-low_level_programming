#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: string of 0 and 1 chars
 * @index: index of the bit to be gotten
 *
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
