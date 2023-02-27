#include "main.h"
/**
  * _puts - prints a string, followed by line, to stdout.
  * @str: pointer type char
  * Return: 0
  */

void _puts(char *str)
{
	for(; *str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
