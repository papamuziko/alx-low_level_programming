#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src to
 * the buffer pointed to by dest
 *
 * @dest: destination of buffer content
 * @src: buffer containing string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int pos;

	for (pos = 0; src[pos] != 0; pos++)
	{
		dest[pos] = src[pos];
	}
	if (dest[pos] != 0)
		dest[pos] = 0;

	return (dest);
}
