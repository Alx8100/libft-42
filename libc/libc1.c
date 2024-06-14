/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:37:31 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/13 22:14:06 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//memset
void	*ft_memset(void *str, int c, unsigned long int n)
{
	unsigned long int i = 0;
	unsigned char *ptr = (unsigned char *)str;
	while(i < n)
	{
		ptr[i] = c;
		i++;
	}
	return str;
}
//bzero
void	*ft_bzero(void *str, unsigned long int n)
{
	unsigned long int i = 0;
	unsigned char *ptr = (unsigned char *)str;
	while(i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return str;
}
// memcpy
void *ft_memcpy(void *dest,void *src,unsigned long int n)
{
	unsigned char *s1 = (unsigned char *) dest;
	unsigned char *s2 = (unsigned char *) src;
	unsigned long int i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return dest;
}
// memccpy
void *ft_memccpy(void *dest, const void *src, int c, unsigned long int n)
{	
	unsigned char *s1 = (unsigned char *) dest;
	unsigned char *s2 = (unsigned char *) src;
	unsigned long int i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		if(s2[i] == (unsigned char) c)
		{
			return (void *)(s1+i+1);
		}
		i++;
	}
	return (NULL);
}
// memmove
void *ft_memmove(void *dest, const void *src, unsigned long int n)
{
	unsigned char *s1 = (unsigned char *) dest;
	unsigned char *s2 = (unsigned char *) src;
	unsigned char *arr = (unsigned char *) malloc(sizeof(unsigned char) * ft_strlen(s2));
	unsigned long int i = 0;
	while(i < n)
	{
		arr[i] = s2[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		s1[i] = arr[i];
		i++;
	}
	return dest;
}
// memchr
void *memchr(const void s[.n], int c, unsigned long int n)
{
	
}
// memcmp
int ft_memcmp(const void *s1, const void *s2, unsigned long int n)
{
	const unsigned char *str1 = (unsigned char *) s1;
	const unsigned char *str2 = (unsigned char *) s2;
	unsigned long int i = 0;
	while(i < n)
	{
		if(str1[i]!=str2[i])
			return (str1[i]-str2[i]);
		i++;
	}
	return (0);
}
// strlen
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}
// strdup

// strcpy
char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (dest[i])
	{
		src[i] = dest[i];
		i++;
	}
	src[i] = '\0';
	return src;
}
// strcat
char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while(src[j])
	{
		dest[i+j]=src[j];
		j++;
	}
	return dest;
}

// strncat
char *ft_strncat(char *dest, char *src, unsigned long int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while(src[j] && i + j <size)
	{
		dest[i+j]=src[j];
		j++;
	}
	return dest;
}

// strlcat
char *ft_strlcat(char *dest, char *src, unsigned long int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while(src[j] && i + j <size)
	{
		dest[i+j]=src[j];
		j++;
	}
	return ft_strlen(dest) + ft_strlen(src);
}
// strchr
char *strchr(const char *s, int c);

// strrchr
char *strrchr(const char *s, int c);
// strstr
char *strstr(const char *haystack, const char *needle);
// strnstr

// strncmp
int strncmp(const char s1[.n], const char s2[.n], unsigned long int n);
// atoi
int atoi(const char *nptr);
// isalpha
int isalpha(int c);
// isdigit
int isdigit(int c);
// isalnum
int isalnum(int c);
// isascii
int isascii(int c);
// isprint
int isprint(int c);
// toupper
int toupper(int c);
// tolower
int tolower(int c);