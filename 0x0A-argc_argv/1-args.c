#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
