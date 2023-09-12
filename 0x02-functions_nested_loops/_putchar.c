#include <unistd.h>

/**
 * _putchar - writes the character 'c' to stdout
 * @c: Character to be printed
 *
 * Author: @gadcode
 * Date: 12/09/2023
 *
 * Return: 1, on success.
 * -1 on error, and errno is set appropriately.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
