#include <stdio.h>
/**
 *main -> Print lower case alphabets
 *Print all lower case alphabets except q and e
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
}
putchar(10); /* this is an ascii code for new line*/
return (0);
}
