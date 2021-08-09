#include <unistd.h>

/**
 * _putchar - prints somethin
 * @c: char to be printed
 * Return: 1 or -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
