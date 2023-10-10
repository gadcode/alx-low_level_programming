#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer parameter
 *
 * Author: @gadcode
 * Date: 10/10/2023
 *
 * Description: frees dogs
 * Return: na
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
