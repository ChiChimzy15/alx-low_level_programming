#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int f;

	for (i = 1; i <= 10; i++)
	{
		for (f = 97; f <= 122; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
