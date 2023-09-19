#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TARGET_SUM 277
#define PASSWORD_LENGTH 4

/**
 * main - generates keygen
 * Return: Always 0.
 */

int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 277)
	{
		r = rand() % 128;
		if ((c + r) > 277)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (277 - c));
	return (0);
}
