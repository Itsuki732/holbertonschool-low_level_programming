#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main - Entry point
*assign a random number to the variable n each time it is executed.
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
int ln;
srand(time(0));
n = rand() - RAND_MAX / 2;
ln = n % 10
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ln);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ln);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
}
return (0);
}
