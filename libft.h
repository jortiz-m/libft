/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:28:33 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/04/12 13:14:32 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <xlocale.h>
# include <stddef.h>
# include <stddef.h>

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isdigit(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isalnum(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isascii(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isprint(int c);
/**
 * @brief 
 * 
 * @param str 
 * @return int 
 */
int		ft_strlen(const char *str);
/**
 * @brief 
 * 
 * @param str 
 * @param c 
 * @param len 
 */
void	*ft_memset(void *str, int c, size_t len);
/**
 * @brief 
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param len 
 * @return void* 
 */
void	*ft_memmove(void *dst, const void *src, size_t len);
/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */
size_t	ft_stlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return size_t 
 */
size_t	ft_strlcat(char *dst, const char *src, size_t n);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_tuopper(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_tolower(int c);
/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *str, int chr);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

int	ft_atoi(const char *str);

#endif