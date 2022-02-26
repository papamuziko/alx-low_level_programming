#include "main.h"
/**
 * _strlen - this function takes a string pointer and returns
 * the lenght
 *
 * @s: the pointer to the string
 *
 * Return: number of indexes
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != 0)
	{
		lenght++;
	}

	return (lenght);
}
