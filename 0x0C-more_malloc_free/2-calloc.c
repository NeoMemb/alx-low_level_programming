#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate byte for each element
 * @nmemb: unsigned int data type
 * @size: unsigned int data type
 * Description: nmemb is element in the array
 * size in byte of each element in array. if
 * nmemb or size is 0, NULL is returned
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);

	return (ptr);
}
