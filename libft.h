/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:17:57 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/22 20:40:37 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>

void	*ft_memset(void *str, int c, unsigned long int n);
void	*ft_bzero(void *str, unsigned long int n);
void	*ft_memcpy(void *dest, void *src, unsigned long int n);
void	*ft_memccpy(void *dest, const void *src, int c, unsigned long int n);
void	*ft_memmove(void *dest, const void *src, unsigned long int n);
void	*ft_memchr(const void *s, int c, unsigned long int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned long int n);
int		ft_strlen(char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned long int size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, unsigned long int n);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
#endif