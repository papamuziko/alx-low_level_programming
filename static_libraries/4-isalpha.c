#include "main.h"
/**
 * _isalpha - this function takes a character and dictates
 * if it is alphabetic of not
 *
 * @c: character
 *
 * Return: 0 or 1 (not alpha - alpha)
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
