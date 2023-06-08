#include "main.h"
/**
 * Writing a function named _puts_recursion that prints a string, followed by a new line.

*Using  the Prototype: void _puts_recursion(char *s);
*@s: string

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
