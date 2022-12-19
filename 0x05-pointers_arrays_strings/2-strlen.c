#include "main.h"
/**
 * _strlen - return the length of a string
 * owned by Deefamous
 * @s: char to check
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
