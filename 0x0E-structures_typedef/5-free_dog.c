#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free mem allocated to d
 * @d: pointer to dog_t
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	while (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
	}
	free(d);
}
