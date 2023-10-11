#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to a function that prints a name
 *
 * Author: @gadcode
 * Date: 11/10/2023
 *
 * Return: the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
