#include "main.h"

/**
 * time table - print the 9 time table
 * starting with zero
 * Return: empty output
 */
#include <stdio.h>

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{

	result = i * j;
	printf("%d x %d = %d\n", i, j, result);
	}
	printf("\n");
	}
}
