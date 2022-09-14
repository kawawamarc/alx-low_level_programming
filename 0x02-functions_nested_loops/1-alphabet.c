#include "main.h"

/**
*A function that prints alphabets in lowercase
*
*Return: void
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
