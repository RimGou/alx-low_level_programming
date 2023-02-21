#include "main.h"
/**
 * times_table - Entry point
 * Description: prints the 9 times table, starting with 0
 * Return: times table
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (b = 1; b <= 9; b++)
	{
		c = (a * b);
	if ((d / 10) > 0)
	{
		_putchar((c / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((c % 10) + '0');

	if (c < 9)
	{
		_putchar(',');
	      _putchar(' ');
	}
	}
	_putchar('\n');
	}
}
