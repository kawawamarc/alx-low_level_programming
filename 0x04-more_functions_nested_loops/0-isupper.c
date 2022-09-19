#include "main.h"

/**
* _isupper -> A function to check if a character is upper case 
* @c: an argument/parameter of type int
* Return: Success if 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}

else
{
	return (0);
}

}

