#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: string to be printed between the string
 * @n: the number of string passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *ptr;
char arr[] = "(nil)";
va_start(list, n);
for (i = 0; i < n; i++)
{
ptr = va_arg(list, char *);
if (ptr == NULL)
ptr = arr;
if (i != (n - 1) && separator != NULL)
printf("%s%s", ptr, separator);
else
printf("%s", ptr);
}
printf("\n");
va_end(list);
}
