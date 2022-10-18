#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: the character
 * Return: 1 success, 0 failure
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
