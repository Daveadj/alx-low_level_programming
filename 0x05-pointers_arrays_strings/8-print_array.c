#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements in an array
 * @a: array
 * @n: number of values
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}