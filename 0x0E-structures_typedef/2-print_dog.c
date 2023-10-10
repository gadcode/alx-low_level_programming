#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the structure pointer
 *
 * Author: @gadcode
 * Date: 10/10/2023
 *
 * Description: prints a struct
 * Return: name
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
