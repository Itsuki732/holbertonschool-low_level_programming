#include <stdio.h>
/**
*main - Entry point
*prints the size of various types on the computer it is compiled and run on
*Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of of a char: %ld byte(s)\n", sizeof(char));
printf("Size of of an int: %ld byte(s)\n", sizeof(int));
printf("Size of of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of of a long long int: %ld byte(s)\n", sizeof(long long));
printf("Size of of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
