#include <unistd.h>

/**
 * _putchar - function
 * @c: the character to point
 * Return: on success 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
