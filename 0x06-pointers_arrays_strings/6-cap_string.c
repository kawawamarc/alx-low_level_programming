#include "main.h"

/**
* cap_string -> A function that capitalizes all words of a string
* @x: input string parameter
* Return: the input string x
*/
char *cap_string(char *x)
{
	char y[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int z = 13;
	int j = 0, i;

	while (x[j])
	{
		i = 0;
		while (i < z)
		{
			if ((j == 0 || x[j - 1] == y[i]) && (x[j] >= 97 && x[j] <= 122))
				x[j] = x[j] - 32;
			i++;
		}
		j++;
	}
	return (x);
}
