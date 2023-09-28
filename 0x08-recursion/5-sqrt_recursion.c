#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n:input number
 * @c: iterator
 * Return: the square root or -1
 */

int _sqrt_recursion (int n, int c)
{
	if (c %(n / c))
	return (_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @c: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (actual_sqrt_recursion(n, c + 1));
}
