#include "main.h"
/**
 * _strcat - Concatenates the two strings
 * @dest:to input value
 * @src:to input value
 *
 * Return: void on success
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int c;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[a] = src[c];
		a++;
		c++;
	}

	dest[a] = '\0';
	return (dest);
}
