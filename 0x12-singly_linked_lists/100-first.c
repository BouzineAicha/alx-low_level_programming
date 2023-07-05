#include <stdio.h>
/**
 * v - prints from init by the loader before main
 */
void v(void) __attribute__ ((constructor));
void v(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
