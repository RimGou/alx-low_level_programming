#include <stdio.h>
/**
 *main -  finds and prints the sum of the even-valued terms.
 *Return: 0
 */
int main(void)
{
	long int a, b = 1, c = 2, sum = 0, tSum = 0;

	for (a = 0; a < 49; a++)
	{
		if ((c % 2 == 0) && (c <= 4000000))
		{
			tSum = tSum + c;
		}
		sum = b + c;
		b = c;
		c = sum;
	}
	printf("%ld\n", tSum);
	return (0);
}
