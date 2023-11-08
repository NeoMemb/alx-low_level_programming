#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 ********/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *smart;
	char *dog_name, *dOwner;
	int i, j, k;

	smart = malloc(sizeof(struct dog));
	if (smart == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(name + i) != '\0'; i++)
	{
	}
	for (j = 0; *(name + j) != '\0'; j++)
	{
	}
	dog_name = malloc(sizeof(char) * i + 1);
	if (dog_name == NULL)
	{
		free(smart);
		return (NULL);
	}
	dOwner = malloc(sizeof(char) * j + 1);
	if (dOwner == NULL)
	{
		free(dog_name);
		free(smart);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		*(dog_name + k) = *(name + k);

	}
	for (k = 0; k <= j; k++)
	{
		*(dOwner + k) = *(owner + k);
	}
	smart->name = name;
	smart->age = age;
	smart->owner = owner;

	return (smart);
}
