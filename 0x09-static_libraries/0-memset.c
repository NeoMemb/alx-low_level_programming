#include "main.h"
#include <stdio.h>
/**
 * *_memset - return pointer memory
 * @s:
 * @b:
 * @n:
 * Return: a pointer memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s; // Create a pointer to the start of the memory area

    // Fill the first n bytes of the memory area with the constant byte b
    for (unsigned int i = 0; i < n; ++i) {
        *ptr = b;
        ptr++;
    }

    return s; // Return a pointer to the memory area s
              //
}
