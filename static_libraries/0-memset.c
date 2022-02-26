#include "main.h"
/**
 * _memset - fills the first n bytes of the memory pointed by s
 * with the value of b
 *
 * @s: string to be processed
 * @b: overwrite value
 * @n: number of bytes to overwrite
 *
 * Return: processed string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pos;

	for (pos = 0; pos < n; pos++)
	{
		s[pos] = b;
	}

	return (s);
}
