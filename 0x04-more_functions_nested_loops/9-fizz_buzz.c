#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("%s", "Fizz");
		else if (n % 5 == 0)
			printf("%s", "Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("%s", "FizzBuzz");
		else
			printf("%d", n);
	}
	printf("\n");
}
