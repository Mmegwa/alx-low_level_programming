#include "main.h"
/**
 * print_line - Write a function that draws straight line in terminal.
 * @n: Integer amount of _
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
