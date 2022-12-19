#include "main.h"
/**
 * swap_int- swaps the value of int a snd int b
 * owned by Deefamous
 * @a: first int
 * @b: second int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
