#include "main.h"
/**
 * _memcpy - copies n bytes from src to the memory area of dest
 *
 * @dest: destination of the bytes
 * @src: array to copy
 * @n: max number of bytes to copy
 *
 * Return: the processed dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;

	for (pos = 0; pos < n; pos++)
	{
		dest[pos] = src[pos];
	}

	return (dest);
}
