#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */

void rev_string(char *s)
{
	char rom = s[0];
	int men = 0;
	int i;

	while (s[men] != '\0')
		men++;

	for (i = 0; i < men; i++)
	{
		men--;
		rom = s[i];
		s[i] = s[men];
		s[men] = rom;
	}
}
