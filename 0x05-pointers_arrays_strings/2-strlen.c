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
		len = len + 1;
		s = s + 1;
	}
	return (0);
}
