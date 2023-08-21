#include "main.h"

/**
 * swap_int - swaps the values of the vaariables
 *
 * @a: placeholder for value to be swapped
 * @b:paceholder for value to be swapped
 *
 * return (0) scuccess
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
