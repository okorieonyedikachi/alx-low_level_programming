#include "main.h"

/**
 * _isupper - function that checks if it is uppercase
 *
 * @c: character to be used
 * Return: gives 0 or 1
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
