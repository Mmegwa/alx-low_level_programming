#include "main.h"

/**
 * _puts - puts a string
 *
 * @str: string to print
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
