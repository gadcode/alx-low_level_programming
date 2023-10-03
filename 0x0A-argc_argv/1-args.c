#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Author: @gadcode
 * Date: 03/10/2023
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
