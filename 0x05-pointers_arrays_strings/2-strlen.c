#include "main.h"
/**
  * _strlen - changes the initial.
  * @s: parameter to change.
  * Return: 0
  */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (0);
}
