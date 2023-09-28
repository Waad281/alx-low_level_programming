#include "main.h"

/**
 * 0-puts_recursion.c,prints a string, followed by a new line
 *s@:pointer to the string
 * Return: Always 0.
 */
int main(void)
{
void _puts_recursion(char *s);
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
