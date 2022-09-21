#include "main.h"

/**
 * _strcat - concat two arrays
 *
 * @dest: destination of concat
 * @src: source array of concat
 *
 * Return:char value
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
