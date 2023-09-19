#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TARGET_SUM 277
#define PASSWORD_LENGTH 4

/**
 * generateRandomDigit - generates a digit randomly.
 * Return: Random value modulus 10
 */

int generatedRandomDigit()
{
	return rand() % 10;
}

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	srand(time(NULL));

	int password[PASSWORD_LENGTH];
	int currentSum = 0;

	for (int i = 0; i < PASSWORD_LENGTH - 1; i++)
	{
		password[i] = generateRandomDigit();
		currentSum += password[i];
	}

	password[PASSWORD_LENGTH - 1] = TARGET_SUM -currentSum;

	print("%d%d%d%d\n", password[0], password[1], password[2], password[3]);

	return (0);
}
