#include "main.h"

/**
 * _memset - Fills the first n byte of the memory
 * area pointed to by s with the constant byte b
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
