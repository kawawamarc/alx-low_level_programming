#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
char ch[]="_putchar";
for(int i=0;i<sizeof(ch);i++)
{
	_putchar(ch[i]);
}
_putchar("\n");
return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
