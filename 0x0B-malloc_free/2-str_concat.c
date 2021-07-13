#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count length of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}

/**
 * *str_concat - concatinates two string
 * @s1: string 1
 * @s2: string 2
 * Return: concatenate string
 */

char *str_concat(char *s1, char *s2)
{
char *new = NULL;
int n1, n2, m, i, o;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
n1 = _srlen(s1);
n2 = _strlen(s2);
new = malloc(sizeof(char) * (n1 + n2 + 1));
if (new == NULL)
return (NULL);
m = 0;
while (m < n1)
{
new[m] = s1[m];
m++;
}
i = n1;
o = 0;
while (o < n2)
{
new[i] = s2[o];
o++;
i++;
}
return (new);
}
