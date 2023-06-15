#include <stdio.h>

/**
 * Main - C program using printf
 * Description: prints "sizes of various variables"
 * Return: 0 (Success)
 */

int main (void)
{
printf("Size of char: %zu bytes(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byt(s)\n", sizeof(float));
return (0);
}
