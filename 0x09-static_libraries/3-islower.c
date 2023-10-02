#include "main.h"

/**
 * _islower - conditional returns 1 or 0
 * @c: the parameter used.
 *
 * Return: Always 0 (Success).
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
