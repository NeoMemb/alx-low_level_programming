#include "main.h"

/**
* flip_bits - This returns the number of bits you would
* need to flip.
* @n: the number to flip from of unsigned int data type
* @m: the number to flip to of unsigned int data type
*
* Return: 1 if it worked, or -1 if fail
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int caret;
	unsigned int count;

	caret = n ^ m;
	count = 0;
	while (caret)
	{
		count += caret & 1;
		caret >>= 1;
	}

	return (count);
}
