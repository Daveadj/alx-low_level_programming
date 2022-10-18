#include "main.h"
/**
 * _islower - check if a character is in lowercase
 * @c: the character
 * Return: 1 success, 0 failure
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
