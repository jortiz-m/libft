/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:10:13 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/15 13:22:30 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*lst;

	lst = NULL;
	while (*str != '\0')
	{
		if (*str == (char c))
		{
			lst = (char *)str;
			str++;
		}
	}
	if (*str == (char)c)
		return ((char *)str);
	return (lst);
}
