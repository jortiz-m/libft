/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:09:16 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/23 11:38:09 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	neg;

	i = 0;
	number = 0;
	neg = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * neg);
}
