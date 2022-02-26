#include "main.h"
/**
 * _strcat - this function takes to strings.
 * Appending the second string to the end of the first one
 *
 * @dest: this is the destination string
 * @src: this is the string to be copied
 *
 * Return: returns the concatenated dest string
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, pos_src;

	for (len_dest = 0; dest[len_dest] != 0;)
		len_dest++;

	for (pos_src = 0; src[pos_src]; pos_src++)
	{
		dest[len_dest] = src[pos_src];
		len_dest++;
	}

	return (dest);
}
