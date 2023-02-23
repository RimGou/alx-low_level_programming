#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return:0
 */
int main(void)
{
	long int a;
	long int net;
	long int i;

	a = 612852475143;
	net = -1;

	while (a % 2 == 0)
	{
		net = 2;
		a /= 2;
	}

	for (i = 3; i <= sqrt(a); i = i + 2)
	{
		while (a % i == 0)
		{
			net = i;
			a = a / i;
		}
	}

	if (a > 2)
		net = a;

	printf("%ld\n", net);

	return (0);
}

