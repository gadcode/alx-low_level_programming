#include <stdio.h>

/**
* main - Entry point
*
* Author: @gadcode
* Date: 15/09/2023
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int nums;

	for (nums = 1; nums < 100; nums++)
	{
		if ((nums % 3 == 0) && (nums % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (nums % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (nums % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", nums);
		}
	}
	printf("Buzz");
	printf("\n");

	return (0);
}
