/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:38:35 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/24 13:58:22 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	count_substrings(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

size_t	get_substring_length(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

char	*copy_substring(char const *s, size_t start, size_t end)
{
	char	*substring;
	size_t	i;

	substring = (char *)malloc((end - start + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		substring[i++] = s[start++];
	}
	substring[i] = '\0';
	return (substring);
}

void	copy_substrings(char **matrix, char const *s, char c)
{
	size_t	i;
	size_t	substr_count;
	size_t	start;
	size_t	end;

	i = 0;
	substr_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (start != end)
		{
			matrix[substr_count] = copy_substring(s, start, end);
			if (matrix[substr_count] == NULL)
			{
				while (substr_count--)
					free(matrix[substr_count]);
				free(matrix);
				return ;
			}
			substr_count++;
		}
	}
	matrix[substr_count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	substr_count;
	char	**matrix;

	if (s == NULL)
		return (NULL);
	substr_count = count_substrings(s, c);
	matrix = (char **)malloc((substr_count + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	copy_substrings(matrix, s, c);
	return (matrix);
}

/*
**************DO NOT WORK
#include "libft.h"
#include <stdlib.h>

static size_t	get_substring_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	copy_substrings(char **matrix, char const *s, char c)
{
	size_t	i;
	size_t	substr_count;
	size_t	start;
	size_t	end;

	i = 0;
	substr_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (start != end)
		{
			matrix[substr_count] = ft_substr(s, start, end - start);
			if (matrix[substr_count] == NULL)
			{
				while (substr_count--)
					free(matrix[substr_count]);
				free(matrix);
				return ;
			}
			substr_count++;
		}
	}
	matrix[substr_count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	substr_count;
	char	**matrix;

	if (s == NULL)
		return (NULL);
	substr_count = get_substring_count(s, c);
	matrix = (char **)malloc((substr_count + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	copy_substrings(matrix, s, c);
	return (matrix);
}

#include "libft.h"
#include <stdlib.h>

static	size_t	count_substrings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (s == NULL || *s == '\0')
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**allocate_matrix(size_t count)
{
	char	**matrix;

	matrix = (char **)malloc((count + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	return (matrix);
}

char	**split_string(char const *s, char c, char **matrix)
{
	size_t	i;
	size_t	count;
	size_t	end;
	size_t	start;

	if (s == NULL || *s == '\0')
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
		{
			matrix[count] = ft_substr(s, start, end - start);
			if (!matrix[count])
			{
				while (count > 0)
					free(matrix[--count]);
				free(matrix);
				return (NULL);
			}
			count++;
		}
	}
	matrix[count] = NULL;
	return (matrix);
}
**************

#include "libft.h"
#include <stdlib.h>

static size_t	count_substrings(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
		{
			s++;
		}
	}
	return (count);
}

//static char **allocate_matrix(size_t count)
//{
//	char	**matrix;

//	matrix = (char **)malloc((count + 1) * sizeof(char *));
//        if (!matrix)
//    {
//        perror("Memory allocation failed");
//        exit(EXIT_FAILURE);
//    }
//       return (matrix);
//}

static void	fill_matrix(char const *s, char c, char **matrix)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	count = 0;
	while (*s)
	{
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len)
		{
			matrix[count] = ft_substr(s, 0, len);
			count++;
			s += len;
		}
		else
		{
			s++;
		}
	}
	matrix[count] = NULL;
}

//char	**ft_split(char const *s, char c)
//{
//	size_t	count;
//	char	**matrix;

//	if (!s)
//		return (NULL);
//	count = count_substrings(s, c);
//	matrix = allocate_matrix(count);
//	if (!matrix)
//		return (NULL);
//	fill_matrix(s, c, matrix);
//	return (matrix);
//}

char	**split_string(char const *s, char c, char **matrix)
{
	size_t i, start, end, count =  0;
	i =  0;
	while (s[i])
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (start != end && !(matrix[count++] = ft_substr(s, start, end
					- start)))
		{
			while (count--) free(matrix[count]);
			free(matrix);
			return (NULL);
			}
	matrix[count] = NULL;
	return (matrix);
}
char	**ft_split(char const *s, char c) {
	size_t count;
	char **matrix;

	if (!s) return (NULL);

	count = count_substrings(s, c);
	matrix = allocate_matrix(count);
	if (!matrix) return (NULL); // Error handling

	return (split_string(s, c, matrix));
}

*****************************************
#include "libft.h"
#include <stdlib.h>

char			**ft_split2(char const *s, char c, char **matrix, size_t start);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_	end;
	size_t	count;
	char	**matrix;

	if (!s)
		return (NULL);
	matrix = NULL;
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	if (!(matrix = (char **)malloc((count + 1) * sizeof(char *))))
		return (NULL);
	return (ft_split2(s, c, matrix, start));
}

char	**ft_split2(char const *s, char c, char **matrix, size_t start)
{
	size_t	i;
	size_t	count;
	size_t	end;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (start != end && !(matrix[count++] = ft_substr(s, start, end
					- start)))
		{
			while (count--)
				free(matrix[count]);
			free(matrix);
			return (NULL);
		}
	}
	matrix[count] = NULL;
	return (matrix);
}
*****************************************
 THIS IS  TOO LONG
///

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	substr_count;
	char	**matrix;

	if (s == NULL)
			return (NULL);
	i = 0;
	substr_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			substr_count++;
		while (s[i] && s[i] != c)
			i++;
	}
	matrix = (char **)malloc((substr_count + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	i = 0;
	substr_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (start != end)
		{
			matrix[substr_count] = ft_substr(s, start, end - start);
			if (matrix[substr_count] == NULL)
			{
				while (substr_count--)
					free(matrix[substr_count]);
				free(matrix);
				return (NULL);
			}
			substr_count++;
		}
	}
	matrix[substr_count] = NULL;
	return (matrix);
}
*******************************
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**matrix;
	int		word_count;

	if (s == NULL) {
		return (NULL);
	}
	// Count the number of words in the string
	word_count =  0;
	i =  0;
	while (s[i]) {
		if (s[i] == c) {
			word_count++;
		}
		i++;
	}
	word_count++; // For the last word
	// Allocate memory for the matrix
	matrix = (char **)malloc((word_count +  1) * sizeof(char *));
	if (matrix == NULL) {
		return (NULL); // Handle memory allocation failure
	}
	// Allocate memory for each word and fill the matrix
	i =  0;
	j =  0;
	k =  0;
	while (s[i]) {
		if (s[i] == c || s[i] == '\0') {
			// Allocate memory for the word and copy it
			matrix[k] = (char *)malloc((j - i +  1) * sizeof(char));
			if (matrix[k] == NULL) {
				// Free previously allocated memory and return NULL
				for (int m =  0; m < k; m++) {
					free(matrix[m]);
				}
				free(matrix);
				return (NULL);
			}
			strncpy(matrix[k], &s[i], j - i);
			matrix[k][j - i] = '\0'; // Null-terminate the string
			k++;
			j = i +  1; // Start of the next word
		}
		i++;
	}
	matrix[k] = NULL; // Add the sentinel NULL at the end
	return (matrix);
}

void	ft_free_split(char **split) {
	int i =  0;
	while (split[i] != NULL) {
		free(split[i]);
		i++;
	}
	free(split);
}

//

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
size_t			i;
size_t			j;
char			**matrix;
char			matrixs;

if (s != 0)
	return (NULL);
i = 0;
j = ft_strlen(s);
while (s[i] != 0 && ft_strchr(&c, s[i]) != 0)
while (j > i && ft_strchr(&c, s[j++] == c))
//(char **)matrix = matrixs;
matrixs = *ft_substr(s, i, j -i);
	return(matrix);
}*/
