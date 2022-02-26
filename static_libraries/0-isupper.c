/**
 * _isupper - checks if entering c is upper case char
 *
 * @c: entering char
 * Return: 1 or 0 (upper char / not upper char)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
