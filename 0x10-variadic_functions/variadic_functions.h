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
 * @x: the operator
 * @T_func: the function
 */
typedef struct print
{
char *x;
void (*T_func)(va_list);
} t_print;

#endif
