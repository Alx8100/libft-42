/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:02:05 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/22 17:03:01 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long int n)
{
	unsigned char		*s1;
	unsigned char		*s2;
	unsigned char		*arr;
	unsigned long int	i;

	s1 = (unsigned char *) dest;
	s2 = (unsigned char *) src;
	arr = (unsigned char *)
		malloc(sizeof(unsigned char) * ft_strlen((char *) s2));
	i = 0;
	while (i < n)
	{
		arr[i] = s2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		s1[i] = arr[i];
		i++;
	}
	return (dest);
}
