#include "main.h"

/**
* _isalpha - A function that checks for alphabetical character
* @c: the parameter passed as argument for the function
* Return: Returns 1 if c is letter(lowercase,uppercase) otherwise 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
