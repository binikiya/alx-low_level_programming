#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int res;
if (argc == 3)
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
