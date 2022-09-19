#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 * Return: Returns void if success
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
