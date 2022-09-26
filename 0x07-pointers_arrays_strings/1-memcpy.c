#include "main.h"

/**
* _memcpy -> a function that copies memory area
* @dest: a  memory location
* @src: a memory location (currently holding some values) 
* @n: n number of bytes to be copied from memory
* Return: returns a pointer to dest memory location
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
