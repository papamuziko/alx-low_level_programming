/**
 * _isdigit - checks if the entering c is a digit
 *
 * @c: entering char
 * Return: 1 or 0 (char / not char)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
