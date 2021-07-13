#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - prints a pointer to a new string
 * @str: string
 * Return: pointer to duplicate string or null
 */
char *_strdup(char *str)
{
char *ar;
unsigned int i, j, len;
len = 0;
if (str == NULL)
{
return (NULL);
}
for (j = 0; *(str + j) != '\0'; j++)
len++;
ar = malloc(sizeof(char) * (len + 1));
if (ar == NULL)
return (NULL);
for (i = 0; i < len; i++)
*(ar + i) = *(str + i);
*(ar + len) = '\0';
return (ar);
}
