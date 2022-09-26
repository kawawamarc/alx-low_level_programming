#include "main.h"
#include <string.h>
/**
 * _memset - a function that fills n bytes of  memory addressed by pointer with a constant byte b.
 * @s: pointer variable to a memory location.
 * @b: constant byte.
 * @n: n numbr of bytes to be filled.
 * Return: returns a pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Using for loop as iterator*/
	for (i = 0; i < n; i++)
	{
		*(s + i) =  b;
	}

	return (s);
}
