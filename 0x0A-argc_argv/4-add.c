#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A program that adds positive numbers
 * @argc: Number of argument
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	char *e;
	unsigned int j, sum = 0;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		e = argv[i];
	for (j = 0; j < strlen(e); j++)
	{
	if (e[j] < 48 || e[j] > 57)
	{
		printf("Error\n");
		return (1);
	}
	}
	sum += atoi(e);
	e++;
	}
	printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
