#include <stdio.h>
#include "dog.h"
/**
 * print_dog - printing the details of the dog
 * @d: pointer the dog
 * Description: This function prints the name, age
 * in float data type of the dog and it's owner
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	printf("Name: ");
	(d == NULL) ? (printf("(nil)\n")) : (printf("%s\n", d->name));
	printf("Age: %f\n", d->age);
	(d == NULL) ? (printf("(nil)\n")) : (printf("Owner: %s\n", d->owner));
}
