/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:04:42 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/26 10:02:11 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, unsigned long int n)
{
	unsigned char		*s1;
	unsigned char		*s2;
	int					i;

	s1 = (unsigned char *) dest;
	s2 = (unsigned char *) src;
	i = 0;
	while ((unsigned long int) i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
