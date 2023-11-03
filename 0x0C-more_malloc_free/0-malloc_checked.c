#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocating memory for a pointer
 * @b: int data type
 * Description: malloc unsigned integer and
 * exit pid with status98, if NULL.
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
