#include <stdio.h>
/**
 *main - Entry Point
 *lower and uppercase
 *Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	n = 65;
	while (n <= 90)
	{
		putchar(n);
		n++;
	}

	return (0);
}
