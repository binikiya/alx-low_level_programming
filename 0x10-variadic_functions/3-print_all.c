#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * p_char - print char
 * @list: argument
 */
void p_char (va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * p_string - print string
 * @list: argument
 */
void p_string(va_list list)
{
char *str = va_arg(list, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * p_integer - print integer
 * @list: agument
 */
void p_integer(va_list list)
{
printf("%i", va_arg(list, int));
}

/**
 * p_float - print float
 * @list: argument
 */
void p_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * print_all -print anything
 * @format: a list of types of argument passed to the function
 */
void print_all(const char * const format, ...)
{
unsigned int i, j;
t_print t[] = {
{"c", p_char},
{"s", p_string},
{"i", p_integer},
{"f", p_float},
{NULL, NULL}
};
va_list list;
char *s = "";
va_start(list, format);
i = 0;
while (format && format[i])
{
j = 0;
while (t[j].x != NULL)
{
if (*(t[j].x) == format[i])
{
printf("%s", s);
t[j].T_func(list);
s = ", ";
break;
}
j++;
}
i++;
}
va_end(list);
printf("\n");
}
