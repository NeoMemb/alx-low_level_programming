#include "main.h"
#include <math.h>
/**
 * binary_to_uint - convert binary to decimal
 * @b: char pass as binary
 * Return: binary as unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decm, zero, i, numb;

	zero = 0;
	decm = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (zero);
		}
		if (b[i] == '1')
		{
			numb = 1;
		}
		else
		{
			numb = 0;
		}
		decm = decm * 2 + numb;
	}

	return (decm);
}
