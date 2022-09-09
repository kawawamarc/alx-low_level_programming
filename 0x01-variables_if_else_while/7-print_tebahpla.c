#include <stdio.h>
/**
*main ->Print alphabets in the reverse order
*use putchar
*Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 122; ch >= 97; ch--)
{
	putchar(ch);
}
putchar(10);
return (0);
}
