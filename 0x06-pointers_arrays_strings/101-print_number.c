#include "main.h"

/**
 *print_number - A function that prints an integer
 *@n: the number to be printed.
 *Return - VOid function return 
 */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i /10);
	}
	_putchar((i % 10 + '0');
}
