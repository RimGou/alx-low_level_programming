#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a;
	long int FNUMS[50];

	FNUMS[0] = 1;
	FNUMS[1] = 2;
	printf("%ld, %ld, ", FNUMS[0], FNUMS[1]);

	for (a = 2; a < 50; a++)
	{
		FNUMS[a] = FNUMS[a - 1] + FNUMS[a - 2];
		if (a == 49)
			printf("%ld\n", FNUMS[a]);
		else
			printf("%ld, ", FNUMS[a]);
	}
	return (0);
}
