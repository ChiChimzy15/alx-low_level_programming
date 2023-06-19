#include <stdio.h>
/**
 * main - entry point
 * print number with possible different combinations of two digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		int tens1 = num1 / 10;
		int ones1 = num1 % 10;

		for (num2 = num1; num2 <= 99; num2++)
		{
			int tens2 = num2 / 10;
			int ones2 = num2 % 10;

			if (num1 == 0 && num2 == 0)
				continue;
			if (num1 != num2)
			{
				putchar(tens1 + '0');
				putchar(ones1 + '0');
				putchar(' ');
				putchar(tens2 + '0');
				putchar(ones2 + '0');

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
