/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:20:33 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/23 10:29:31 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	size_t			i;
	unsigned int	slen;
	char			*s1;

	slen = ft_strlen(s);
	s2 = malloc((len + 1) * sizeof(char));
	s1 = ft_strdup(s);
	i = 0;
	if (s2 == NULL)
		return (NULL);
	if (start >= 0 && len <= slen && start < slen && len != 0)
	{
		while (i <= (len - 1))
		{
			s2[i] = s1[(start + i)];
			i++;
		}
		return (s2);
	}
	free (s2);
	return (NULL);
}
