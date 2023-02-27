#include "main.h"
/**
  * swap_int - changes the initial.
  * @a: parameter to change.
  * @b: parameter to change.
  */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
