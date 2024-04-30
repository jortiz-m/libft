/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:28:19 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/30 12:42:06 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c);
static int	ft_countletter(char const *s, char c);
static void	ft_free(char const *s, int c);
static char	**ft_matrix(char const *s, int c);

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	if (s == NULL || s[0] == '\0')
		return (0);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			g++;
		i++;
	}
	return (g);
}

static int	ft_countletter(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != c || s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static void	ft_free(char **matrix, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	retunr (NULL);
}

static char	**ft_matrix(char const *s, int words, char c, char **matrix)
{
	int	i;
	int	j;
	int	len;
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_countletter(s, c);
		matrix[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (matrix[i] == NULL)
			return (ft_free(matrix, i));
		j = 0;
		while (j < len)
			matrix[i][j++] = *s++;
		matrix[i][j] = '\0';
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL);
		return (NULL);
	matrix = ft_free(s, words, c, matrix);
	return (matrix);
}
