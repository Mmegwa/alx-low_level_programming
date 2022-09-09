#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) == 0)
		printf("Last digit is %d is %d and n is 0\n", n, n % 10);
	else if ((n % 10) > 5)
		printf("Last digit is %d is %d and n is greater than 5\n", n, n % 10);
	else
		printf("Last digit is %d is %d and n is less than 6 and not 0\n", n, n % 10);

	return (0);
}
