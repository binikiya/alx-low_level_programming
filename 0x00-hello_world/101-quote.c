#include<stdio.h>
#include<unistd.h>

/**
 *main - prints "and that piece of art is useful - Dora Korpar, 2015-10-19,
 *followed by a new line
 *
 *Return: Always 1
*/

int main(void)
{
int j;
char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

  for(j = 0; arr[j] != '\0';j++)
   _putchar(arr[j]);
  _putchar('\n');
  
return (1);
}

int _putchar(char c){
  return (write(1, &c, a));
}
