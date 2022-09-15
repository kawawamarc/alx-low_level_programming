#include "main.h"

/**
* print_line - A function that prints a straight line
* @n: An argument or paremeter of type int
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
}
