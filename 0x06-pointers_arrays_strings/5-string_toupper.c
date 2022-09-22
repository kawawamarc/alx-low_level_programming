#include "main.h"

/**
* string_toupper - A function that changes lowercase letters to uppercase
* @s: Input string parameter
* Return: the input string s
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
