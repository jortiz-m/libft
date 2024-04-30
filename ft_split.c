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

char	**ft_split(char const *s, char c)
{
}
