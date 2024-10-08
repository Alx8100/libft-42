/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:13:00 by abonanno          #+#    #+#             */
/*   Updated: 2024/09/26 10:29:00 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_find_little(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + k] == little[j] && i + k < len)
			{
				k++;
				j++;
			}
			k = 0;
			if (j == ft_strlen((char *)little))
				return ((char *)&big[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (ft_strlen((char *)little) == 0)
		return ((char *) big);
	return (ft_find_little(big, little, len));
}
