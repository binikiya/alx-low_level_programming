#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - prints a pointer to a new string which is duplicates of the string str.
 * @str: string
 * Return: pointer to duplicate string or null
 */
char *_strdup(char *str)
{
char *ar = NULL;
unsigned int i, j, len;
len = 0;
if (str == NULL)
{
return (NULL);
}
for (j = 0; *(str + j) != '\0'; j++)
len++;
ar = malloc (sizeof(char) * (len + 1));
for (i = 0; i < len; i++)
*(ar + i) = *(str + i);
*(ar + len) = '\0';
return (ar);
}
