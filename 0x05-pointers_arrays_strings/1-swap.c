#include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
