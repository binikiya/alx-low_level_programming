#include<stdio.h>

/**
 * *leet - encodes a string to 1337
 * @s: a string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
char src[] = "aAeEoOtTlL";
int encode[] = "4433007711";
int i = 0;
int j = 0;
while (s[i] != '\0')
{
while (src[j] != '\0')
{
if (s[i] == src[j])
{
s[i] = encode[j];
}
j++;
}
i++;
}
return (s);
}
