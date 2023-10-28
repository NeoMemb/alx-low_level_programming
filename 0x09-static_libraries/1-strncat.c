#include "main.h"
#include <string.h>
/**
 * _strncat - cat n number of src to dest
 * @dest: destination of cat str
 * @src: str to be cat from
 * @n: number of char to cat
 * cat means "catenate"
 * str means string
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
