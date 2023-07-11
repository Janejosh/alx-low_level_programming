#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * number - A function for number count
 * @str: String to be checked
 * Return: Number of words
 */

int number(char *str)
{
	int i, num = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (*str == ' ')
		str++;
	else
	{
	for (; str[i] != ' ' && str[i] != '\0'; i++)
		str++;
	num++;
	}
	}
	return (num);
}

/**
 * free_everything - The memory to free
 * @string: The string pointer to free
 * @i: The value to be counted
 */

void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * strtow - A function that splits a string into words
 * @str: The string to be checked
 * Return: NULL if string is empty or NULL if function fails
 */

char **strtow(char *str)
{
	char **words, *new_word;
	int total_words = 0, a = 0, b = 0, len = 0;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = number(str);
	if (total_words == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (total_words + 1));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' && a < total_words;)
	{
	if (*str == ' ')
		str++;
	else
	{
		new_word = str;
	for (; *str != ' ' && *str != '\0';)
	{
		len++;
		str++;
	}
	words[a] = malloc(sizeof(char) * (len + 1));
	if (words[a] == 0)
	{
		free_everything(words, a);
		return (NULL);
	}
	while (*new_word != ' ' && *new_word != '\0')
	{
		words[a][b] = *new_word;
		new_word++;
		b++;
	}
	words[a][b] = '\0';
	a++;
	b = 0;
	len = 0;
	str++;
	}
	}
	return (words);
}
