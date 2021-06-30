#include<stdio.h>

/**
 * *leet - encodes a string to 1337
 * @s: a string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
char src[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
int encode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i = 0;
int j = 0;
while (s[i] != '\0')
{
while (src[j] != '\0')
{
if (s[i] == src[j])
s[i] = encode[j];
j++;
}
i++;
}
return (s);
}
