#include "main.h"
/**
 * _memcpy - copies from source to dest
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of times
 * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
