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

if ((n % 10) > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
else if ((n % 10) < 5 && (n % 10) != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n%10);
else
printf("Last digit of %d is %d and is zero\n", n, n%10);

return (0);
}
