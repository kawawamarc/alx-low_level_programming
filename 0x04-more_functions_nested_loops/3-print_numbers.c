#include "main.h"

/**
* print_numbers - A function that prints numbers from 0 - 9
*/

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
}
