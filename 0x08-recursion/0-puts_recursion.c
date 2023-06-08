#include "main.h"
/**
 * Writing a function that prints a string, followed by a new line.

Using  the Prototype: void _puts_recursion(char *s);

**/
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
       	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
