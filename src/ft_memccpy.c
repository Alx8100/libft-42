/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 00:22:49 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/22 00:27:34 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned long int n)
{
	unsigned char		*s1;
	unsigned char		*s2;
	unsigned long int	i;

	s1 = (unsigned char *) dest;
	s2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (unsigned char) c)
		{
			return ((void *)(s1 + i + 1));
		}
		i++;
	}
	return (NULL);
}
