#include "main.h"

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Author: @gadcode
 * Date: 03/10/2023
 *
 * Returrn: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
