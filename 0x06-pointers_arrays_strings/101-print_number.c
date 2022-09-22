#include "main.h"

/**
 * print_number - prints number with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int a0, a1, a2, a3, a4, a5;
	int s0, s1, s2, s3, s4;

	a0 = n / 100000;
	s0 = a0;
	a1 = (n / 10000) % 10;
	s1 = s0 + a1;
	a2 = (n / 1000) % 10;
	s2 = s1 + a2;
	a3 = (n / 100) % 10;
	s3 = s2 + a3;
	a4 = (n / 10) % 10;
	s4 = s3 + a4;
	a5 = n % 10;
	if (n < 0)
	{
		_putchar('-');
		a0 *= -1;
		a1 *= -1;
		a2 *= -1;
		a3 *= -1;
		a4 *= -1;
		a5 *= -1;
	}
	if (s0 != 0)
		_putchar('0' + a0);
	if (s1 != 0)
		_putchar('0' + a1);
	if (s2 != 0)
		_putchar('0' + a2);
	if (s3 != 0)
		_putchar('0' + a3);
	if (s4 != 0)
		_putchar('0' + a4);
	_putchar('0' + a5);
}
