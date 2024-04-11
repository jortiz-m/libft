/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:28:33 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/11 12:11:27 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <xlocale.h>

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_isalpha(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_isdigit(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_isalnum(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_isascii(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_isprint(int c);
/**
 * @brief 
 * 
 * @param str 
 * @return int 
 */
int	ft_strlen(const char *str);



#endif