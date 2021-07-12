#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the sum of two positive numbers
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int res, i, j;
res = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
