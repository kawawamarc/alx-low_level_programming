#include "main.h"

/**
* _pow_recursion - A function that returns the value of x to power of y
* @x: the base value to be evaluated
* @y: the number the base is raised to.
* Return: int value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
