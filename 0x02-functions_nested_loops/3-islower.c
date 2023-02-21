#include "main.h"
/**
 * _islower - Entry point
 * @n: input char
 * Description: checks if char islower
 * Return: 1 if is lowercase else 0
 */
int _islower(int n)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == n)
			return (1);
	}
	return (0);
}
