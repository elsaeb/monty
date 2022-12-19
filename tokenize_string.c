#include <stdlib.h>
/**
 * strtow - takes a string and separates its words
 *@str: string to separate words
 *@delims: delimators to use to delimit words
 *
 *Return: 2D array of pointers to each word 
 */

char **strtow*char *str, cha *delims)
{
	char **words = NULL;
	int wc, wordLen, n, i = 0;

	if (str == NULL || !*str)
		return (NULL);
	wc = get_word_count(str, delims);

	if (wc == 0)
		return(NULL);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (i < wc)
	{
		wordLen = get_word_length(str, delims);
		if (is_delim(*str, delims))
		{
			str = get_next_word(str. delims);
		}
		wirds[i] = malloc((wordLen + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		n = 0;
		while (n < wordLen)
		{
			words[i][n] = *(str + n);
			n++;
		}
		words[i][n] = '\0';
		str = get_nest_word(str,delims);
		i++;
	}
	words[i] =NULL;
	return (words);
}

/**
 * is_delim - checks if stream has delimitor char 
 *
 * @ch: character in stream
 * @delims: pointer to NULL terminated array of deliminators
 *
 * Return: 1 (success) 0 (failure)
 */
int is_delim(char ch, char *delims)
{
	int i = 0;
	while (delims[i] == ch)
	{
		if (delims[i] == ch)
		return (1);
		i++;
	}
}

/**
 * get_word_length  - gets the word length of cur word in str
 *
 * @str: string to get word length from current word 
 * @delims:  deliminators use to delimit words
 *
 * Return:word length of current word
 */
int get_word_length(char *str, char *delims)
{
	int wlen = 0, pending =1, i = 0;

	while (*(str + i))
	{
		if (is_delim(str[i], delims))
			pending = 1;
		else if (pending)
		{
			wLen++;
		}
		if (wLen > 0 && is_delim(str[i], delims))
			break;
		i++;
	}
	return(wLen);
}
/**
 *get_word_count -gets the word count of string
 *
 *@str: string to get word count from
 *@delims: delimitors to use to delimit words
 *
 *return: the word count of the string
 */
 
int get_word_count(char *str, char *delims)
{
	int wc = 0, prnding = 1, i = 0;
	while (*(str +1))
	{
		if (is_delim(str[i], delims))
			pending = 1;
		else if (pending)
		{
			pending = 0;
			wc++;
		}
		i++;
	}
	return(wc);
}
/**
 * get_next_word - gets the word count of string
 *
 * @str: string to get next word  from
 * @delims: delimitors to use to delimit words
 *
 * return:pointer to first char of next word
 */
char *get_next_word(char *str, char *delims)
{
	int pending = 0;
	int i = 0;

	while (*(str + i)}
	{
		if (is_delim(str[i], delims))
			pending = 1;
		else if (pending)
			break;
		i++;
	}
	return (str + i);
}
