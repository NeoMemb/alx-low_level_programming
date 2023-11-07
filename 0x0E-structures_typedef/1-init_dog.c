#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - details of dog
 * @d: dog that uses the data types structured in dog
 * @name: pointer to the name of dog
 * @age: float data type
 * @owner: pointer to the owner of dog
 * Description: name is tge name of the dog, age is the age
 * of the dog, owner is the name of it's owner
 *
 * Return: NULL, if d is empty
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
