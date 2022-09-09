#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*betty style docc for function main goes there */
/**
*main : Entry point
*
* x holds the last digit of a number
* n randomly generated numbers
*
*Return: Success (0)
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
