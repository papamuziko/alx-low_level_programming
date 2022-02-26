/**
 * _islower - this function takes an int
 * and sees if it corresponds to a lowercase letter
 *
 * @c: c is the input int for searching in ascii table
 *
 * Return: the number 0 or 1 (upper and lower)
 *
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
