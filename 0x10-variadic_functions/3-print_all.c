#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @list: argument
 */
void print_char (va_list list)
{
printf("%c", va_arg(list, int));
}


/**
 * print_string - print string
 * @list: argument
 */
void print_string(va_list list)
{
char *str;
str = va_arg(list, char*);
if (str == NULL)
ptr = "(nil)";
printf("%s", str);
}

/**
 * print_integer - print integer
 * @list: agument
 */
void print_integer(va_list list)
{
printf("%i", va_arg(list, int));
}

/**
 * print_float - print float
 * @list: argument
 */
void print_float(va_list list)
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
{"c", print_char},
{"s", print_string},
{"i", print_integer},
{"f", print_float},
{NULL, NULL}
};
va_list list;
char *str = "";
va_start(list, format);
i = 0;
while (format && format[i])
{
j = 0;
while (t[j].x != NULL)
{
if (*(t[j].x) == format[i])
{
printf("%s", str);
t[j].T_func(list);
str = ", ";
break;
}
j++;
}
i++;
}
va_end(list);
printf("\n");
}
