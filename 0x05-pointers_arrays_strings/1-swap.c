#include "main.h"

/**
 * main - swaps the values of the variables
 * 
 * @a placeholder for value to be swapped
 * @b placeholder for value to be swapped
 * 
 * return (0) scuccess
 */

void swap_int(int *a, int *b)
{
 int c;

c=*a;
*a=*b;
*b=c;
}
