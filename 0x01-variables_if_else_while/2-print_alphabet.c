#include<stdio.h>

/**
 *main - prints alphabeic characters starting from a to z
 *
 *Returm: Always returns 0.
 */

int main(void){
char ch ;
for(ch = 'a';ch <= 'z';ch++){
  putchar(ch);
}
putchar("\n");

return (0);
}
