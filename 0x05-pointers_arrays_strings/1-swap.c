#include "main.h"

/**
 * swap_int - swap value of to input
 * @a: first input
 * @b: second input
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
