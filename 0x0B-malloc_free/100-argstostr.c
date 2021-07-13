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
int size, count, count1;
int count2 = 0;
char *ptr;
if (ac == 0 || av == NULL)
return (NULL);
for (count = 0; count < ac; count++)
{
for (count1 = 0; av[count][count1] != '\0'; count1++)
{
size += 1;
}
size += 1;
}
size += 1;
ptr = (char *)malloc(sizeof(char) * count);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (count = 0; count < ac; count++)
{
for (count1 = 0; av[count][count1] != '\0'; count1++)
{
ptr[count2] = av[count][count1];
count2++;
}
ptr[count2] = '\n';
count2++;
}
ptr[count2] = '\0';
return (ptr);
}
