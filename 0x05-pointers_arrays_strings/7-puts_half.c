#include "main.h"
/**
 * puts_half - prints only the even numbers.
 * @str: principal parameter.
 */

void puts_half(char *str)
{
	int a, len, b;

	for (len = 0; str[len] != '\0'; len++)

	if ((len  % 2) == 0)
		b = (len / 2);
	else
		b = (len + 1) / 2;

	for (a = b; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
