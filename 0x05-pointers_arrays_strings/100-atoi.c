#include "main.h"
/**
 * _atoi - convert a number in a string to integer
 * @s: the string
 * Return: the result or 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			sign *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			result = (result * 10) + (s[0] - '0') * sign;
		else if (result)
			break;
		s++
	}
	return (result);
}
