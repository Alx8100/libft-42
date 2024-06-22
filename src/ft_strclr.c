/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:07:16 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/22 17:08:32 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return ;
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
}
