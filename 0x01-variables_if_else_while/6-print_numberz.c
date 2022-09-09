#include <stdio.h>
/**
 *main -> declare ch as an integer variable
 *using putchar to print single digits of base 10
 *Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
	putchar(ch);
}
putchar(10);
return (0);
}
