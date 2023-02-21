#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	char b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
