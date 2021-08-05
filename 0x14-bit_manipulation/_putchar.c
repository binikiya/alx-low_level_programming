#include <unistd.h>

/**
 * _putchar - used to print
 * @c: character to print
 * Return: 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
