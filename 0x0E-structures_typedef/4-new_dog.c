#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creating a new dog
 * @name: pointer to char data type
 * @age: float data type
 * @owner: pointer to char data type
 * Description: This function creates the name of a dog profile,
 * with name as dog's name, age as dog's age, owner as the name of the owner.
 *
 * Return: dog_t
 */
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
