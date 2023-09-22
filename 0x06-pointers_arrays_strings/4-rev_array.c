#include "main.h"
/**
 * Reverse_array - Reverse array of integers
 * @a: array
 * @n: numb of elements of array
 *
 * Return: to the void
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
