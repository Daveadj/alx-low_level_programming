#include "main.h"
/**
 * _isdigit - check if the character is a digit
 * @c: the int
 * Return: 1
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
