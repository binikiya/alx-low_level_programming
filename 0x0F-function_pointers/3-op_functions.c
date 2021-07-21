#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: first int
 * @b: second int
 * Return: Sum
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub -substract two integers
 * @a: first int
 * @b: second int
 * Return: substract
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies two integer
 * @a: first int
 * @b: second int
 * Return: multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divedes two integers
 * @a: first int
 * @b: second int
 * Return: quotient
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - modulus of integer
 * @a: first int
 * @b: second int
 * Return: modulus
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
