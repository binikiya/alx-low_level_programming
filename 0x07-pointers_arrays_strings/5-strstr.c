#include<stdio.h>
#include<stddef.h>

/**
 * *_strstr - locates the first occurence of string
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the begginig of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
char *pn, *ph;
ph = needle;
for (; *haystack != 0; haystack++)
{
for (pn = needle, ph = haystack; *pn == *ph && *pn; *pn++, ph++)
;
if (*pn == '\0')
return (haystack);
}
return (NULL);
}
