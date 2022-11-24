#include <stdio.h>
void startupfun(void) __attribute__ ((constructor));
/**
 *startupfun - prints a string before calling main
 *Return:void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
