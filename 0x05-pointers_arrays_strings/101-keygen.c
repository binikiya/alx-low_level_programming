#include<stdio.h>
#include "holberton.h"
#include<stdlib.h>
#include<time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
int counter, checksum, a;

strand(time(NULL));
checksum = 2772;
counter = 0;

while (checksum > 122)
{
a = (rand() % 100);
printf("%c", a);
checksum -= a;
counter++;
}
printf("%c", checksum);
return (0);
}
