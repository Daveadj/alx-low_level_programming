#include "main.h"
/**
 * print_line - print a ling '-'
 * @n: the number of line to print
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
