#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * men is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int men = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		men++;
	}

	for (b = (men - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
