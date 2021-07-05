#include<stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer points to a pointer
 * @to: accepts the value of a pointer
 */

void set_string(char **s, char *to)
{
*s = to;
}
