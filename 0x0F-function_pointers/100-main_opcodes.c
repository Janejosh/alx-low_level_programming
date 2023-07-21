#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the opcodes of its own main function
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned char opcode;
	int bytes, i;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
	if (i == bytes - 1)
		continue;
	printf(" ");
	address++;
	}
	printf("\n");
	return (0);
}
