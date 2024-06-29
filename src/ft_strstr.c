/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:31:03 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/27 19:20:36 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	if(ft_strlen((char *)needle) == 0)
		return (char *)haystack;
	i = 0;
	j = 0;
	k = 0;
	while(haystack[i])
	{
		if(haystack[i] == needle[j])
		{
			while(haystack[i + k] == needle[j])
			{
				k++;
				j++;
			}
			k = 0;
			if(j == ft_strlen((char*)needle))
				return (char*)&haystack[i];
			j = 0;
		}
		i++;
	}
	return NULL;
}