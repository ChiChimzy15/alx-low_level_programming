#include <stdio.h>
/**
 * main - Entry poin
 * Return: always 0 (sucess)
 */
int main(void)
{
size_t charSize = sizeof(char);
size_t intSize = sizeof(int);
size_t longIntSize = sizeof(long int);
size_t longLongIntSize = sizeof(long long int);
size_t floatSize = sizeof(float);
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}
