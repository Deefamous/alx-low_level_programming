#include "main.h"

/**
 * _stncat - concatenates two strings
 *
 * @src: the source of strings
 * @dest: the destination of the string
 * @n: the lenght of int
 *
 * Return: pointer to the resulting string destination
 */
char *_stncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
