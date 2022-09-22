#include "main.h"

/**
* leet -> A function that encodes a string into 1337
* @x: input string  x
* Return: input string x
*/
char *leet(char *x)
{
	int i = 0, j, p = 5;
	char cap_letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (x[i])
	{
		j = 0;

		while (j < p)
		{
			if (x[i] == cap_letters[j] || x[i] - 32 == cap_letters[j])
				x[i] = num[j];
			j++;
		}
		i++;
	}
	return (x);
}
