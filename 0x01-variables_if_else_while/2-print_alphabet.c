#include <stdio.h>
/**
 *main -> assign a random number to the variable n each time it is executed
 *print alphabets in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); 
	return (0);
}
