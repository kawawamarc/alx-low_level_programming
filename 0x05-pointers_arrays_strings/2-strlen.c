#include "main.h"

/**
 *_strlen -function that returns the length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: returns int value if success
 */

int _strlen(char *s)
{
int x;

x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}
