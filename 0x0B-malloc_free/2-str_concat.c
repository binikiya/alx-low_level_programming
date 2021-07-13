#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatinates two string
 * @s1: string 1
 * @s2: string 2
 * Return: concatenate string
 */

char *str_concat(char *s1, char *s2)
{
char *new = NULL;
unsigned int i;
int n1, n2;
int count = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
n1 = 0;
n2 = 0;
while (s1[n1] != '\0')
n1++;
while (s2[n2] != '\0')
n2++;
new  = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
if (new == NULL)
return (NULL);
i = 0;
while (s1[i] != '\0')
{
new[i] = s1[i];
i++;
}
while (s2[count] != '\0')
{
new[i] = s2[count];
count++;
}
return (new);
}
