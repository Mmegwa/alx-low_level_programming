#include "main.h"
/**
 * _isdigit - function that checks if it is a digit
 * @c: takes in a character
 * Return: 1 if digit and 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
