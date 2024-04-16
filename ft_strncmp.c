/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:12:04 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/16 10:49:46 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	a;
	int	b;
	int	i;

	a = 0;
	b = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != '\0')
			a += s1[i];
		if (s2[i] != '\0')
			b += s2[i];
		i++;
	}
	if (s1 > s2)
		return (1);
	if (s1 == s2 || s1 < s2)
		return (0);
}
