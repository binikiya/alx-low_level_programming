#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct types_arguments - struct op
 * @t: the operator
 * @f: the function
 */
typedef struct types_arguments
{
char x;
void (*T_func)(va_list);
} types;

#endif
