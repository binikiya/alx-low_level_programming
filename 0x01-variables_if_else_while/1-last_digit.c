#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *main - prints last digit of randomly generated number and shows that then number is either greater or less or equal to 5
 *
 *Return: Always Return 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX/2;

int lastDigit = n%10;
if(lastDigit > 5)
  printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if(lastDigit < 5 && lastDigit != 0)
  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
else
  printf("Last digit of %d is %d and is zero\n", n, lastDigit);

return (0);
}
