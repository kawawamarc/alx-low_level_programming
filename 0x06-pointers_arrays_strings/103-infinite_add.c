#include "main.h"
#include <stdio.h>
/**
 * infinite_add - A function that adds two numbers
 * @n1: First number .
 * @n2: Second number .
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: return the stored value in the buffer function.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, z, w, p, d, sum_num = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	if (x >= y)
		w = x;
	else
		w = y;
	if (size_r <= w + 1)
		return (0);
	r[w + 1] = '\0';
	x--, y--, size_r--;
	p = *(n1 + x) - 48, d = *(n2 + y) - 48;
	while (w >= 0)
	{
		z = p + d + sum_num;
		if (z >= 10)
			add = z / 10;
		else
			sum_num = 0;
		if (z > 0)
		*(r + w) = (z % 10) + 48;
		else
			*(r + w) = '0';
		if (x > 0)
			x--, p = *(n1 + x) - 48;
		else
			p = 0;
		if (y > 0)
			y--, d = *(n2 + y) - 48;
		else
			d = 0;
		w--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
