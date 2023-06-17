#include <stdio.h>
/**
 * main - entry point
 * telphabet
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
