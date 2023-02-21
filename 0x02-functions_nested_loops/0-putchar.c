#include "main.h"

/**
 * main - Entry point
 * Description: prints "_putchar"
 * Return: 0
 */

int main(void)
{
	int i;
	char c[]= "_putchar";

	i = 0;
	while(c[i])
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
