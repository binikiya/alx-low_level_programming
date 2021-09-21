#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: character to print
 * Return 1 or 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
