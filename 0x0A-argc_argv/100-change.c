#include "main.h"

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argument count
 * @argv: argument vector of values
 *
 * Author: @gadcode
 * Date: 03/10/2023
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	it cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}

	printf("%d\n", ncoins);
	return (0);
}
