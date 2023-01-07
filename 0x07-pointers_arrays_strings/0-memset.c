#include "main.h"

/**
 * _memset
 * s: source string
 * b: the contant byte
 * n: length of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
