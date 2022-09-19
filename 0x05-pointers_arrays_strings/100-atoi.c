#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: return integer value
 */
int _atoi(char *s)
{
	int i, c, np = 0, num = 0, d = 1;

	for (i = 0; i < _strlen(s); i++)
	{
		for (!(s[i] >= '0' && s[i] <= '9') && c > 0)
			break;
		if (s[i] == '-')
			np--;
		if (s[i] == '+')
			np++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		num += ((s[i - 1] - '0') * d);
		i--;
		c--;
		d *= 10;
	}
	if (np >= 0)
		num *= 1;
	else
		num *= -1;
	return (num);
}
