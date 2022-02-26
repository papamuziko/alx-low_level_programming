#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 * @s: string to search in
 * @accept: characters to look for
 *
 * Return: unsigned int with the numbers of encounters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos_s, pos_accept, count;

	count = 0;
	for (pos_s = 0; s[pos_s] != 0; pos_s++)
	{
		for (pos_accept = 0; accept[pos_accept] != 0; pos_accept++)
		{
			if (s[pos_s] == accept[pos_accept])
			{
				count++;
				break;
			}
		}

		if (accept[pos_accept] == 0 && count > 0)
			return (count);

	}

	return (count);
}
