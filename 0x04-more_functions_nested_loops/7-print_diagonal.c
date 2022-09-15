#include "main.h"

/**
* print_diagonal - A function that prints a diagonal line
* @n: An argument or parameter of type int
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < x; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
