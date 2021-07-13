#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts the length of string
 * @str: string
 * Return: i
 */

int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}

/**
 * *argstostr - concatinates all the arguments in program
 * @ac: no of argument
 * @av: the argument
 * Return: conc. argument
 */

char *argstostr(int ac, char **av)
{
char *new;
int i, j, c, k;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
c += _strlen(av[i]);
}
new = malloc(sizeof(char) * (c + ac + 1));
if (new == NULL)
{
free(new);
return (NULL);
}
c = 0;
for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k] != '\0'; k++)
{
new[c] = av[j][k];
c++;
}
new[c] = '\n';
c++;
}
return (new);
}
