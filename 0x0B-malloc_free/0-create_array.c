#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creating array
 * @size: unsigned int type data
 * @c: char type data
 * Description: size is the number of byte in the
 * memory we locate for the array to-be created and
 * c is the char to pass to the array.
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (void *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);

}
