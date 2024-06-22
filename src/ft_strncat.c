/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:10:01 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/22 20:27:44 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned long int size)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while (src[j] && i + j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
