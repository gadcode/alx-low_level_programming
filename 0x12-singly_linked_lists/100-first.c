#include <stdio.h>

void first_func(void) __attribute__((constructor));

/**
 * first_func - prints before the main function's execution
 *
 * Return: void.
 */

void first_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
