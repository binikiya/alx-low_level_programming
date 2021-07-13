#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - splits a string in to words
 * @str: string
 */
char **strtow(char *str)
{
int i, j, k, word, m, w, count;
char **p;
char *x;
i = 0;
j = 0;
w = 0;
count = 0;
if (*str == '\0' || str == NULL)
return (NULL);
while (str[i] != '\0')
{
if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] != '\0'))
w++;
i++;
}
p = (char **)malloc(sizeof(char *) * (w + 1));
if (p == NULL)
return (NULL);
for (word = 0; str[word] && j <= w; word++)
{
count = 0;
if (str[word] != ' ')
{
for (i = word; str[i] != '\0'; i++)
{
if (str[i] == ' ')
break;
count++;
}
*(p + j) = (char *)malloc(sizeof(char) * (count + 1));
if ((*p + j) == NULL )
{
for (k = 0; k <= j; k++)
{
x = p[k];
free(x);
}
free(p);
return (NULL);
}
for (m = 0; word < i; word++)
{
p[j][m] = str[word];
m++;
}
p[j][m] = '\0';
j++;
}
}
p[j] = NULL;
return (p);
}
