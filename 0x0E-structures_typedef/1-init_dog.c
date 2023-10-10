#include "dog.h"

/**
 * init_dog - a function with 4 arguments
 * @d: structure pointer
 * @name: pointer character
 * @age: float type argument
 * @owner: pointer type character
 *
 * Author: @gadcode
 * Date: 10/10/2023
 *
 * Description: initialize a variable of type void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
