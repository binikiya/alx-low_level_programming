#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum num of coins to make change for the amount of money
 * @argc: argument count
 * @argv: argument variable
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
int money = 0;
int count = 0;
int i;
int coins[5] = {25, 10, 5, 2, 1};
if (argc == 2)
{
for (i = 0; i < 5; i++)
{
if (atoi(argv[1]) >= coins[i])
{
money = atoi(argv[1]) / coins[i];
count = atoi(argv[1]) % coins[i];
break;
}
}
for (i = 0; i < 5; i++)
{
if (count >= coins[i])
{
money++;
count -= coins[i];
i = 0;
}
}
}
else
{
printf("Error\n");
return (0);
}
printf("%d\n", money);
return (0);
}
