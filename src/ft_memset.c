/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:31:31 by abonanno          #+#    #+#             */
/*   Updated: 2024/06/21 12:31:41 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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