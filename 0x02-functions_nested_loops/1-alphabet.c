#include "main.h"
/**
 * print_alphabet: Entry point
 * Description: Prints alphabets
 * Return: 0
 */
void print_alphabet(void)
{
	char im;

	im = 'a';

	while (im <= 'z')
	{
		_putchar(im);
		im++;
	}
	_putchar('\n');
	return (0);
}
