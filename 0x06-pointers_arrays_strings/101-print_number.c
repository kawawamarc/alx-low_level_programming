#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: input integer.
 * Return: Void function (no return)
 */
void print_number(int n)
{
	int m = 1, d, j;

	if (n < 0)
	{
		_putchar('-');
		n *=* -1;
	}
	
	for (d = 0; n / m > 9; m *=10)
	;

	for (; m >= 1; n %= m, m /= 10)
	{
		j = n / m
		_putchar('0' + j);
	}
}
