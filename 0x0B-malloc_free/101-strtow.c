#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, word_count = 0;
	bool is_word = false;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (!is_word)
			{
				word_count++;
				is_word = true;
			}
		}
		else
		{
			is_word = false;
		}
	}

	return word_count;
}

/**
 * free_words - Frees the memory allocated for words array.
 * @words: The words array.
 * @word_count: The number of words in the array.
 *
 * Return: nothing
 */
void free_words(char **words, int word_count)
{
	int i;

	for (i = 0; i < word_count; i++)
		free(words[i]);
	free(words);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int i, j, word_count, word_len;
	char **words;

	if (str == NULL || *str == '\0')
		return NULL;

	word_count = count_words(str);
	if (word_count == 0)
		return NULL;

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return NULL;

	for (i = 0; i < word_count; i++)
	{
		while (*str == ' ' || *str == '\t')
			str++;

		word_len = 0;
		while (str[word_len] != ' ' && str[word_len] != '\t' && str[word_len] != '\0')
			word_len++;

		words[i] = malloc(sizeof(char) * (word_len + 1));
		if (words[i] == NULL)
		{
			free_words(words, i);
			return NULL;
		}

		for (j = 0; j < word_len; j++)
			words[i][j] = str[j];
		words[i][j] = '\0';

		str += word_len;
	}

	words[word_count] = NULL;

	return (words);
}
