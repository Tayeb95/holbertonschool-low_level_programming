#include "holberton.h"
/**
 * swap_int - swap the values of two int
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
