#include "main.h"

/**
 * main swaps the values of the variables
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
