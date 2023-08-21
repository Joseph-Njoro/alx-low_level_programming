#include "main.h"

/**
 * _strlen - finds the length of the string
 *
 * @*S: points to the string
 *
 * return: returns string
 */

int _strlen(char *s)
{
    int a = 0;

    while (*s != '\0')
    {
        a++;
    }
    return a;
}
