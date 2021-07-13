#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatinates all the arguments in program
 * @ac: no of argument
 * @av: the argument
 * Return: conc. argument
 */

char *argstostr(int ac, char **av)
{
char *new;
int var, j, c, k;
var = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (c = 0; c < ac; c++)
{
for (j = 0; av[c][j] != '\0'; j++)
k++;
}
new = malloc(char *)(sizeof(char) * (k + ac + 1));
if (new == NULL)
{
return (NULL);
}
for (c = 0; c < ac; c++)
{
for (j = 0; av[c][j] != '\0'; j++)
{
new[var] = av[c][j];
var++;
}
new[var] = '\n';
var++;
}
new[var] = '\0';
return (new);
}
