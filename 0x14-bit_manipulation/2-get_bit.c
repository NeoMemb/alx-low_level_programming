#include "main.h"

/**
* get_bit - This returns the value of a bit at a given index.
* @n: the number
* @index: is the index, starting from 0
*
* Return: The value of the bit at index or -1 if failed
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
