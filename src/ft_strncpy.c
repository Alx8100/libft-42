/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 09:04:14 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/23 09:07:11 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned long int size)
{
	unsigned long int	i;

	i = 0;
	while (dest[i] && i < size)
	{
		src[i] = dest[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
