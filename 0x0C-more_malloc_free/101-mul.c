#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc - argument count
 * @argv- argument variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
long int mul;
int num1, num2;
mul = 0;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (num1 = 1; num1 < argc; num1++)
{
for (num2 = 0; argv[num1][num2] != '\0'; num2++)
{
if (!(isdigit(argv[num1][num2])))
{
printf("Error\n");
exit(98);
}
}
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%ld\n", mul);
return (0);
}
