#include "main.h"
/**
 * _strncat - takes two strings and an n as parameters
 * and concatenates the src string to dest string but only
 * for n bytes
 *
 * @dest: destination string
 * @src: string to be concatenated to dest. until dest <= n
 * @n: max lenght of dest
 *
 * Return: concatenated dest string
 */
char *_strncat(char *dest, char *src, int n)
	{
		int len_dest, pos_src;

		for (len_dest = 0; dest[len_dest];)
			len_dest++;

		len_dest--;

		for (pos_src = 0; src[pos_src] != 0; pos_src++)
		{
			len_dest++;

			if (pos_src != n)
				dest[len_dest] = src[pos_src];
			else
				dest[len_dest] = 0;
		}
		return (dest);
	}
